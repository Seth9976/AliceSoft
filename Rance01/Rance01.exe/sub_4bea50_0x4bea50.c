// 函数: sub_4bea50
// 地址: 0x4bea50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg2
int32_t* i = *result
void** ebp = arg1

for (; i != result[1]; i = &i[1])
    void** esi_1 = ebp[5]
    int32_t edx_1 = *i
    void** ecx_1 = esi_1
    void** eax = ecx_1[1]
    bool cond:0_1 = *(eax + 0x15) != 0
    int32_t var_4 = edx_1
    
    if (not(cond:0_1))
        do
            if (eax[3] s>= edx_1)
                ecx_1 = eax
                eax = *eax
            else
                eax = eax[2]
        while (*(eax + 0x15) == 0)
    
    arg1 = ecx_1
    void** eax_2
    
    if (ecx_1 == esi_1 || edx_1 s< ecx_1[3])
        void** var_8 = esi_1
        eax_2 = &var_8
    else
        eax_2 = &arg1
    
    if (*eax_2 == esi_1)
        *sub_4ccf80(&ebp[4], &var_4) = ebp[6]
    
    result = arg2

return result
