// 函数: sub_561f10
// 地址: 0x561f10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = data_797d60
void** eax = *(ebx + 4)
void** esi = eax[1]
void** edi = eax

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x74c164) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebx + 4)
void** var_8 = edi
char eax_2

if (edi != esi_1)
    eax_2 = sub_40f4a0(0x74c164, &edi[3])

void** eax_3

if (edi == esi_1 || eax_2 != 0)
    void* var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &var_8

void* eax_4 = *eax_3

if (eax_4 != esi_1)
    return *(eax_4 + 0x1c)

return 0
