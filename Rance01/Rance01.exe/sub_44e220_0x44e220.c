// 函数: sub_44e220
// 地址: 0x44e220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg15[8]
int32_t edi = *arg15
char* esi = (*(*arg3 + 8))(arg4, arg2)
int32_t* var_8 = (*(*arg5 + 8))(arg6, arg7)
void* var_c = (*(*arg10 + 8))(arg11, arg12)
int32_t eax_12 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_15 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg10 + 0x1c))() - arg8 * 4
arg3:3.b = arg14[8]
arg10:3.b = arg14[4]
char ecx_16 = arg14[0xc]
arg14:3.b = *arg14
arg5:3.b = arg13[8]
arg15:3.b = arg13[4]
char ecx_18 = arg13[0xc]
int32_t result_1 = result
arg13:3.b = *arg13

if (arg9 s> 0)
    int32_t i_1 = arg9
    int32_t i
    
    do
        if (arg8 s> 0)
            int32_t j_1 = arg8
            int32_t j
            
            do
                int32_t edx_18 = *var_8
                arg9 = edx_18
                edx_18.b = *(((zx.d(edx_18.b) * zx.d(arg3:3.b)) s>> 8) + zx.d(arg5:3.b) + edi)
                int32_t ecx_27 = zx.d(arg9:2.b) * zx.d(arg14:3.b)
                arg9:1.b = *(((zx.d(arg9:1.b) * zx.d(arg10:3.b)) s>> 8) + zx.d(arg15:3.b) + edi)
                int32_t ecx_31 = zx.d(arg9:3.b) * zx.d(ecx_16)
                arg9:2.b = *((ecx_27 s>> 8) + zx.d(arg13:3.b) + edi)
                uint32_t eax_29 = zx.d(*esi)
                int32_t ecx_37 =
                    (zx.d(*(var_c + 3)) * zx.d(*((ecx_31 s>> 8) + zx.d(ecx_18) + edi))) s>> 8
                *esi +=
                    (((zx.d(*(zx.d(edx_18.b) + (eax_29 << 8) + ebx)) - eax_29) * ecx_37) s>> 8).b
                uint32_t eax_36 = zx.d(esi[1])
                esi[1] +=
                    (((zx.d(*(zx.d(arg9:1.b) + (eax_36 << 8) + ebx)) - eax_36) * ecx_37) s>> 8).b
                uint32_t eax_43 = zx.d(esi[2])
                esi[2] +=
                    (((zx.d(*(zx.d(arg9:2.b) + (eax_43 << 8) + ebx)) - eax_43) * ecx_37) s>> 8).b
                var_8 = &var_8[1]
                var_c += 4
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
