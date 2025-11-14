// 函数: sub_4d0d10
// 地址: 0x4d0d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b1db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 8
int32_t ecx
sub_4d1010(ecx, arg1)
void* var_14 = arg1 + 0x7c
var_4.b = 9
int32_t* eax_3 = *(arg1 + 0x80)
void* var_10
sub_4d3cb0(arg1 + 0x7c, &var_10, *eax_3, eax_3)
int32_t var_2c_1 = *(arg1 + 0x80)
sub_6b4d5b()
var_10 = arg1 + 0x6c
var_4.b = 0xa
int32_t* eax_4 = *(arg1 + 0x70)
sub_4d3bf0(arg1 + 0x6c, &var_14, *eax_4, eax_4)
int32_t var_2c_3 = *(arg1 + 0x70)
sub_6b4d5b()
var_10 = arg1 + 0x5c
var_4.b = 0xb
int32_t* eax_5 = *(arg1 + 0x60)
sub_4d3b30(arg1 + 0x5c, &var_14, *eax_5, eax_5)
int32_t var_2c_5 = *(arg1 + 0x60)
sub_6b4d5b()
var_10 = arg1 + 0x4c
var_4.b = 0xc
int32_t* eax_6 = *(arg1 + 0x50)
sub_4d39e0(arg1 + 0x4c, &var_14, *eax_6, eax_6)
int32_t var_2c_7 = *(arg1 + 0x50)
sub_6b4d5b()
sub_4bd230(arg1 + 0x3c)
sub_4d3390(arg1 + 0x2c)
sub_4d32a0(arg1 + 0x1c)
var_4.b = 0
int32_t* result = *(arg1 + 0xc)

if (result != 0)
    void* var_2c_8 = arg1
    sub_4d6e00(result, *(arg1 + 0x10))
    int32_t var_38_1 = *(arg1 + 0xc)
    result = sub_6b4d5b()

*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 4)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
