// 函数: sub_40cbf0
// 地址: 0x40cbf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715655
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
sub_40cd10(arg2)
void* edi = arg2 + 8
arg2 = edi
int32_t var_4_1 = 1
int32_t* eax_3 = *(edi + 4)
sub_4365a0(edi, &var_10, *eax_3, eax_3)
int32_t var_20_2 = *(edi + 4)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
