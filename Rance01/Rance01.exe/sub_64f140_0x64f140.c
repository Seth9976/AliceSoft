// 函数: sub_64f140
// 地址: 0x64f140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
sub_650010(arg1, arg2)
sub_6501b0(arg1, arg2)
sub_64fec0(arg1, arg2)
int32_t ecx = *(arg1 + 0x78)
void* eax_2 = *(arg1 + 0x84)
*(eax_2 + 0x2c) = *(arg1 + 0x74)
*(eax_2 + 0x30) = ecx
WINDOWPLACEMENT lpwndpl
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
int32_t edi_1 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
WINDOWPLACEMENT lpwndpl_1
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl_1)
sub_6590e0(*(arg1 + 0x84), lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, 
    edi_1)
uint32_t uIDEvent = *(arg1 + 0xc0)
uint32_t uElapse = *(arg1 + 0x5c)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 0xc4), uIDEvent)
    *(arg1 + 0xc0) = 0

*(arg1 + 0xc4) = arg2
*(arg1 + 0xc0) = SetTimer(arg2, 1, uElapse, nullptr)
InitCommonControls()
*(arg1 + 0xa4) = arg2
*(arg1 + 0xa0) = CreateStatusWindowA(0x50000003, "***** StatusBar *****", arg2, 1)
sub_6b4885(eax_1 ^ &var_68)
return 0
