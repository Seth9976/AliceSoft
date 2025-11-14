// 函数: sub_4451d0
// 地址: 0x4451d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg15
void* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* ebx = (*(*arg4 + 8))(arg5, arg6)
void* var_8 = (*(*arg9 + 8))(arg10, arg11)
int32_t eax_12 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t eax_15 = (*(*arg4 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg9 + 0x1c))() - arg7 * 4
arg1:3.b = arg14[8]
arg9:3.b = arg14[4]
char ecx_16 = arg14[0xc]
arg14:3.b = *arg14
arg4:3.b = arg13[8]
arg15:3.b = arg13[4]
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
                int32_t ecx_21 = *ebx
                esi += 4
                uint32_t eax_21
                eax_21.b = (((zx.d(ecx_21.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b))[edi]
                arg8:1.b = *(((zx.d(ecx_21:1.b) * zx.d(arg9:3.b)) s>> 8) + zx.d(arg15:3.b) + edi)
                int32_t ecx_33 = ((zx.d(arg8:3.b) * zx.d(ecx_16)) s>> 8) + zx.d(ecx_18)
                arg8:2.b = *(((zx.d(ecx_21:2.b) * zx.d(arg14:3.b)) s>> 8) + zx.d(arg13:3.b) + edi)
                int32_t ecx_38 = (zx.d(*(var_8 + 3)) * zx.d(*(ecx_33 + edi)) * arg12) s>> 0x10
                *(esi - 4) = *(zx.d(*(esi - 4)) + ((zx.d(eax_21.b) * ecx_38) s>> 8) + edi)
                var_8 += 4
                uint32_t ecx_39 = zx.d(*(esi - 2))
                *(esi - 3) = *(zx.d(*(esi - 3)) + ((zx.d(arg8:1.b) * ecx_38) s>> 8) + edi)
                *(esi - 2) = *(ecx_39 + ((zx.d(arg8:2.b) * ecx_38) s>> 8) + edi)
                ebx = &ebx[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi += eax_12
        ebx += eax_15
        var_8 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
