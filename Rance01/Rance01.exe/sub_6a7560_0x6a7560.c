// 函数: sub_6a7560
// 地址: 0x6a7560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_24
int32_t eax_1 = data_78c474 ^ &var_24
*(arg1 + 0xb4) = (*(arg1 + 0x124) - *(arg1 + 0x120)) s/ 0x1c + 1
sub_6a7890(arg1 + 0x9c)
int32_t eax_6
int32_t edx_3
edx_3:eax_6 = sx.q(*(arg1 + 0x60))
*(arg1 + 0x94) = (*(arg1 + 0x11c) + 4) * ((eax_6 - edx_3) s>> 1)
sub_6a7890(arg1 + 0x7c)
int32_t eax_10 = GetScrollPos(*(arg1 + 0xa0), *(arg1 + 0xac))
enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x8c)
HWND hWnd = *(arg1 + 0x80)
var_24 = eax_10
int32_t __saved_ebx_3
sub_6b1450(GetScrollPos(hWnd, nBar), var_24, &__saved_ebx_3, arg1 + 0xbc, arg1 + 0x120)
int32_t var_c

if (var_c u>= 0x10)
    int32_t __saved_ebx_1 = __saved_ebx_3
    sub_6b4d5b()

InvalidateRect(*(arg1 + 0x34), nullptr, 0)
BOOL result = UpdateWindow(*(arg1 + 0x34))
sub_6b4885(eax_1 ^ &var_24)
return result
