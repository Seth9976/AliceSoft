// 函数: sub_40c4b0
// 地址: 0x40c4b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715692
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
void* esi_1 = arg2 + 8
sub_40cd10(esi_1)
arg2 = esi_1
int32_t var_4_1 = 1
sub_40cd10(esi_1)
arg2 = esi_1 + 8
int32_t var_4_2 = 2
int32_t* eax_3 = *(esi_1 + 0xc)
sub_4365a0(esi_1 + 8, &var_10, *eax_3, eax_3)
int32_t var_20_3 = *(esi_1 + 0xc)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
