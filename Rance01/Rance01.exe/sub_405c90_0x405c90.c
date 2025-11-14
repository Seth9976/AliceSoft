// 函数: sub_405c90
// 地址: 0x405c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b8f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_10_1 = 0
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
int32_t var_4 = 0
char* eax_4 = arg3
int32_t var_10_2 = 1

do
    ecx.b = *eax_4
    eax_4 = &eax_4[1]
while (ecx.b != 0)

int32_t edi_1 = arg1[4]
void* eax_6 = eax_4 - &eax_4[1] + arg2[4]

if (edi_1 u<= eax_6 && arg1[5] != eax_6 && sub_4013c0(arg1, eax_6, 1) != 0)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = edi_1
    int32_t* eax_9
    
    if (cond:0_1)
        eax_9 = arg1
    else
        eax_9 = *arg1
    
    *(eax_9 + edi_1) = 0

sub_402000(arg1, arg2, 0, 0xffffffff)
char* eax_10 = arg3
char i

do
    i = *eax_10
    eax_10 = &eax_10[1]
while (i != 0)
sub_402cb0(arg1, arg3, eax_10 - &eax_10[1])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
