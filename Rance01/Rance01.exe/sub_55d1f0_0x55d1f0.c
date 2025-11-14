// 函数: sub_55d1f0
// 地址: 0x55d1f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_14[0x4]
int32_t eax_1 = data_78c474 ^ &var_14
int32_t eax_2 = *(arg1 + 4)

if (*(eax_2 + 0x40) != 0)
    eax_2 = sub_5514f0(eax_2)
    
    if (eax_2.b == 0)
        sub_6b4885(eax_1 ^ &var_14)
        return eax_2

if (arg3 s<= 0)
    eax_2.b = 1
    sub_6b4885(eax_1 ^ &var_14)
    return eax_2

int32_t eax_3 = 0

if (arg3 s> 0)
    int32_t* ecx_5 = arg2 + (arg3 << 2) - 4
    
    do
        var_14[eax_3] = *ecx_5
        eax_3 += 1
        ecx_5 -= 4
    while (eax_3 s< arg3)

bool eax_4 = sub_550ca0(*(arg1 + 4), arg3, &var_14, 1) != 0
sub_6b4885(eax_1 ^ &var_14)
return eax_4
