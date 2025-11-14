// 函数: sub_58d580
// 地址: 0x58d580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* const var_4 = arg1

if (*(arg1 + 0xc) == 0)
    return 0

int32_t* eax_1 = *(arg1 + 0xc)
var_4 = nullptr
int32_t ecx_2
ecx_2.b = (*(*eax_1 + 0x2c))(eax_1, 0, 0, &var_4, 0) s< 0
return (ecx_2 - 1) & var_4
