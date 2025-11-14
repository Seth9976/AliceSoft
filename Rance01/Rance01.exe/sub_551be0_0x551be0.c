// 函数: sub_551be0
// 地址: 0x551be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_14[0x4]
uint32_t var_4 = data_78c474 ^ &var_14
uint32_t eax_1

if (arg1[0x10].b == 0)
    *arg3 = 0
    eax_1.b = 1
    sub_6b4885(var_4 ^ &var_14)
    return eax_1

if (arg1[0xc] == 0)
    *arg3 = arg1[1] u>> 2
    uint32_t eax_3
    eax_3.b = 1
    sub_6b4885(var_4 ^ &var_14)
    return eax_3

if (arg1[0xf] s>= arg2 && arg2 s> 0 && sub_551170(arg1, &var_14).b != 0)
    int32_t esi_1 = arg1[0xc]
    
    if (esi_1 - arg2 + 1 u< esi_1 + 1)
        *arg3 = var_14[esi_1 - arg2 + 1]
        eax_1.b = 1
        sub_6b4885(var_4 ^ &var_14)
        return eax_1

eax_1.b = 0
sub_6b4885(var_4 ^ &var_14)
return eax_1
