// 函数: sub_40f3d0
// 地址: 0x40f3d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx
*sub_40f500(arg2, edx, arg1 + 0x24) = arg3
int32_t result = *(arg1 + 0x10)
int32_t i = 0

if (((*(arg1 + 0x14) - result) & 0xfffffffc) s> 0)
    do
        (*(**(*(result + (i << 2)) + 0x20) + 8))(arg2, arg3)
        result = *(arg1 + 0x10)
        i += 1
    while (i s< (*(arg1 + 0x14) - result) s>> 2)

return result
