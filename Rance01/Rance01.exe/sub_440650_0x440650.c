// 函数: sub_440650
// 地址: 0x440650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg15
char* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* var_8 = (*(*arg4 + 8))(arg5, arg6)
void* var_c = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg9 + 0x1c))() - arg7 * 4
arg1:3.b = arg14[8]
arg9:3.b = arg14[4]
char edx_10 = arg14[0xc]
arg15:3.b = *arg14
arg4:3.b = arg13[8]
arg14:3.b = arg13[4]
char ecx_18 = arg13[0xc]
int32_t result_1 = result
arg13:3.b = *arg13

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t edx_18 = *var_8
                arg8:1.b = *(((zx.d(edx_18:1.b) * zx.d(arg9:3.b)) s>> 8) + zx.d(arg14:3.b) + edi)
                int32_t ecx_31 = zx.d(arg8:3.b) * zx.d(edx_10)
                arg8:2.b = *(((zx.d(edx_18:2.b) * zx.d(arg15:3.b)) s>> 8) + zx.d(arg13:3.b) + edi)
                int32_t eax_25
                eax_25.b = *(((zx.d(edx_18.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                uint32_t edx_21
                edx_21.b = *esi
                int32_t ecx_38 = (zx.d(*(var_c + 3)) * zx.d(*((ecx_31 s>> 8) + zx.d(ecx_18) + edi))
                    * arg12) s>> 0x10
                *esi = (((zx.d(eax_25.b) - zx.d(edx_21.b)) * ecx_38) s>> 8).b + edx_21.b
                char eax_29 = esi[1]
                char edx_25 = (((zx.d(arg8:1.b) - zx.d(eax_29)) * ecx_38) s>> 8).b + eax_29
                eax_29 = esi[2]
                esi[1] = edx_25
                var_8 = &var_8[1]
                var_c += 4
                esi[2] = (((zx.d(arg8:2.b) - zx.d(eax_29)) * ecx_38) s>> 8).b + eax_29
                esi = &esi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_12]
        var_8 += eax_15
        var_c += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
