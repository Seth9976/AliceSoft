// 函数: sub_4e67d0
// 地址: 0x4e67d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = arg3

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

int32_t var_44 = arg1
int32_t* var_48 = eax_5
char* eax_6 = sub_4104a0("\t%s = %d\r\n\r\n")
int32_t var_4 = 0
int32_t ecx = *(eax_6 + 0x14)
int32_t edi = *(eax_6 + 0x10)
char* ebx

if (ecx u< 0x10)
    ebx = eax_6
else
    ebx = *eax_6

if (ecx u>= 0x10)
    eax_6 = *eax_6

int32_t var_44_1 = var_30
int32_t result = sub_4102d0(arg2 + 4, *(arg2 + 8), eax_6, &ebx[edi])
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_2c
    int32_t var_44_2 = var_2c
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
