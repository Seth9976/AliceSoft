// 函数: sub_630310
// 地址: 0x630310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_4 = 0
var_38 = arg3
char* eax_6 = arg1
char i

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)
sub_401270(&var_34, eax_6 - &eax_6[1], arg1)
char var_14 = 1
int32_t var_18 = 0
sub_630580(&var_38, arg2 + 0x10c)
int32_t eax_8
int32_t edx
edx:eax_8 = muls.dp.d(0x66666667, *(arg2 + 0x110) - *(arg2 + 0x10c))
int32_t edx_1 = edx s>> 4

if ((edx_1 u>> 0x1f) + edx_1 == 1)
    sub_630420(arg2, 0)

sub_62fb30(arg2)
sub_62fe20(arg2)
sub_630180(arg2)
InvalidateRect(*(arg2 + 4), nullptr, 1)
BOOL result = UpdateWindow(*(arg2 + 4))

if (var_20 u>= 0x10)
    int32_t var_50_2 = var_34.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
