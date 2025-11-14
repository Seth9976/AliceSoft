// 函数: sub_445b10
// 地址: 0x445b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *arg11
void* esi = (*(*arg1 + 8))(arg2, arg3)
int32_t* ebx = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg4 + 0x1c))() - arg7 * 4
arg1:3.b = arg10[8]
char ecx_11 = *arg10
arg11:3.b = arg10[4]
arg4:3.b = arg9[8]
char edx_9 = arg9[4]
arg9:3.b = *arg9
int32_t result_1 = result
arg10:3.b = edx_9

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        if (arg7 s> 0)
            int32_t j_1 = arg7
            int32_t j
            
            do
                int32_t ecx_16 = *ebx
                arg8 = ecx_16
                esi += 4
                ecx_16.b = *(((zx.d(ecx_16.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + edi)
                int32_t edx_16
                edx_16.b = *(((zx.d(arg8:1.b) * zx.d(arg11:3.b)) s>> 8) + zx.d(arg10:3.b) + edi)
                int32_t eax_20 = zx.d(arg8:2.b) * zx.d(ecx_11)
                arg8:1.b = edx_16.b
                uint32_t edx_18 = zx.d(*(esi - 3))
                int32_t eax_22
                eax_22.b = *((eax_20 s>> 8) + zx.d(arg9:3.b) + edi)
                *(esi - 4) = ((zx.d(ecx_16.b) * zx.d(*(esi - 4))) s>> 8).b
                *(esi - 3) = ((zx.d(arg8:1.b) * edx_18) s>> 8).b
                *(esi - 2) = ((zx.d(eax_22.b) * zx.d(*(esi - 2))) s>> 8).b
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
