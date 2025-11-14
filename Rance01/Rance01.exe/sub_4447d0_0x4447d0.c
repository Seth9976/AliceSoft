// 函数: sub_4447d0
// 地址: 0x4447d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg12
void* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* ebx = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg4 + 0x1c))() - arg7 * 4
arg1:3.b = arg11[8]
arg12:3.b = arg11[4]
char edx_8 = *arg11
char ecx_11 = arg11[0xc]
arg4:3.b = arg10[8]
arg11:3.b = arg10[4]
char ecx_13 = arg10[0xc]
int32_t result_1 = result
arg10:3.b = *arg10

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t ecx_16 = *ebx
                uint32_t eax_15
                eax_15.b = (((zx.d(ecx_16.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b))[edi]
                esi += 4
                arg8:1.b = *(((zx.d(ecx_16:1.b) * zx.d(arg12:3.b)) s>> 8) + zx.d(arg11:3.b) + edi)
                int32_t ecx_28 = ((zx.d(arg8:3.b) * zx.d(ecx_11)) s>> 8) + zx.d(ecx_13)
                arg8:2.b = *(((zx.d(ecx_16:2.b) * zx.d(edx_8)) s>> 8) + zx.d(arg10:3.b) + edi)
                int32_t ecx_31 = (zx.d(*(ecx_28 + edi)) * arg9) s>> 8
                *(esi - 4) = *(zx.d(*(esi - 4)) + ((zx.d(eax_15.b) * ecx_31) s>> 8) + edi)
                *(esi - 3) = *(zx.d(*(esi - 3)) + ((zx.d(arg8:1.b) * ecx_31) s>> 8) + edi)
                ecx_31.b = *(zx.d(*(esi - 2)) + ((zx.d(arg8:2.b) * ecx_31) s>> 8) + edi)
                *(esi - 2) = ecx_31.b
                ebx = &ebx[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        esi += eax_9
        ebx += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
