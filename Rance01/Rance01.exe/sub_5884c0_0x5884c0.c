// 函数: sub_5884c0
// 地址: 0x5884c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t eax_1 = *(*arg1 + 4)
int32_t result = 0
var_4 = nullptr
eax_1(0, &var_4)

if (var_4 - 1 u<= 3)
    switch (var_4)
        case 1
            result = 2
        case 2
            result = 4
        case 3
            result = 8
        case 4
            result = 0x10
    
    if ((*(*arg2 + 0x2c))(arg2, 0, 1, 0x16, 1, result, 0) s< 0)
        sub_604c90(0x759348)
        return 0

return result
