// 函数: sub_5cb430
// 地址: 0x5cb430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = data_797d60
void** eax = *(ebx + 4)
void** esi = eax[1]
void** edi = eax

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x737878) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebx + 4)
void** var_8 = edi
char eax_2

if (edi != esi_1)
    eax_2 = sub_40f4a0(0x737878, &edi[3])

void** eax_3

if (edi == esi_1 || eax_2 != 0)
    void* var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &var_8

void* eax_4 = *eax_3

if (eax_4 != esi_1)
    int32_t* ecx_2 = *(eax_4 + 0x1c)
    
    if (ecx_2 != 0)
        int32_t* eax_7 = (**ecx_2)(0x737948)
        
        if (eax_7 != 0)
            int32_t result = (*(*eax_7 + 0xbc))()
            (*(*eax_7 + 4))()
            return result

return 0
