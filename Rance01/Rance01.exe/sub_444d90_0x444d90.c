// 函数: sub_444d90
// 地址: 0x444d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg13
char* esi = (*(*arg1 + 8))(arg2, arg3)
void* edi = (*(*arg4 + 8))(arg5, arg6)
arg13 = (*(*arg9 + 8))(arg10, arg11)
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
                int32_t ecx_20 = (zx.d(*(arg13 + 3)) * zx.d(*(edi + 3)) * arg12) s>> 0x10
                int32_t eax_22
                eax_22.b = *(zx.d(*esi) + ((zx.d(*edi) * ecx_20) s>> 8) + ebx)
                *esi = eax_22.b
                arg13 = &arg13[1]
                esi[1] = *(zx.d(esi[1]) + ((zx.d(*(edi + 1)) * ecx_20) s>> 8) + ebx)
                esi[2] = *(zx.d(esi[2]) + ((zx.d(*(edi + 2)) * ecx_20) s>> 8) + ebx)
                esi = &esi[4]
                edi += 4
                j = arg1
                arg1 -= 1
            while (j != 1)
            result = arg9
        
        esi = &esi[eax_12]
        edi += eax_15
        arg13 += result
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
