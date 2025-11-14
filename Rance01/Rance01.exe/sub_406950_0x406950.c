// 函数: sub_406950
// 地址: 0x406950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
void* ebx = data_797d60
void** eax = *(ebx + 4)
void** arg_4
void** ebp = arg_4
void** esi = eax[1]
void** edi = eax

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x757fc4) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebx + 4)
arg_4 = edi
char eax_2

if (edi != esi_1)
    eax_2 = sub_40f4a0(0x757fc4, &edi[3])

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
        if (ebp[3] != 0)
            return (*(*ebp[3] + 0x14))(ebp) != 0
        
        result = (**ecx_2)(0x757fd4)
        ebp[3] = result
        
        if (result != 0 && (*(*result + 8))().b != 0)
            return (*(*ebp[3] + 0x14))(ebp) != 0

result.b = 0
return result
