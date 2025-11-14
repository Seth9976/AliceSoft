// 函数: sub_597300
// 地址: 0x597300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d60
void** eax_1 = sub_40f630(esi, arg1)
void** esi_1 = *(esi + 4)
void** var_8 = eax_1
char eax_2

if (eax_1 != esi_1)
    eax_2 = sub_40f4a0(arg1, &eax_1[3])

void*** eax_3

if (eax_1 == esi_1 || eax_2 != 0)
    void** var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &var_8

void** eax_4 = *eax_3

if (eax_4 != esi_1)
    return eax_4[7]

return 0
