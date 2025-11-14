// 函数: sub_558220
// 地址: 0x558220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_408[0x100]
int32_t eax_1 = data_78c474 ^ &var_408
int32_t esi_4 = ((*(arg2 + 0x6b4) - (arg2 + 0x2b4)) s>> 2) * 4
int128_t* var_41c = &var_408
sub_6c02a0(var_41c, arg2 + 0x2b4, esi_4)
bool result

if (sub_5604b0(arg1, (&(&var_41c)[((*(arg2 + 0x6b4) - (arg2 + 0x2b4)) s>> 2) + 5] - &var_408) s>> 2)
        != 0)
    int32_t i = 0
    
    if ((&(&var_41c)[((*(arg2 + 0x6b4) - (arg2 + 0x2b4)) s>> 2) + 5] - &var_408) s>> 2 != 0)
        do
            if (sub_5581a0(var_408[i], arg1, arg2) == 0)
                goto label_558281
            
            i += 1
        while (i u< (&(&var_41c)[((*(arg2 + 0x6b4) - (arg2 + 0x2b4)) s>> 2) + 5] - &var_408) s>> 2)
    
    result = true
else
label_558281:
    result = false

sub_6b4885(eax_1 ^ &var_408)
return result
