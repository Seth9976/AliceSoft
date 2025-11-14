// 函数: sub_4d86e0
// 地址: 0x4d86e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = &arg1[5]; i != arg2; i = &i[5])
    int32_t edi_1 = *i
    void* i_2
    i_2.b = i[4].b
    float var_8_1 = fconvert.s(fconvert.t(i[3]))
    int32_t ebx_1 = i[1]
    int32_t* i_1 = i
    char var_4_1 = i_2.b
    
    if (edi_1 s>= *arg1)
        int32_t edx_4 = i[-5]
        
        if (edi_1 s< edx_4)
            i_2 = &i[-5]
            
            do
                *i_1 = edx_4
                i_1[1] = *(i_2 + 4)
                i_1[3] = fconvert.s(fconvert.t(*(i_2 + 0xc)))
                int32_t edx_5
                edx_5.b = *(i_2 + 0x10)
                i_1[4].b = edx_5.b
                edx_4 = *(i_2 - 0x14)
                i_1 = i_2
                i_2 -= 0x14
            while (edi_1 s< edx_4)
        
        i_2.b = var_4_1
        *i_1 = edi_1
        i_1[1] = ebx_1
        i_1[3] = fconvert.s(fconvert.t(var_8_1))
        i_1[4].b = i_2.b
    else
        if (arg1 != i)
            i_1 = &i[8]
            
            do
                int32_t edx_1 = i_1[-0xd]
                i_1 -= 0x14
                i_1[-3] = edx_1
                i_1[-2] = i_1[-7]
                *i_1 = fconvert.s(fconvert.t(i_1[-5]))
                int32_t edx_2
                edx_2.b = i_1[-4].b
                i_1[1].b = edx_2.b
            while (&i_1[-8] != arg1)
        
        *arg1 = edi_1
        arg1[1] = ebx_1
        arg1[3] = fconvert.s(fconvert.t(var_8_1))
        arg1[4].b = i_2.b
