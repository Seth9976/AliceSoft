// 函数: sub_5a4830
// 地址: 0x5a4830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
var_4 = data_78c474 ^ &var_4
int128_t* result = sub_5a4280(arg2, arg3, 0x7fff, 0xffffffff)

if (*(arg2 + 0x248) != 0)
    int32_t ecx = *(arg2 + 0x24c)
    
    if (ecx != 0)
        int32_t eax_2 = *(arg2 + 0x268)
        
        if (eax_2 == 0)
            result = __free_base(ecx)
        else
            result = eax_2(arg2, ecx)
    
    *(arg2 + 0x24c) = 0
    *(arg2 + 0x248) = 0

if (arg3 != 0)
    result = sub_6bc670(arg3, 0, 0xec)

sub_6b4885(var_4 ^ &var_4)
return result
