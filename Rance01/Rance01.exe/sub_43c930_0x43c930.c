// 函数: sub_43c930
// 地址: 0x43c930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg10
char* esi = (*(*arg3 + 8))(arg4, arg2)
char* edi = (*(*arg5 + 8))(arg6, arg7)
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
                char edx_7 = *esi
                uint32_t ecx_19 = zx.d(*(arg10 + 3))
                uint32_t eax_17
                eax_17.b = esi[1]
                *esi = (((zx.d(*edi) - zx.d(edx_7)) * ecx_19) s>> 8).b + edx_7
                char edx_11 = (((zx.d(edi[1]) - zx.d(eax_17.b)) * ecx_19) s>> 8).b + eax_17.b
                eax_17.b = esi[2]
                arg10 = &arg10[1]
                esi[1] = edx_11
                esi[2] = (((zx.d(edi[2]) - zx.d(eax_17.b)) * ecx_19) s>> 8).b + eax_17.b
                esi = &esi[4]
                edi = &edi[4]
                j = arg3
                arg3 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_11]
        edi = &edi[eax_13 - arg8 * 4]
        arg10 += result
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
