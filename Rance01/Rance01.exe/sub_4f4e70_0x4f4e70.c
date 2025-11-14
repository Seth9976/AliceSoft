// 函数: sub_4f4e70
// 地址: 0x4f4e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x30c30c31, *(arg3 + 0x1c) - *(arg3 + 0x18))
    int32_t edx_4 = edx_3 s>> 4
    
    if (arg1 s< (edx_4 u>> 0x1f) + edx_4 && arg2 s>= 0)
        int32_t* esi_1 = arg1 * 0x54 + *(arg3 + 0x18) + 0x20
        
        if (arg2 s< (esi_1[1] - *esi_1) s/ 0x1c)
            int32_t edx_9 = *esi_1
            int32_t ecx_4 = arg2 * 7
            void* ebx = edx_9 + (ecx_4 << 2)
            *arg4 = fconvert.s(fconvert.t(*(edx_9 + (ecx_4 << 2))))
            *arg5 = fconvert.s(fconvert.t(*(ebx + 4)))
            *arg6 = fconvert.s(fconvert.t(*(ebx + 8)))
            
            for (void* i = *(ebx + 0xc); i != *(ebx + 0x10); i += 0xc)
                sub_416780(i + 4, arg7)
                sub_4f5910(i + 8, arg8)
            
            float* eax_6
            eax_6.b = 1
            return eax_6

arg2.b = 0
return arg2
