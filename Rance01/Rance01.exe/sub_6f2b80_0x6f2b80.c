// 函数: sub_6f2b80
// 地址: 0x6f2b80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = zx.d(*(arg1 + 0x30))

if (eax != 0)
    *(arg1 + 0x30) = 0
    *arg2 = sub_6f2910(eax.b)
    return 0

int32_t result = sub_6fa900(arg1)

if (result != 0)
    return result

char* var_c

if (sub_6fa870(arg1, 1, &var_c) == 0)
    *arg2 = sub_6f2910(*var_c)
    return 0

*arg2 = 0x100
return 0
