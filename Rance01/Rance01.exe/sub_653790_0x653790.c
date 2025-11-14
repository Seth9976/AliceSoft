// 函数: sub_653790
// 地址: 0x653790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
void* const var_10
void* edi

if (arg3 == 0)
    var_10 = &data_731c68
    edi = 8
else if (arg3 == 1)
    var_10 = &data_731c74
    edi = 4
else
    if (arg3 != 0x100)
        if (arg3 s<= 0x100)
            sub_402be0(arg1, 0x731c9c)
            return arg1
        
        sub_402be0(arg1, 0x731c8c)
        return arg1
    
    var_10 = &data_731c7c
    edi = 0xc

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401270(arg1, edi, var_10)
return arg1
