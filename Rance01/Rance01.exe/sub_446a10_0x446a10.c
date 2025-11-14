// 函数: sub_446a10
// 地址: 0x446a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = (*(*arg3 + 8))(arg4, arg2)
char* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg3 + 0x1c))() - arg8 * 4
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
                int32_t* ecx_11
                ecx_11.b = *esi
                uint32_t edx_5 = zx.d(ecx_11.b)
                char eax_16 = (((((zx.d(*edi) * edx_5) s>> 8) - edx_5) * arg10) s>> 8).b + ecx_11.b
                ecx_11.b = esi[1]
                *esi = eax_16
                uint32_t edx_6 = zx.d(ecx_11.b)
                char eax_22 =
                    (((((zx.d(edi[1]) * edx_6) s>> 8) - edx_6) * arg10) s>> 8).b + ecx_11.b
                ecx_11.b = esi[2]
                esi[1] = eax_22
                uint32_t edx_7 = zx.d(ecx_11.b)
                esi[2] = (((((zx.d(edi[2]) * edx_7) s>> 8) - edx_7) * arg10) s>> 8).b + ecx_11.b
                esi = &esi[4]
                edi = &edi[4]
                j = arg3
                arg3 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_8]
        edi = &edi[result]
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
