// 函数: sub_44d680
// 地址: 0x44d680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg12[8]
int32_t edi = *arg12
char* esi = (*(*arg3 + 8))(arg4, arg2)
int32_t* var_8 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_9 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4
arg3:3.b = arg11[8]
arg12:3.b = arg11[4]
char edx_7 = *arg11
char ecx_11 = arg11[0xc]
arg5:3.b = arg10[8]
arg11:3.b = arg10[4]
char ecx_13 = arg10[0xc]
int32_t result_1 = result
arg10:3.b = *arg10

if (arg9 s> 0)
    int32_t i_1 = arg9
    int32_t i
    
    do
        if (arg8 s> 0)
            int32_t j_1 = arg8
            int32_t j
            
            do
                int32_t edx_15 = *var_8
                arg9:1.b = *(((zx.d(edx_15:1.b) * zx.d(arg12:3.b)) s>> 8) + zx.d(arg11:3.b) + edi)
                int32_t eax_19
                eax_19.b = *(((zx.d(edx_15.b) * zx.d(arg3:3.b)) s>> 8) + zx.d(arg5:3.b) + edi)
                int32_t ecx_26 = zx.d(arg9:3.b) * zx.d(ecx_11)
                arg9:2.b = *(((zx.d(edx_15:2.b) * zx.d(edx_7)) s>> 8) + zx.d(arg10:3.b) + edi)
                uint32_t edx_18 = zx.d(*esi)
                uint32_t eax_21 = zx.d(esi[1])
                uint32_t ecx_29 = zx.d(*((ecx_26 s>> 8) + zx.d(ecx_13) + edi))
                var_8 = &var_8[1]
                *esi +=
                    (((zx.d(*(zx.d(eax_19.b) + (edx_18 << 8) + ebx)) - edx_18) * ecx_29) s>> 8).b
                char eax_27 =
                    (((zx.d(*(zx.d(arg9:1.b) + (eax_21 << 8) + ebx)) - eax_21) * ecx_29) s>> 8).b
                    + esi[1]
                esi = &esi[4]
                esi[0xfffffffd] = eax_27
                uint32_t eax_28 = zx.d(esi[0xfffffffe])
                j = j_1
                j_1 -= 1
                esi[0xfffffffe] +=
                    (((zx.d(*(zx.d(arg9:2.b) + (eax_28 << 8) + ebx)) - eax_28) * ecx_29) s>> 8).b
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_9]
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
