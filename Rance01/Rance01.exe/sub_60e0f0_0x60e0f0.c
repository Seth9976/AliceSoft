// 函数: sub_60e0f0
// 地址: 0x60e0f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
void* ebx = data_797d60
void** eax = *(ebx + 4)
void** arg_4
void** ebp = arg_4
void** esi = eax[1]
void** edi = eax

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x735150) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebx + 4)
arg_4 = edi
char eax_2

if (edi != esi_1)
    eax_2 = sub_40f4a0(0x735150, &edi[3])

void** eax_3

if (edi == esi_1 || eax_2 != 0)
    var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &arg_4

int32_t* eax_4 = *eax_3

if (eax_4 != esi_1)
    int32_t* ecx_2 = eax_4[7]
    
    if (ecx_2 != 0)
        int32_t* esi_2 = (**ecx_2)(0x735160)
        
        if (esi_2 != 0)
            eax_4 = (*(*esi_2 + 0x10))(0x735170)
            *ebp = eax_4
            
            if (eax_4 != 0)
                eax_4 = (*(*esi_2 + 0x10))(0x735190)
                ebp[1] = eax_4
                
                if (eax_4 != 0)
                    int32_t eax_9 = (*(*esi_2 + 0x10))(0x735180)
                    ebp[2] = eax_9
                    eax_9.b = eax_9 != 0
                    return eax_9

eax_4.b = 0
return eax_4
