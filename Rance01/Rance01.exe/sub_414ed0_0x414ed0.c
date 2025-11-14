// 函数: sub_414ed0
// 地址: 0x414ed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_4152d0(arg2)
*(arg2 + 4) = 0
int32_t eax_3 = *(arg2 + 0x18)

if (eax_3 != 0)
    int32_t var_20_1 = eax_3
    sub_6b4d5b()

*(arg2 + 0x18) = 0
*(arg2 + 0x1c) = 0
*(arg2 + 0x20) = 0
void* edi = arg2 + 8
arg2 = edi
int32_t var_4_1 = 2
int32_t*** eax_4 = *(edi + 4)
sub_4365a0(edi, &var_10, *eax_4, eax_4)
int32_t var_20_3 = *(edi + 4)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
