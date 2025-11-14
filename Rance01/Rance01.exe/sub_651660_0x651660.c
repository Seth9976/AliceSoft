// 函数: sub_651660
// 地址: 0x651660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
sub_6519c0(arg2, arg1)
sub_651b60(arg2, arg1)
sub_651870(arg2, arg1)
int32_t ecx = *(arg2 + 0x74)
void* eax_2 = *(arg2 + 0x80)
*(eax_2 + 0x2c) = *(arg2 + 0x70)
*(eax_2 + 0x30) = ecx
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg2 + 0x34), &lpwndpl)
int32_t edi_2 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
WINDOWPLACEMENT lpwndpl_1
GetWindowPlacement(*(arg2 + 0x34), &lpwndpl_1)
sub_6590e0(*(arg2 + 0x80), lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, 
    edi_2)
sub_6b4885(eax_1 ^ &var_68)
return 0
