// 函数: sub_448780
// 地址: 0x448780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg10
char* esi = (*(*arg3 + 8))(arg4, arg2)
void* edi = (*(*arg5 + 8))(arg6, arg7)
arg10 = (*(*ebx + 8))(arg11, arg12)
int32_t eax_11 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_13 = (*(*arg5 + 0x1c))()
int32_t result = (*(*ebx + 0x1c))() - arg8 * 4
int32_t result_1 = result

if (arg9 s> 0)
    arg5 = arg9
    int32_t* i
    
    do
        if (arg8 s> 0)
            arg3 = arg8
            int32_t* j
            
            do
                uint32_t edx_7
                edx_7.b = *esi
                uint32_t eax_17 = zx.d(edx_7.b)
                int32_t ebx_4 = ((zx.d(*edi) * eax_17) s>> 8) - eax_17
                eax_17.b = esi[1]
                int32_t ecx_21 = (zx.d(*(arg10 + 3)) * zx.d(*(edi + 3))) s>> 8
                *esi = ((ebx_4 * ecx_21) s>> 8).b + edx_7.b
                uint32_t edx_8 = zx.d(eax_17.b)
                char ebx_12 =
                    (((((zx.d(*(edi + 1)) * edx_8) s>> 8) - edx_8) * ecx_21) s>> 8).b + eax_17.b
                eax_17.b = esi[2]
                esi[1] = ebx_12
                uint32_t edx_9 = zx.d(eax_17.b)
                arg10 = &arg10[1]
                esi[2] =
                    (((((zx.d(*(edi + 2)) * edx_9) s>> 8) - edx_9) * ecx_21) s>> 8).b + eax_17.b
                esi = &esi[4]
                edi += 4
                j = arg3
                arg3 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_11]
        edi += eax_13 - arg8 * 4
        arg10 += result
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
