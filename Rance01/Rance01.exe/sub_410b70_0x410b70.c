// 函数: sub_410b70
// 地址: 0x410b70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg8 s<= 0 || arg9 s<= 0)
    return 

char eax_2 = (*(*arg2 + 0x28))()

if (eax_2 == 0)
    if (*(arg1 + 0x22) != eax_2)
        sub_410ee0(arg4, arg3, arg2, arg5, arg6, arg7, arg8, arg9)
        return 
    
    if (*(arg1 + 0x21) != 0)
        sub_410e30(arg4, arg3, arg2, arg5, arg6, arg7, arg8, arg9)
        return 

char* esi_2 = (*(*arg2 + 8))(arg3, arg4)
void* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_16 = arg8 * 4
int32_t ebx_3 = (*(*arg2 + 0x1c))() - eax_16
arg3 = ebx_3
int32_t* eax = (*(*arg5 + 0x1c))() - eax_16
arg5 = eax

if (arg9 s<= 0)
    return 

arg4 = arg9
int32_t i

do
    int32_t j_1 = arg8
    
    if (j_1 s> 0)
        int32_t j
        
        do
            char edx_11 = *esi_2
            uint32_t ecx_12 = zx.d(*(edi_1 + 3))
            char eax_22 = (((zx.d(*edi_1) - zx.d(edx_11)) * ecx_12) s>> 8).b + edx_11
            edx_11 = esi_2[1]
            *esi_2 = eax_22
            char eax_26 = (((zx.d(*(edi_1 + 1)) - zx.d(edx_11)) * ecx_12) s>> 8).b + edx_11
            edx_11 = esi_2[2]
            esi_2[1] = eax_26
            esi_2[2] = (((zx.d(*(edi_1 + 2)) - zx.d(edx_11)) * ecx_12) s>> 8).b + edx_11
            esi_2 = &esi_2[4]
            edi_1 += 4
            j = j_1
            j_1 -= 1
        while (j != 1)
        ebx_3 = arg3
        eax = arg5
    
    esi_2 = &esi_2[ebx_3]
    edi_1 += eax
    i = arg4
    arg4 -= 1
while (i != 1)
