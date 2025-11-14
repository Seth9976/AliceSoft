// 函数: sub_5464e0
// 地址: 0x5464e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_14
int32_t eax_1 = data_78c474 ^ &var_14
int32_t* eax_2 = *(arg1 + 0x28c)
int32_t ecx = *eax_2
*(arg1 + 0x28c) = &eax_2[1]
int32_t edi = eax_2[1]
*(arg1 + 0x28c) = &eax_2[2]
int32_t* eax_5 = *(arg1 + 0x12c8)
int32_t eax_6

if (eax_5[1] != 0)
    eax_6 = *eax_5
else
    eax_6 = 0

int32_t eax_7 = *(eax_6 + (ecx << 2))
uint32_t result

if (eax_7 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    result = *(*(arg1 + 0x1e4) + (eax_7 << 2))
else
    result = 0

if (*(result + 0x40) != 0)
    result = sub_551170(result, &var_14)
    
    if (var_14 != 0)
        *(arg1 + 0x28c) = *(arg1 + 0x290) + edi

sub_6b4885(eax_1 ^ &var_14)
return result
