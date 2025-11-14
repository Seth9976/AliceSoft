// 函数: sub_58d7a0
// 地址: 0x58d7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[1] -= 1
int32_t eax = arg1[1]

if (eax s<= 0)
    (*(*arg1 + 0x2c))(1)
    return 0

if (eax == 1)
    void** esi_2 = arg1[2] + 0x130
    int32_t* var_8 = arg1
    sub_58c400(&var_8, esi_2, sub_416d20(esi_2, &var_8))

return arg1[1]
