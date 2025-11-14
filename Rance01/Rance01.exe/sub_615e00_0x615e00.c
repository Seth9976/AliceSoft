// 函数: sub_615e00
// 地址: 0x615e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x58) = 0
*(arg1 + 0x50) = 0
sub_401270(arg1 + 4, 0x17, "DPAnalysis_TextChildWnd")
int32_t eax_5 = data_797e48
int32_t var_44 = eax_5
data_797e48 = eax_5 + 1
char* eax_7 = sub_4104a0(0x734af0)
int32_t var_4 = 0
char* edx

if (*(eax_7 + 0x14) u< 0x10)
    edx = eax_7
else
    edx = *eax_7

char* eax_8 = edx
char i

do
    i = *eax_8
    eax_8 = &eax_8[1]
while (i != 0)
sub_402cb0(arg1 + 4, edx, eax_8 - &eax_8[1])
int32_t var_4_1 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_44_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t* result = sub_401270(arg1 + 0x20, nullptr, 0x72d817)
*(arg1 + 0x68) = 0x50840000
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
