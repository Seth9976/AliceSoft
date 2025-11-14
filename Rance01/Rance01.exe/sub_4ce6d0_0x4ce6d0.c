// 函数: sub_4ce6d0
// 地址: 0x4ce6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ebp = arg3

if (ebp == 0 || ebp[0x19] == 0)
    int32_t* i = *arg2
    
    while (i != arg2[1])
        void* eax_13 = *i
        *(eax_13 + 0xa8) = *arg1
        *(eax_13 + 0xac) = arg1[1]
        *(eax_13 + 0xb0) = arg1[2]
        i = &i[1]
        *(eax_13 + 0xb4) = arg1[3]
    
    return 

int32_t* i_1 = *arg2

if (i_1 == arg2[1])
    return 

do
    int32_t* edi_2 = *i_1 + 8
    void** eax_3
    int32_t ecx_1
    eax_3, ecx_1 = sub_4d3aa0(&ebp[0x17], edi_2)
    arg3 = eax_3
    char eax_5
    
    if (eax_3 != ebp[0x18])
        eax_5, ecx_1 = sub_405dd0(&eax_3[3], edi_2)
    
    void*** eax_6
    
    if (eax_3 == ebp[0x18] || eax_5 != 0)
        void** var_28 = ebp[0x18]
        eax_6 = &var_28
    else
        eax_6 = &arg3
    
    void** eax_8 = *eax_6
    void* eax_11
    float edx_3
    
    if (eax_8 == ebp[0x18])
        eax_11 = *i_1
        *(eax_11 + 0xa8) = *arg1
        *(eax_11 + 0xac) = arg1[1]
        *(eax_11 + 0xb0) = arg1[2]
        edx_3 = arg1[3]
    else
        int32_t var_3c_2 = ecx_1
        void var_14
        void* eax_10
        int80_t st0_1
        st0_1, eax_10 = sub_4cefd0(&var_14, &eax_8[0xa], fconvert.s(fconvert.t(arg4)))
        float var_20_1 = fconvert.s(fconvert.t(*(eax_10 + 8)) + fconvert.t(arg1[1]))
        float var_1c_1 = fconvert.s(fconvert.t(*(eax_10 + 0xc)) + fconvert.t(arg1[2]))
        eax_11 = *i_1
        long double x87_r7_9 = fconvert.t(*(eax_10 + 0x10)) + fconvert.t(arg1[3])
        *(eax_11 + 0xa8) = fconvert.s(fconvert.t(*arg1) + fconvert.t(*(eax_10 + 4)))
        *(eax_11 + 0xac) = var_20_1
        edx_3 = fconvert.s(x87_r7_9)
        *(eax_11 + 0xb0) = var_1c_1
    
    *(eax_11 + 0xb4) = edx_3
    i_1 = &i_1[1]
while (i_1 != arg2[1])
