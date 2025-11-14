// 函数: sub_5b3510
// 地址: 0x5b3510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx = *arg2
char* result = &ecx[1]
char edx

if (arg1 s> 1)
    void* i_3 = &arg1[0xffffffff]
    void* i
    
    do
        edx = *ecx - *result
        result = &result[1]
        result[0xffffffff] = edx
        ecx = &ecx[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (arg3 s> 1)
    result = arg1
    void* i_4 = arg3 - 1
    char* result_1 = result
    arg3 = nullptr
    void* i_2 = i_4
    int32_t ebx
    int32_t var_14_1 = ebx
    void* i_1
    
    do
        void* ecx_2 = *arg2
        void* ecx_3 = ecx_2 + arg3
        void* eax_1 = result + ecx_2 + 1
        void* ecx_4 = ecx_3 + 1
        *(eax_1 - 1) = *ecx_3 - *(eax_1 - 1)
        void* esi_1 = eax_1 - 1
        
        if (arg1 s> 1)
            void* j_1 = &arg1[0xffffffff]
            void* j
            
            do
                edx = ((zx.d(*esi_1) + zx.d(*ecx_4)) s>> 1).b - *eax_1
                eax_1 += 1
                *(eax_1 - 1) = edx
                ecx_4 += 1
                esi_1 += 1
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        arg3 += arg1
        result = result_1 + arg1
        i_1 = i_2
        i_2 -= 1
        result_1 = result
    while (i_1 != 1)

return result
