// 函数: sub_44afc0
// 地址: 0x44afc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg12 + 0x20)
char* esi = (*(*arg1 + 8))(arg2, arg3)
char* edi = (*(*arg4 + 8))(arg5, arg6)
arg12 = (*(*arg9 + 8))(arg10, arg11)
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
                uint32_t ecx_17 = zx.d(*(arg12 + 3))
                uint32_t eax_19 = zx.d(*esi)
                arg12 += 4
                char eax_25 =
                    (((zx.d(*(zx.d(*edi) + (eax_19 << 8) + ebx)) - eax_19) * ecx_17) s>> 8).b + *esi
                esi = &esi[4]
                esi[0xfffffffc] = eax_25
                uint32_t eax_26 = zx.d(esi[0xfffffffd])
                void* eax_29 = zx.d(*((eax_26 << 8) + zx.d(edi[1]) + ebx)) - eax_26
                edi = &edi[4]
                esi[0xfffffffd] += ((eax_29 * ecx_17) s>> 8).b
                uint32_t eax_32 = zx.d(esi[0xfffffffe])
                j = arg1
                arg1 -= 1
                esi[0xfffffffe] += (((zx.d(*((eax_32 << 8) + zx.d(edi[0xfffffffe]) + ebx)) - eax_32)
                    * ecx_17) s>> 8).b
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_12]
        edi = &edi[eax_15]
        arg12 += result
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
