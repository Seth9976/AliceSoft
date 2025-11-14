// 函数: sub_5d3870
// 地址: 0x5d3870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_3c
char* var_4 = data_78c474 ^ &var_3c

if (*(arg1 + 0x18) != 0)
    int32_t* eax_2 = *(arg1 + 0x1c)
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)
        *(arg1 + 0x1c) = 0
    
    int32_t ecx_2 = *(arg1 + 0x74)
    int32_t edx_2 = *(arg1 + 0x7c)
    int32_t var_18 = *(arg1 + 0x70)
    int32_t eax_3
    eax_3.w = *(arg1 + 0x80)
    int32_t var_14_1 = ecx_2
    int32_t ecx_3 = *(arg1 + 0x78)
    int16_t var_8_1 = eax_3.w
    int32_t var_10_1 = ecx_3
    *(arg1 + 0x14) = ecx_3
    int32_t var_34_1 = ecx_3
    __builtin_memset(&var_3c, 0, 0x24)
    int32_t* eax_4 = *(arg1 + 0x18)
    int32_t* var_2c_1 = &var_18
    int32_t var_c_1 = edx_2
    var_3c = 0x24
    int32_t var_38_1 = 0x18088
    
    if ((*(*eax_4 + 0xc))(eax_4, &var_3c, arg1 + 0x1c, 0) == 0)
        int32_t eax_5
        eax_5.b = 1
        sub_6b4885(var_4 ^ &var_3c)
        return eax_5
    
    if (**(arg1 + 0x10) == 0)
        sub_604c90("DirectSound")
        **(arg1 + 0x10) = 1

char* eax_1
eax_1.b = 0
sub_6b4885(var_4 ^ &var_3c)
return eax_1
