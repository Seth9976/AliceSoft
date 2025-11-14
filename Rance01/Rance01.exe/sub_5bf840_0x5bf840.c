// 函数: sub_5bf840
// 地址: 0x5bf840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t i_3 = 0
int32_t i_4 = 0
sub_5b4af0(arg2, *arg1, 0x18)
sub_5b4af0(arg2, arg1[1], 0x18)
sub_5b4af0(arg2, arg1[2] - 1, 0x18)
sub_5b4af0(arg2, arg1[3] - 1, 6)
int32_t j_1
int32_t ecx_3
j_1, ecx_3 = sub_5b4af0(arg2, arg1[5], 8)
int32_t i = 0

if (arg1[3] s> 0)
    void* ebx = &arg1[6]
    
    do
        uint32_t j_2 = *ebx
        uint32_t j = j_2
        int32_t edx_2 = 0
        
        if (j == 0)
            sub_5b4af0(arg2, j_2, 4)
        else
            do
                edx_2 += 1
                j u>>= 1
            while (j != 0)
            
            if (edx_2 s<= 3)
                sub_5b4af0(arg2, j_2, 4)
            else
                sub_5b4af0(arg2, j_2, 3)
                sub_5b4af0(arg2, 1, 1)
                sub_5b4af0(arg2, *ebx s>> 3, 5)
        
        j_1 = *ebx
        int32_t ecx_5 = 0
        
        for (; j_1 != 0; j_1 u>>= 1)
            ecx_5 += j_1 & 1
        
        i_4 += ecx_5
        i += 1
        ebx += 4
    while (i s< arg1[3])
    
    i_3 = i_4

if (i_3 s> 0)
    void* edi_1 = &arg1[0x46]
    int32_t i_2 = i_3
    int32_t i_1
    
    do
        j_1 = sub_5b4af0(arg2, *edi_1, 8)
        edi_1 += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return j_1
