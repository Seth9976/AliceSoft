// 函数: sub_6144e0
// 地址: 0x6144e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *arg1
arg1[0x1f] = arg2
(*(edx + 0x88))(eax_4)
sub_401270(&arg1[1], 0x1a, "DPAnalysis_SplitWndLRClass")
int32_t eax_7 = data_797e44
int32_t var_44 = eax_7
data_797e44 = eax_7 + 1
char* eax_9 = sub_4104a0(0x734bb4)
int32_t var_4 = 0
char* edx_1

if (*(eax_9 + 0x14) u< 0x10)
    edx_1 = eax_9
else
    edx_1 = *eax_9

char* eax_10 = edx_1
char i

do
    i = *eax_10
    eax_10 = &eax_10[1]
while (i != 0)
sub_402cb0(&arg1[1], edx_1, eax_10 - &eax_10[1])
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_44_2 = var_2c
    sub_6b4d5b()

bool result = sub_6181c0(arg1, arg3) != 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
