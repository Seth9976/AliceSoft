// 函数: sub_403780
// 地址: 0x403780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_2 = arg2

if (eax_2 s>= *(arg1 + 0x7c) || eax_2 s< 0)
    return nullptr

arg2 = **(arg1 + 0x78)
int32_t* var_4_1 = arg2
sub_4063a0(eax_2, &arg2)
int32_t* result = &arg2[3]

if (result[5] u< 0x10)
    return result

return *result
