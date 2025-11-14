// 函数: sub_44e980
// 地址: 0x44e980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x20)
char* esi = (*(*arg2 + 8))(arg3, arg4)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t result_1 = result

if (arg9 s> 0)
    arg5 = arg9
    int32_t* i
    
    do
        if (arg8 s> 0)
            arg2 = arg8
            int32_t* j
            
            do
                uint32_t eax_11 = zx.d(*esi)
                int32_t ecx_14 = (zx.d(edi[3]) * arg10) s>> 8
                char eax_17 =
                    (((zx.d(*(zx.d(*edi) + (eax_11 << 8) + ebx)) - eax_11) * ecx_14) s>> 8).b + *esi
                esi = &esi[4]
                esi[0xfffffffc] = eax_17
                uint32_t eax_18 = zx.d(esi[0xfffffffd])
                void* eax_21 = zx.d(*((eax_18 << 8) + zx.d(edi[1]) + ebx)) - eax_18
                edi = &edi[4]
                esi[0xfffffffd] += ((eax_21 * ecx_14) s>> 8).b
                uint32_t eax_24 = zx.d(esi[0xfffffffe])
                j = arg2
                arg2 -= 1
                esi[0xfffffffe] += (((zx.d(*((eax_24 << 8) + zx.d(edi[0xfffffffe]) + ebx)) - eax_24)
                    * ecx_14) s>> 8).b
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_8]
        edi = &edi[result]
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
