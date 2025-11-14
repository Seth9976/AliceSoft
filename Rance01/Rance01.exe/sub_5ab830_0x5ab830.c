// 函数: sub_5ab830
// 地址: 0x5ab830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result_1
int32_t eax_1 = data_78c474 ^ &result_1
result_1 = nullptr
*(arg3 + 0x78) = arg2
*(arg3 + 0x7c) = 0
int32_t i
void* result_2

do
    if (*(arg3 + 0x7c) == 0 && arg4 u> 0)
        if (arg4 u> 0xffffffff)
            *(arg3 + 0x7c) = 0xffffffff
            arg4 += 1
        else
            *(arg3 + 0x7c) = arg4
            arg4 = 0
    
    int32_t edx = *(arg3 + 0xb4)
    *(arg3 + 0x84) = *(arg3 + 0xb0)
    *(arg3 + 0x88) = edx
    i, result_2 = sub_5a0bd0(arg3 + 0x78, 0)
    void* esi_2 = *(arg3 + 0xb4) - *(arg3 + 0x88)
    
    if ((i == 0 || i == 1) && esi_2 s> 0)
        if (arg5 != 0)
            result_2 = result_1
            
            if (arg6 u> result_2)
                void* eax_7 = arg6 - result_2
                
                if (esi_2 u< eax_7)
                    eax_7 = esi_2
                
                result_2 = sub_6c02a0(arg5 + result_2, *(arg3 + 0xb0), eax_7)
        
        result_1 += esi_2
while (i == 0)

*(arg3 + 0x7c) = 0

if (arg3 != 0xffffff88)
    void* eax_9 = *(arg3 + 0x94)
    
    if (eax_9 != 0)
        *(eax_9 + 0x28) = 0
        *(eax_9 + 0x2c) = 0
        *(eax_9 + 0x30) = 0
        result_2 = sub_5a0980(arg3 + 0x78)

if (i == 1)
    void* result = result_1
    sub_6b4885(eax_1 ^ &result_1)
    return result

char* eax_10 = *(arg3 + 0x90)

if (eax_10 == 0)
    if (i == 0xfffffffb)
        eax_10 = "Buffer error in compressed datastream"
    else if (i == 0xfffffffd)
        eax_10 = "Data error in compressed datastream"
    else
        eax_10 = "Incomplete compressed datastream"

char* var_70_2 = eax_10
char var_58[0x54]
sub_5a6010(arg3, &var_58, result_2)
sub_5a5de0(&var_58, arg3)
sub_6b4885(eax_1 ^ &result_1)
return 0
