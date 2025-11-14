// 函数: sub_61ec40
// 地址: 0x61ec40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char string
int32_t eax_1 = data_78c474 ^ &string
uint32_t eax_2 = zx.d(arg3)
int32_t result

if (eax_2 == 1)
    string = 0
    int128_t var_803[0x7f]
    sub_6bc670(&var_803, 0, 0x7ff)
    GetWindowTextA(GetDlgItem(arg2, 0x9cce), &string, 0x800)
    char* eax_7 = &string
    char i
    
    do
        i = *eax_7
        eax_7 = &eax_7[1]
    while (i != 0)
    sub_401270(arg1 + 8, eax_7 - &var_803, &string)
    
    if (*(arg1 + 0x18) == 0)
        goto label_61ec78
    
    EndDialog(arg2, 0)
    result = 1
else if (eax_2 == 2 || eax_2 == 0x9cd0)
label_61ec78:
    EndDialog(arg2, 0xffffffff)
    result = 1
else
    result = 0

sub_6b4885(eax_1 ^ &string)
return result
