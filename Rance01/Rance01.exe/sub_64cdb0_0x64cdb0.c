// 函数: sub_64cdb0
// 地址: 0x64cdb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
sub_64d120(arg2, arg1)
sub_64d2d0(arg2, arg1)
sub_64cfd0(arg2, arg1)
int32_t ecx = *(arg2 + 0x78)
void* eax_2 = *(arg2 + 0x9c)
*(eax_2 + 0x2c) = *(arg2 + 0x74)
*(eax_2 + 0x30) = ecx
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg2 + 0x34), &lpwndpl)
int32_t edi_2 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
WINDOWPLACEMENT lpwndpl_1
GetWindowPlacement(*(arg2 + 0x34), &lpwndpl_1)
sub_6590e0(*(arg2 + 0x9c), lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, 
    edi_2)
sub_6b4885(eax_1 ^ &var_68)
return 0
