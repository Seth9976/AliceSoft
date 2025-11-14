// 函数: sub_53af70
// 地址: 0x53af70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x12d0) = 0xffffffff
int32_t ecx = *(arg1 + 0x1f4)

if (ecx s>= 0)
    *(arg1 + 0x12d0) = ecx

int32_t ecx_1 = *(arg1 + 0x12d0)

if (ecx_1 == 0xffffffff)
    *(arg1 + 0x12cc) = 0
    return 

if (ecx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    *(arg1 + 0x12cc) = *(*(arg1 + 0x1e4) + (ecx_1 << 2))
    return 

*(arg1 + 0x12cc) = 0
