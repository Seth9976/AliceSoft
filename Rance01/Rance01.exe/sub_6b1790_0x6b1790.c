// 函数: sub_6b1790
// 地址: 0x6b1790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* lpText_1
int32_t var_4 = data_78c474 ^ &lpText_1

if (*(arg1 + 0x38) != 0)
    int32_t eax_1
    eax_1.b = 1
    sub_6b4885(var_4 ^ &lpText_1)
    return eax_1

if (RegisterClassExA(arg1 + 4) != 0)
    uint16_t eax_3
    eax_3.b = 1
    *(arg1 + 0x38) = 1
    sub_6b4885(var_4 ^ &lpText_1)
    return eax_3

sub_61fce0(&lpText_1, 0x72ce3c, arg1 + 0x3c)
int32_t* lpText = lpText_1
int32_t var_c

if (var_c u< 0x10)
    lpText = &lpText_1

MessageBoxA(nullptr, lpText, "CWindow/addWindowClass/error", MB_OK)

if (var_c u>= 0x10)
    int32_t* lpText_2 = lpText_1
    sub_6b4d5b()

enum MESSAGEBOX_RESULT eax_4
eax_4.b = 0
sub_6b4885(var_4 ^ &lpText_1)
return eax_4
