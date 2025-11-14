// 函数: sub_4d8290
// 地址: 0x4d8290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1

for (void* i = &edi[8]; i != arg2; i += 0x20)
    int32_t ecx_1 = *(i + 0xc)
    int32_t edx_1 = *(i + 0x10)
    int32_t ebp_1 = *i
    int32_t ebx_1 = *(i + 4)
    void* edx_2 = *(i + 0x18)
    int32_t var_c_1 = *(i + 0x14)
    int32_t ecx_2
    ecx_2.b = *(i + 0x1c)
    arg1 = i
    char var_4_1 = ecx_2.b
    
    if (ebp_1 s>= *edi)
        int32_t ecx_5 = *(i - 0x20)
        void* edx_5 = i - 0x20
        
        if (ebp_1 s< ecx_5)
            int32_t ebx_2 = ecx_5
            void* ecx_6 = i - 0x14
            
            do
                *arg1 = ebx_2
                *(arg1 + 4) = *(ecx_6 - 8)
                *(arg1 + 0xc) = *ecx_6
                *(arg1 + 0x10) = *(ecx_6 + 4)
                *(arg1 + 0x14) = *(ecx_6 + 8)
                *(arg1 + 0x18) = *(ecx_6 + 0xc)
                int32_t ebx_7
                ebx_7.b = *(ecx_6 + 0x10)
                *(arg1 + 0x1c) = ebx_7.b
                ebx_2 = *(edx_5 - 0x20)
                arg1 = edx_5
                edx_5 -= 0x20
                ecx_6 -= 0x20
            while (ebp_1 s< ebx_2)
        
        *arg1 = ebp_1
        *(arg1 + 4) = ebx_1
        *(arg1 + 0xc) = ecx_1
        *(arg1 + 0x10) = edx_1
        *(arg1 + 0x14) = var_c_1
        int32_t edx_7
        edx_7.b = var_4_1
        *(arg1 + 0x18) = edx_2
        *(arg1 + 0x1c) = edx_7.b
    else
        int32_t var_34_1 = arg2
        sub_4d8ff0(arg1, arg2, i + 0x20, edi)
        *edi = ebp_1
        edi[1] = ebx_1
        edi[3] = ecx_1
        edi[4] = edx_1
        int32_t ecx_4
        ecx_4.b = var_4_1
        edi[5] = var_c_1
        edi[6] = edx_2
        edi[7].b = ecx_4.b
