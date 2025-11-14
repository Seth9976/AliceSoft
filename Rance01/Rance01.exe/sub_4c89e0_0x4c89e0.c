// 函数: sub_4c89e0
// 地址: 0x4c89e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_50
int32_t result = data_78c474 ^ &var_50
int32_t result_1 = result
int32_t i_1 = arg3

if (i_1 != 0)
    int32_t i
    
    do
        result = 0
        int32_t var_4c
        __builtin_memset(&var_4c, 0, 0x40)
        
        if (arg2 != 0)
            __builtin_memcpy(arg2, &var_4c, 0x40)
        
        arg2 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_6b4885(result_1 ^ &var_50)
return result
