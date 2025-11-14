// 函数: sub_44f4b0
// 地址: 0x44f4b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg13 + 0x20)
char* esi = (*(*arg1 + 8))(arg2, arg3)
char* edi = (*(*arg4 + 8))(arg5, arg6)
arg13 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg9 + 0x1c))() - arg7 * 4
int32_t result_1 = result

if (arg8 s> 0)
    arg4 = arg8
    int32_t* i
    
    do
        if (arg7 s> 0)
            arg1 = arg7
            int32_t* j
            
            do
                uint32_t eax_19 = zx.d(*esi)
                int32_t ecx_20 = (zx.d(*(arg13 + 3)) * zx.d(edi[3]) * arg12) s>> 0x10
                arg13 += 4
                *esi += (((zx.d(*(zx.d(*edi) + (eax_19 << 8) + ebx)) - eax_19) * ecx_20) s>> 8).b
                uint32_t eax_26 = zx.d(esi[1])
                esi = &esi[4]
                char eax_31 =
                    (((zx.d(*((eax_26 << 8) + zx.d(edi[1]) + ebx)) - eax_26) * ecx_20) s>> 8).b
                    + esi[0xfffffffd]
                edi = &edi[4]
                esi[0xfffffffd] = eax_31
                uint32_t eax_32 = zx.d(esi[0xfffffffe])
                j = arg1
                arg1 -= 1
                esi[0xfffffffe] += (((zx.d(*((eax_32 << 8) + zx.d(edi[0xfffffffe]) + ebx)) - eax_32)
                    * ecx_20) s>> 8).b
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_12]
        edi = &edi[eax_15]
        arg13 += result
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
