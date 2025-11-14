// 函数: sub_6216a0
// 地址: 0x6216a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HINSTANCE var_18
int32_t eax_1 = data_78c474 ^ &var_18
var_18 = arg3
sub_401270(arg1 + 4, 0x17, "DPVariable_TextChildWnd")
int32_t eax_3 = data_797e50
int32_t var_2c = eax_3
data_797e50 = eax_3 + 1
void var_14
_swprintf(&var_14, 0x10, 0x7340bc)
void* eax_5 = &var_14
char i

do
    i = *eax_5
    eax_5 += 1
while (i != 0)
void var_13
sub_402cb0(arg1 + 4, &var_14, eax_5 - &var_13)
int32_t ecx_1 = *(arg1 + 0xcc)
*(arg1 + 0x3c) = 0xb
*(arg1 + 0x58) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x64) = 0x200
*(arg1 + 0x68) = 0x50000000
*(arg1 + 0x7c) = arg2
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
sub_6217b0(ecx_1, arg1)
char eax_9 = sub_6181c0(arg1, var_18)

if (eax_9 == 0)
    sub_6b4885(eax_1 ^ &var_18)
    return eax_9

sub_62ae50(arg1)
ShowWindow(*(arg1 + 0x88), SW_SHOW)
UpdateWindow(*(arg1 + 0x88))
BOOL eax_11
eax_11.b = 1
sub_6b4885(eax_1 ^ &var_18)
return eax_11
