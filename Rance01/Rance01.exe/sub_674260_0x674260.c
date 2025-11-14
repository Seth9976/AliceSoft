// 函数: sub_674260
// 地址: 0x674260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    return 0xffffffff

int32_t edx = *(arg1 + 4)

if (edx s<= arg2 && *(arg1 + 0x10) != 0)
    return (*(**(arg1 + 0x10) + 0x84))(arg2 - edx, arg3)

if (*(arg1 + 0xc) != 0)
    return (*(**(arg1 + 0xc) + 0x84))(arg2, arg3)

return 0xffffffff
