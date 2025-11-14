// 函数: sub_4f8160
// 地址: 0x4f8160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fd26
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
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401180(&arg1[2], 0xffffffff, arg2, 0)
var_4.b = 1
arg1[9] = arg4
arg1[0xa] = 0x71
arg1[0xd] = 0
int32_t* eax_5 = sub_4ecfc0(1)
arg1[0xc] = eax_5
*eax_5 = eax_5
void* eax_6 = arg1[0xc]
*(eax_6 + 4) = eax_6
void* eax_7 = arg1[0xc]
*(eax_7 + 8) = eax_7
*(arg1[0xc] + 0x14) = 1
*(arg1[0xc] + 0x15) = 1
arg1[0xf] = 0x3e8
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0
arg1[0x27] = 0
arg1[0x28] = arg3
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x2d].b = 0
__builtin_memset(&arg1[0x36], 0, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
