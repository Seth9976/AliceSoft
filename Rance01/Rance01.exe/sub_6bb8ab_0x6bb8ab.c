// 函数: sub_6bb8ab
// 地址: 0x6bb8ab
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7710f8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = data_78c474
int32_t var_8_5 = 0x7710f8 ^ eax_2
int32_t __saved_ebp
int32_t var_2c = eax_2 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_2 = &data_6bb8b7
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
GetModuleHandleW(u"KERNEL32.DLL")
*(arg1 + 0x5c) = 0x72b270
*(arg1 + 8) = 0
*(arg1 + 0x14) = 1
*(arg1 + 0x70) = 1
*(arg1 + 0xc8) = 0x43
*(arg1 + 0x14b) = 0x43
*(arg1 + 0x68) = 0x78c6a0
sub_6bf5de(0xd)
int32_t var_8_1 = 0
InterlockedIncrement(*(arg1 + 0x68))
int32_t var_8_2 = 0xfffffffe
sub_6bb94d()
sub_6bf5de(0xc)
int32_t var_8_3 = 1
*(arg1 + 0x6c) = arg2

if (arg2 == 0)
    *(arg1 + 0x6c) = data_78ce08

sub_6be3a2(*(arg1 + 0x6c))
int32_t var_8_4 = 0xfffffffe
int32_t result = sub_6bb956()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6bb946
return result
