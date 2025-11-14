// 函数: sub_4d89a0
// 地址: 0x4d89a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = &arg1[5]; i != arg2; i = &i[5])
    int32_t edi_1 = *i
    int32_t ecx_1 = i[3]
    void* edx
    edx.b = i[4].b
    int32_t ebx_1 = i[1]
    void* i_1 = i
    char var_4_1 = edx.b
    
    if (edi_1 s>= *arg1)
        edx = i[-5]
        
        if (edi_1 s< edx)
            void* i_2 = &i[-5]
            
            do
                *i_1 = edx
                *(i_1 + 4) = *(i_2 + 4)
                *(i_1 + 0xc) = *(i_2 + 0xc)
                int32_t edx_5
                edx_5.b = *(i_2 + 0x10)
                *(i_1 + 0x10) = edx_5.b
                edx = *(i_2 - 0x14)
                i_1 = i_2
                i_2 -= 0x14
            while (edi_1 s< edx)
        
        edx.b = var_4_1
        *i_1 = edi_1
        *(i_1 + 4) = ebx_1
        *(i_1 + 0xc) = ecx_1
        *(i_1 + 0x10) = edx.b
    else
        if (arg1 != i)
            i_1 = &i[8]
            
            do
                int32_t edx_1 = *(i_1 - 0x34)
                i_1 -= 0x14
                *(i_1 - 0xc) = edx_1
                *(i_1 - 8) = *(i_1 - 0x1c)
                *i_1 = *(i_1 - 0x14)
                int32_t edx_3
                edx_3.b = *(i_1 - 0x10)
                *(i_1 + 4) = edx_3.b
            while (i_1 - 0x20 != arg1)
        
        i_1.b = var_4_1
        *arg1 = edi_1
        arg1[1] = ebx_1
        arg1[3] = ecx_1
        arg1[4].b = i_1.b
