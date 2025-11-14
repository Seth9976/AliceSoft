// 函数: sub_6f2cd0
// 地址: 0x6f2cd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
*arg2 = 0
uint32_t var_10
int32_t result = sub_6f2b00(arg1, &var_10)

if (result == 0)
    uint32_t eax_1 = var_10
    
    if (eax_1 s>= 2)
        var_10 = eax_1 - 2
        result = sub_6f2920(arg1, eax_1 - 2, &var_18, &var_1c, &var_14)
        
        if (result == 0)
            char* edx_3 = var_1c
            *arg2 = (zx.d(*edx_3) << 8) + zx.d(edx_3[1])
    else
        result = 0xffffffeb

if (var_14 != 0)
    int32_t edx_2 = var_18
    
    if (edx_2 != 0)
        int32_t var_34_1 = edx_2
        sub_6b4d5b()

return result
