// 函数: sub_44cb10
// 地址: 0x44cb10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg16[8]
int32_t edi = *arg16
char* esi = (*(*arg3 + 8))(arg4, arg2)
int32_t* var_4 = (*(*arg5 + 8))(arg6, arg7)
void* var_8 = (*(*arg10 + 8))(arg11, arg12)
int32_t eax_12 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_15 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg10 + 0x1c))() - arg8 * 4
arg3:3.b = arg15[8]
char edx_9 = arg15[4]
arg15:3.b = *arg15
arg10:3.b = edx_9
arg5:3.b = arg14[8]
char edx_11 = arg14[4]
arg14:3.b = *arg14
int32_t result_1 = result
arg16:3.b = edx_11

if (arg9 s> 0)
    int32_t i_1 = arg9
    int32_t i
    
    do
        if (arg8 s> 0)
            int32_t j_1 = arg8
            int32_t j
            
            do
                int32_t edx_15 = *var_4
                arg9 = edx_15
                edx_15.b = *(((zx.d(edx_15.b) * zx.d(arg3:3.b)) s>> 8) + zx.d(arg5:3.b) + edi)
                int32_t ecx_27 = zx.d(arg9:2.b) * zx.d(arg15:3.b)
                arg9:1.b = *(((zx.d(arg9:1.b) * zx.d(arg10:3.b)) s>> 8) + zx.d(arg16:3.b) + edi)
                arg9:2.b = *((ecx_27 s>> 8) + zx.d(arg14:3.b) + edi)
                uint32_t eax_27 = zx.d(*esi)
                int32_t ecx_33 = (zx.d(*(var_8 + 3)) * arg13) s>> 8
                *esi +=
                    (((zx.d(*(zx.d(edx_15.b) + (eax_27 << 8) + ebx)) - eax_27) * ecx_33) s>> 8).b
                uint32_t eax_34 = zx.d(esi[1])
                esi[1] +=
                    (((zx.d(*(zx.d(arg9:1.b) + (eax_34 << 8) + ebx)) - eax_34) * ecx_33) s>> 8).b
                uint32_t eax_41 = zx.d(esi[2])
                esi[2] +=
                    (((zx.d(*(zx.d(arg9:2.b) + (eax_41 << 8) + ebx)) - eax_41) * ecx_33) s>> 8).b
                var_4 = &var_4[1]
                var_8 += 4
                esi = &esi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_12]
        var_4 += eax_15
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
