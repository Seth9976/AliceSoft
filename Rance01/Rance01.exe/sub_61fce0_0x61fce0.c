// 函数: sub_61fce0
// 地址: 0x61fce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d399
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = arg3
arg3 = nullptr
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
int32_t var_4 = 0
char* eax_3 = arg2
arg3 = 1
char i

do
    i = *eax_3
    eax_3 = &eax_3[1]
while (i != 0)

int32_t edi = arg1[4]
void* eax_5 = eax_3 - &eax_3[1] + ebp[4]

if (edi u<= eax_5 && arg1[5] != eax_5 && sub_4013c0(arg1, eax_5, 1) != 0)
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = edi
    int32_t* eax_8
    
    if (cond:0_1)
        eax_8 = arg1
    else
        eax_8 = *arg1
    
    *(eax_8 + edi) = 0

char* eax_9 = arg2

do
    i = *eax_9
    eax_9 = &eax_9[1]
while (i != 0)

sub_402cb0(arg1, arg2, eax_9 - &eax_9[1])
sub_402000(arg1, ebp, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
