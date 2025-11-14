// 函数: sub_571780
// 地址: 0x571780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax_1 = zx.d((arg1 u>> 8).b)
uint32_t ecx = zx.d(arg1.b)
int32_t ecx_1

if (eax_1 != 0)
    if (eax_1 - 0x81 u<= 0x1e)
        if (ecx - 0x40 u<= 0x3e)
            ecx_1 = eax_1 * 0xbc + ecx - 0x5e5e
            goto label_571823
        
        if (ecx - 0x80 u<= 0x7c)
            ecx_1 = eax_1 * 0xbc + ecx - 0x5e5f
            goto label_571823
    else if (eax_1 - 0xe0 u<= 0xf)
        if (ecx - 0x40 u<= 0x3e)
            ecx_1 = eax_1 * 0xbc + ecx - 0x8d5e
            goto label_571823
        
        if (ecx - 0x80 u<= 0x7c)
            ecx_1 = eax_1 * 0xbc + ecx - 0x8d5f
            goto label_571823
else if (ecx - 0x20 u<= 0x5e)
    ecx_1 = ecx - 0x20
label_571823:
    
    if (ecx_1 s>= 0)
        int32_t eax_7
        int32_t edx_10
        edx_10:eax_7 = muls.dp.d(0x2aaaaaab, *(arg2 + 8) - *(arg2 + 4))
        int32_t edx_11 = edx_10 s>> 1
        
        if (ecx_1 s< (edx_11 u>> 0x1f) + edx_11)
            return *(arg2 + 4) + ecx_1 * 0xc
else if (ecx - 0xa1 u<= 0x3e)
    ecx_1 = ecx - 0x42
    goto label_571823
return 0
