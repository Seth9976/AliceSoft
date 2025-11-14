// 函数: sub_412600
// 地址: 0x412600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg1 + 8))(arg2, arg3)
char* eax_5 = (*(*arg4 + 8))(arg5, arg6 + arg8 - 1)
int32_t ebx_3 = arg7 * 4
int32_t* eax_8 = (*(*arg1 + 0x1c))() - ebx_3
int32_t result = neg.d((*(*arg4 + 0x1c))() + ebx_3)

if (arg8 s> 0)
    int32_t i_1 = arg8
    char* edi_1 = eax_5
    int32_t i
    
    do
        int32_t j_1 = arg7
        
        if (j_1 s> 0)
            int32_t j
            
            do
                *esi = *edi_1
                *(esi + 1) = edi_1[1]
                *(esi + 2) = edi_1[2]
                esi += 4
                edi_1 = &edi_1[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi += eax_8
        edi_1 = &edi_1[result]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
