// 函数: sub_55b020
// 地址: 0x55b020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** eax_1 = sub_429b30(arg1, arg2)
void** var_8 = eax_1
char eax_3

if (eax_1 != *(arg1 + 4))
    eax_3 = sub_405dd0(&eax_1[3], arg2)

void*** eax_4

if (eax_1 == *(arg1 + 4) || eax_3 != 0)
    void** var_4 = *(arg1 + 4)
    eax_4 = &var_4
else
    eax_4 = &var_8

void** eax_6 = *eax_4

if (eax_6 != *(arg1 + 4))
    return eax_6[0xa]

return 0xffffffff
