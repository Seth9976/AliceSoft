// 函数: sub_4c3bd0
// 地址: 0x4c3bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7228eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0xc
int32_t ecx
sub_4c3e30(ecx, arg1)
var_4.b = 0xb
sub_4f5da0(arg1 + 0x274)
var_4.b = 0xa
sub_4efa80(arg1 + 0x214)
var_4.b = 9
sub_4ac180(arg1 + 0x1d8)
int32_t eax_4 = *(arg1 + 0x1bc)

if (eax_4 != 0)
    int32_t var_1c_3 = eax_4
    sub_6b4d5b()

*(arg1 + 0x1bc) = 0
*(arg1 + 0x1c0) = 0
*(arg1 + 0x1c4) = 0
int32_t eax_5 = *(arg1 + 0x1ac)

if (eax_5 != 0)
    int32_t var_1c_4 = eax_5
    sub_6b4d5b()

*(arg1 + 0x1ac) = 0
*(arg1 + 0x1b0) = 0
*(arg1 + 0x1b4) = 0

if (*(arg1 + 0x19c) u>= 0x10)
    int32_t var_1c_5 = *(arg1 + 0x188)
    sub_6b4d5b()

*(arg1 + 0x19c) = 0xf
*(arg1 + 0x198) = 0
*(arg1 + 0x188) = 0

if (*(arg1 + 0x180) u>= 0x10)
    int32_t var_1c_6 = *(arg1 + 0x16c)
    sub_6b4d5b()

*(arg1 + 0x180) = 0xf
*(arg1 + 0x17c) = 0
*(arg1 + 0x16c) = 0
var_4.b = 4
sub_516710(arg1 + 0xc8)
int32_t eax_8 = *(arg1 + 0xb8)

if (eax_8 != 0)
    int32_t var_1c_7 = eax_8
    sub_6b4d5b()

*(arg1 + 0xb8) = 0
*(arg1 + 0xbc) = 0
*(arg1 + 0xc0) = 0
int32_t eax_9 = *(arg1 + 0x68)

if (eax_9 != 0)
    int32_t var_1c_8 = eax_9
    sub_6b4d5b()

*(arg1 + 0x68) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
int32_t result = *(arg1 + 0x58)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0

if (*(arg1 + 0x20) u>= 0x10)
    int32_t var_1c_9 = *(arg1 + 0xc)
    result = sub_6b4d5b()

*(arg1 + 0x20) = 0xf
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 4)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
