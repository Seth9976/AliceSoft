// 函数: sub_5aff90
// 地址: 0x5aff90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax
eax.b = arg7

if (arg3 != 0 && arg1 != 0)
    int32_t ebx
    ebx.b = arg5
    *(arg1 + 0x1b) = arg9
    uint32_t var_c_1 = zx.d(arg9)
    *(arg1 + 0x1a) = arg8
    uint32_t var_10_1 = zx.d(arg8)
    uint32_t edx_2 = zx.d(arg5)
    arg1[7].b = eax.b
    arg1[6].b = ebx.b
    ebx.b = arg6
    uint32_t ecx_2 = zx.d(ebx.b)
    *arg1 = arg2
    arg1[1] = arg4
    *(arg1 + 0x19) = ebx.b
    sub_5a4e30(arg3, edx_2, ecx_2, arg2, arg4, edx_2, ecx_2, zx.d(eax.b))
    char eax_3 = *(arg1 + 0x19)
    
    if (eax_3 == 3 || (eax_3 & 2) == 0)
        *(arg1 + 0x1d) = 1
    else
        *(arg1 + 0x1d) = 3
    
    if ((eax_3 & 4) != 0)
        *(arg1 + 0x1d) += 1
    
    eax_3 = muls.dp.b(arg1[6].b, *(arg1 + 0x1d))
    *(arg1 + 0x1e) = eax_3
    
    if (arg2 u> 0x1fffff8e)
        arg1[3] = 0
        return eax_3
    
    uint32_t eax_4 = zx.d(eax_3)
    
    if (eax_3 u>= 8)
        int32_t eax_6 = (eax_4 u>> 3) * arg2
        arg1[3] = eax_6
        return eax_6
    
    eax = (eax_4 * arg2 + 7) u>> 3
    arg1[3] = eax

return eax
