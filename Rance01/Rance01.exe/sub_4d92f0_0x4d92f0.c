// 函数: sub_4d92f0
// 地址: 0x4d92f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7227ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CMotionObject::`vftable'{for `sealengine::CDrawInstance'}
arg1[1] = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)
CRITICAL_SECTION* lpCriticalSection_1

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    lpCriticalSection_1 = lpCriticalSection

arg1[2] = lpCriticalSection_1
int32_t var_4 = 0
arg1[3].b = 0
arg1[4] = 0
arg1[5] = 0xffffffff
arg1[8] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[7] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[7]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[7]
*(eax_5 + 8) = eax_5
*(arg1[7] + 0x14) = 1
*(arg1[7] + 0x15) = 1
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
void* var_1c = &arg1[0xe]
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
var_4.b = 3
arg1[0x14] = 0
int32_t* eax_7 = operator new(0x6c)

if (eax_7 == 0)
    int32_t var_20 = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_20)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[0x13] = eax_7
long double x87_r7 = float.t(0)
*eax_7 = eax_7
void* eax_8 = arg1[0x13]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[0x13]
*(eax_9 + 8) = eax_9
arg1[0x13][0xd].vFunc_0.b = 1
*(arg1[0x13] + 0x69) = 1
arg1[0x16] = fconvert.s(x87_r7)
arg1[0x17] = fconvert.s(x87_r7)
arg1[0x18] = fconvert.s(x87_r7)
arg1[0x19] = fconvert.s(x87_r7)
arg1[0x1a] = fconvert.s(x87_r7)
arg1[0x1b] = fconvert.s(x87_r7)
long double x87_r6 = float.t(1)
arg1[0x1c] = fconvert.s(x87_r6)
arg1[0x1d] = fconvert.s(x87_r6)
arg1[0x1e] = fconvert.s(x87_r6)
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x1f] = fconvert.s(x87_r7)
__builtin_memset(&arg1[0x22], 0, 0x94)
arg1[0x48].b = 0
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x4b] = 0
arg1[0x4d] = 0
arg1[0x4e].w = 0
arg1[0x4f] = 0
arg1[0x50].b = 0
arg1[0x51] = fconvert.s(x87_r7)
arg1[0x52] = fconvert.s(x87_r7)
arg1[0x53] = fconvert.s(x87_r7)
arg1[0x54] = fconvert.s(x87_r7)
arg1[0x55] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
