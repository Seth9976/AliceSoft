// 函数: sub_537e30
// 地址: 0x537e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** var_4 = arg1
void** arg_4
void** ebx = arg_4
void** eax_1 = sub_429b30(&ebx[0x47], arg2)
arg_4 = eax_1
char eax_3

if (eax_1 != ebx[0x48])
    eax_3 = sub_405dd0(&eax_1[3], arg2)

void*** eax_4

if (eax_1 == ebx[0x48] || eax_3 != 0)
    var_4 = ebx[0x48]
    eax_4 = &var_4
else
    eax_4 = &arg_4

void** eax_6 = *eax_4

if (eax_6 != ebx[0x48])
    return eax_6[0xa]

return 0xffffffff
