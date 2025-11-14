// 函数: sub_4cb5b0
// 地址: 0x4cb5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CLightParamList::`vftable'
arg1[1] = 1
CRITICAL_SECTION* lpCriticalSection_1
float ecx
int32_t edx
lpCriticalSection_1, ecx, edx = operator new(0x18)
CRITICAL_SECTION* lpCriticalSection = lpCriticalSection_1

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    ecx, edx = InitializeCriticalSection(lpCriticalSection)

arg1[2] = lpCriticalSection
int32_t var_4 = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
var_4.b = 1
sub_4cb740(arg1, edx, ecx)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
