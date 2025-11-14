// 函数: sub_62b800
// 地址: 0x62b800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t j_2 = (*(*arg1 + 0x10))()
int32_t i_2 = (*(*arg1 + 0x14))()
void* ebx = (*(*(arg2 + 0x10) + 8))(0, 0)
int32_t eax_5 = (*(*(arg2 + 0x10) + 0x1c))()
char* edi_1 = (*(*arg1 + 0xc))(0, 0)
int32_t i_1 = i_2
int32_t result = (*(*arg1 + 0x20))() - j_2

if (i_1 s> 0)
    int32_t i
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                *edi_1 = *ebx
                edi_1 = &edi_1[1]
                ebx += 3
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        ebx += eax_5 - j_2 * 3
        edi_1 = &edi_1[result]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
