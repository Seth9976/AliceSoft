// 函数: sub_4cfaf0
// 地址: 0x4cfaf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1

if (arg1 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x4ec4ec4f, *(arg3 + 0x10) - *(arg3 + 0xc))
    int32_t edx_4 = edx_3 s>> 4
    
    if (arg1 s< (edx_4 u>> 0x1f) + edx_4)
        int32_t* ecx_1 = arg1 * 0x34 + *(arg3 + 0xc)
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_401180(arg2, 0xffffffff, ecx_1, 0)
        return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
return arg2
