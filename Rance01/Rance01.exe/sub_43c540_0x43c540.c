// 函数: sub_43c540
// 地址: 0x43c540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *arg11
int32_t* edi = (*(*arg1 + 8))(arg2, arg3)
int32_t* ebx = (*(*arg4 + 8))(arg5, arg6)
int32_t eax_9 = (*(*arg1 + 0x1c))() - arg7 * 4
int32_t result = (*(*arg4 + 0x1c))() - arg7 * 4
arg1:3.b = arg10[8]
arg11:3.b = arg10[4]
char edx_8 = *arg10
char ecx_11 = arg10[0xc]
arg4:3.b = arg9[8]
arg10:3.b = arg9[4]
char edx_10 = arg9[0xc]
arg9:3.b = *arg9
int32_t result_1 = result

if (arg8 s> 0)
    int32_t i_1 = arg8
    int32_t i
    
    do
        int32_t j_1 = arg7
        
        if (j_1 s> 0)
            int32_t j
            
            do
                int32_t eax_16 = *ebx
                arg8.b = *(((zx.d(eax_16.b) * zx.d(arg1:3.b)) s>> 8) + zx.d(arg4:3.b) + esi)
                int32_t edx_26 = ((zx.d(arg8:2.b) * zx.d(edx_8)) s>> 8) + zx.d(arg9:3.b)
                arg8:1.b = *(((zx.d(eax_16:1.b) * zx.d(arg11:3.b)) s>> 8) + zx.d(arg10:3.b) + esi)
                int32_t edx_30 = ((zx.d(arg8:3.b) * zx.d(ecx_11)) s>> 8) + zx.d(edx_10)
                arg8:2.b = *(edx_26 + esi)
                arg8:3.b = *(edx_30 + esi)
                *edi = arg8
                edi = &edi[1]
                ebx = &ebx[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
        
        edi += eax_9
        ebx += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
