// 函数: sub_617a90
// 地址: 0x617a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xac) = arg3
*(arg1 + 0xb0) = arg4
sub_401270(arg1 + 4, 0x16, "DPAnalysis_TreeViewWnd")
int32_t eax_6 = data_797e4c
int32_t var_44 = eax_6
data_797e4c = eax_6 + 1
char* eax_8 = sub_4104a0(0x734a1c)
int32_t var_4 = 0
char* edx

if (*(eax_8 + 0x14) u< 0x10)
    edx = eax_8
else
    edx = *eax_8

char* eax_9 = edx
char i

do
    i = *eax_9
    eax_9 = &eax_9[1]
while (i != 0)
sub_402cb0(arg1 + 4, edx, eax_9 - &eax_9[1])
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_44_2 = var_2c
    sub_6b4d5b()

*(arg1 + 0x58) = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x68) = 0x50000000
*(arg1 + 0x7c) = arg2
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
bool result = sub_6181c0(arg1, arg3) != 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
