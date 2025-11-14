// 函数: sub_43cd00
// 地址: 0x43cd00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg14
char* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* var_4 = (*(*arg4 + 8))(arg5, arg6)
void* var_8 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_11 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_14 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg9 + 0x1c))() - arg7 * 4
arg1:3.b = arg13[8]
char edx_10 = arg13[4]
arg13:3.b = *arg13
arg9:3.b = edx_10
arg4:3.b = arg12[8]
char edx_12 = arg12[4]
arg12:3.b = *arg12
int32_t result_1 = result
arg14:3.b = edx_12

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t edx_16 = *var_4
                arg8:1.b = *(((zx.d(edx_16:1.b) * zx.d(arg9:3.b)) s>> 8) + zx.d(arg14:3.b) + edi)
                int32_t eax_23
                eax_23.b = *(((zx.d(edx_16.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                uint32_t ecx_32 = zx.d(*(var_8 + 3))
                arg8:2.b = *(((zx.d(edx_16:2.b) * zx.d(arg13:3.b)) s>> 8) + zx.d(arg12:3.b) + edi)
                char edx_18 = *esi
                *esi = (((zx.d(eax_23.b) - zx.d(edx_18)) * ecx_32) s>> 8).b + edx_18
                char eax_27 = esi[1]
                char edx_22 = (((zx.d(arg8:1.b) - zx.d(eax_27)) * ecx_32) s>> 8).b + eax_27
                eax_27 = esi[2]
                esi[1] = edx_22
                var_4 = &var_4[1]
                var_8 += 4
                esi[2] = (((zx.d(arg8:2.b) - zx.d(eax_27)) * ecx_32) s>> 8).b + eax_27
                esi = &esi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_11]
        var_4 += eax_14
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
