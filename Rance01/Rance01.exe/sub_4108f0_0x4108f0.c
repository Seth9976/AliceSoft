// 函数: sub_4108f0
// 地址: 0x4108f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg8 s<= 0 || arg9 s<= 0)
    return 

if (*(arg1 + 0x22) != 0)
    sub_410ce0(arg4, arg3, arg2, arg5, arg6, arg7, arg8, arg9)
    return 

void* esi_1 = (*(*arg2 + 8))(arg3, arg4)
char* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_10 = (*(*arg2 + 0x1c))()
int32_t ebx_4 = arg8 * 4
int32_t eax = (*(*arg5 + 0x1c))() - ebx_4

if (arg9 s<= 0)
    return 

int32_t i_1 = arg9
int32_t i

do
    int32_t j_1 = arg8
    
    if (j_1 s> 0)
        int32_t j
        
        do
            *esi_1 = *edi_1
            *(esi_1 + 1) = edi_1[1]
            *(esi_1 + 2) = edi_1[2]
            *(esi_1 + 3) = edi_1[3]
            esi_1 += 4
            edi_1 = &edi_1[4]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    esi_1 += eax_10 - ebx_4
    edi_1 = &edi_1[eax]
    i = i_1
    i_1 -= 1
while (i != 1)
