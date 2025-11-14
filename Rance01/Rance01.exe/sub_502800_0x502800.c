// 函数: sub_502800
// 地址: 0x502800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723f3c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CPolyObject::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 3
sub_502ad0(arg1)
var_4.b = 2
sub_51c9a0(&arg1[0xd])
void* var_14 = &arg1[9]
var_4.b = 4
sub_4ce2c0(&arg1[9])
int32_t eax_4 = arg1[9]

if (eax_4 != 0)
    int32_t var_2c_2 = eax_4
    sub_6b4d5b()

arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
void* var_14_1 = &arg1[5]
var_4.b = 5
sub_4ccdc0(&arg1[5])
var_4.b = 6
int32_t*** eax_5 = arg1[6]
void var_10
sub_4365a0(&arg1[5], &var_10, *eax_5, eax_5)
int32_t var_2c_5 = arg1[6]
int32_t result = sub_6b4d5b()
CRITICAL_SECTION* lpCriticalSection = arg1[2]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
