// 函数: sub_4f5180
// 地址: 0x4f5180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x78787879, *(arg2 + 0x2c) - *(arg2 + 0x28))
    int32_t edx_4 = edx_3 s>> 5
    
    if (arg1 s< (edx_4 u>> 0x1f) + edx_4)
        int32_t eax_3 = *(arg2 + 0x28)
        int32_t edx_7 = arg1 * 0x11
        *(arg3 + 4) = *(eax_3 + (edx_7 << 2) + 0x28)
        int32_t* esi = eax_3 + (edx_7 << 2)
        *(arg3 + 8) = esi[0xb]
        *(arg3 + 0xc) = esi[0xc]
        *(arg3 + 0x10) = esi[0xd]
        *(arg3 + 0x14) = esi[0xe]
        *(arg3 + 0x18) = esi[0xf]
        *(arg3 + 0x1c) = esi[0x10]
        *arg4 = sub_4f50b0(arg2, esi[8])
        sub_401180(arg5, 0xffffffff, esi, 0)
        int32_t* eax_7
        eax_7.b = 1
        return eax_7

arg2.b = 0
return arg2
