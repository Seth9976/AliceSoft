// 函数: sub_447df0
// 地址: 0x447df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = (*(*arg3 + 8))(arg4, arg2)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_7 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t result_1 = result

if (arg9 s> 0)
    arg5 = arg9
    int32_t* i
    
    do
        if (arg8 s> 0)
            arg3 = arg8
            int32_t* j
            
            do
                char edx_5 = *esi
                uint32_t ecx_13 = zx.d(edi[3])
                uint32_t eax_10 = zx.d(edx_5)
                int32_t ebx_4 = ((zx.d(*edi) * eax_10) s>> 8) - eax_10
                eax_10.b = esi[1]
                *esi = ((ebx_4 * ecx_13) s>> 8).b + edx_5
                uint32_t edx_6 = zx.d(eax_10.b)
                char ebx_12 =
                    (((((zx.d(edi[1]) * edx_6) s>> 8) - edx_6) * ecx_13) s>> 8).b + eax_10.b
                eax_10.b = esi[2]
                esi[1] = ebx_12
                uint32_t edx_7 = zx.d(eax_10.b)
                esi[2] = (((((zx.d(edi[2]) * edx_7) s>> 8) - edx_7) * ecx_13) s>> 8).b + eax_10.b
                esi = &esi[4]
                edi = &edi[4]
                j = arg3
                arg3 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_7]
        edi = &edi[result]
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
