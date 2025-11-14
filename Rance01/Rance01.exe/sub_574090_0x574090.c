// 函数: sub_574090
// 地址: 0x574090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_4 = arg1[4]

if (ecx_4 == 1)
    if (arg1[5] u>= 0x10)
        arg1 = *arg1
    
    return zx.d(*arg1)

if (ecx_4 != 2)
    return 0

int32_t ecx = arg1[5]
int32_t* edx

if (ecx u< 0x10)
    edx = arg1
else
    edx = *arg1

int32_t* ecx_1

if (ecx u< 0x10)
    ecx_1 = arg1
else
    ecx_1 = *arg1

return zx.d(*edx) << 8 | zx.d(*(ecx_1 + 1))
