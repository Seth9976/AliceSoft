// 函数: sub_4413d0
// 地址: 0x4413d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg12
void* esi = (*(*arg1 + 8))(arg2, arg3)
char* edi = (*(*arg4 + 8))(arg5, arg6)
arg12 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t* result = (*(*arg9 + 0x1c))() - arg7 * 4
arg9 = result

if (arg8 s> 0)
    arg4 = arg8
    int32_t* i
    
    do
        if (arg7 s> 0)
            arg1 = arg7
            int32_t* j
            
            do
                uint32_t ecx_17 = zx.d(*(arg12 + 3))
                int32_t edx_12
                edx_12.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_17) s>> 8) + ebx)
                *esi = edx_12.b
                arg12 = &arg12[1]
                int32_t eax_23
                eax_23.b = *(zx.d(*(esi + 1)) + ((zx.d(edi[1]) * ecx_17) s>> 8) + ebx)
                *(esi + 1) = eax_23.b
                ecx_17.b = *(zx.d(*(esi + 2)) + ((zx.d(edi[2]) * ecx_17) s>> 8) + ebx)
                *(esi + 2) = ecx_17.b
                esi += 4
                edi = &edi[4]
                j = arg1
                arg1 -= 1
            while (j != 1)
            result = arg9
        
        esi += eax_12
        edi = &edi[eax_15]
        arg12 += result
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
