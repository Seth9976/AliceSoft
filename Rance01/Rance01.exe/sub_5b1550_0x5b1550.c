// 函数: sub_5b1550
// 地址: 0x5b1550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = (*(*arg1 + 8))(0, 0)
int32_t ebp_2 = arg3 * 4
int32_t* eax_4 = (*(*arg1 + 0x1c))() - ebp_2
char* edi_1 = (*(*arg2 + 8))(0, 0)
int32_t result = (*(*arg2 + 0x1c))() - ebp_2

if (arg4 s> 0)
    int32_t i_1 = arg4
    int32_t i
    
    do
        int32_t j_1 = arg3
        
        if (j_1 s> 0)
            int32_t j
            
            do
                *esi = *edi_1
                *(esi + 1) = edi_1[1]
                *(esi + 2) = edi_1[2]
                *(esi + 3) = 0xff
                esi += 4
                edi_1 = &edi_1[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi += eax_4
        edi_1 = &edi_1[result]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
