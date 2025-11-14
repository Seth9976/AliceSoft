// 函数: sub_5f7bb0
// 地址: 0x5f7bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
void* ebx = data_797d60
void** eax = *(ebx + 4)
void** arg_4
void** ebp = arg_4
void** esi = eax[1]
void** edi = eax

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x7355b0) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebx + 4)
arg_4 = edi
char eax_2

if (edi != esi_1)
    eax_2 = sub_40f4a0(0x7355b0, &edi[3])

void** eax_3

if (edi == esi_1 || eax_2 != 0)
    var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &arg_4

int32_t* result = *eax_3

if (result != esi_1)
    int32_t* ecx_2 = result[7]
    
    if (ecx_2 != 0)
        result = (**ecx_2)(0x7355c0)
        
        if (result != 0)
            result = (*(*result + 0x10))(0x7355a0)
            
            if (result != 0)
                void** ecx_4
                
                if (ebp[5] u< 0x10)
                    ecx_4 = ebp
                else
                    ecx_4 = *ebp
                
                int32_t* edx_4 = *result
                arg_4 = ecx_4
                jump(*edx_4)

return result
