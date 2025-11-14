// 函数: sub_4dd750
// 地址: 0x4dd750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714f11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg1[1] = lpCriticalSection
int32_t var_4 = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
var_4.b = 1
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_401180(&arg1[7], 0xffffffff, arg2, 0)
var_4.b = 2
arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
sub_401180(&arg1[0xe], 0xffffffff, arg3, 0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
