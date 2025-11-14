// 函数: sub_513360
// 地址: 0x513360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_20 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1
int32_t var_18 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_24 = arg2
int32_t var_4 = 0
int32_t var_4_1 = 0xffffffff

if (sub_601f80(arg1) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return true

if (esi[5] u>= 0x10)
    esi = *esi

void** var_24_1 = esi
sub_51ddc0(0x753f70)
enum MESSAGEBOX_RESULT result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
