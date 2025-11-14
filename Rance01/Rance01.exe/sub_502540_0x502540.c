// 函数: sub_502540
// 地址: 0x502540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72230d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CPolyObject::`vftable'{for `sealengine::CDrawInstance'}
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
arg1[7] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[6] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[6]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[6]
*(eax_5 + 8) = eax_5
*(arg1[6] + 0x14) = 1
*(arg1[6] + 0x15) = 1
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
void* var_1c = &arg1[0xd]
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
var_4.b = 3
arg1[0x13] = 0
int32_t* eax_7 = operator new(0x6c)

if (eax_7 == 0)
    int32_t var_20 = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_20)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[0x12] = eax_7
long double x87_r7 = float.t(0)
*eax_7 = eax_7
void* eax_8 = arg1[0x12]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[0x12]
*(eax_9 + 8) = eax_9
arg1[0x12][0xd].vFunc_0.b = 1
*(arg1[0x12] + 0x69) = 1
arg1[0x15] = fconvert.s(x87_r7)
arg1[0x16] = fconvert.s(x87_r7)
arg1[0x17] = fconvert.s(x87_r7)
long double x87_r6 = float.t(1)
arg1[0x18] = fconvert.s(x87_r6)
arg1[0x1d] = fconvert.s(x87_r6)
arg1[0x22] = fconvert.s(x87_r6)
arg1[0x27] = fconvert.s(x87_r6)
arg1[0x19] = fconvert.s(x87_r7)
arg1[0x1a] = fconvert.s(x87_r7)
arg1[0x1b] = fconvert.s(x87_r7)
arg1[0x1c] = fconvert.s(x87_r7)
arg1[0x1e] = fconvert.s(x87_r7)
arg1[0x1f] = fconvert.s(x87_r7)
arg1[0x20] = fconvert.s(x87_r7)
arg1[0x21] = fconvert.s(x87_r7)
arg1[0x23] = fconvert.s(x87_r7)
arg1[0x24] = fconvert.s(x87_r7)
arg1[0x25] = fconvert.s(x87_r7)
arg1[0x26] = fconvert.s(x87_r7)
arg1[0x28] = fconvert.s(x87_r6)
arg1[0x29] = fconvert.s(x87_r6)
arg1[0x2a] = fconvert.s(x87_r6)
arg1[0x2b] = fconvert.s(x87_r6)
arg1[0x2c] = fconvert.s(x87_r6)
arg1[0x2d] = fconvert.s(x87_r6)
arg1[0x2e] = fconvert.s(x87_r6)
arg1[0x32] = fconvert.s(x87_r6)
arg1[0x2f] = fconvert.s(x87_r7)
arg1[0x30] = fconvert.s(x87_r7)
arg1[0x31] = fconvert.s(x87_r7)
arg1[0x35] = 0
arg1[0x33] = fconvert.s(x87_r6)
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x34] = fconvert.s(x87_r7)
arg1[0x38] = fconvert.s(x87_r6)
arg1[0x3d] = fconvert.s(x87_r6)
arg1[0x42] = fconvert.s(x87_r6)
arg1[0x47] = fconvert.s(x87_r6)
arg1[0x39] = fconvert.s(x87_r7)
arg1[0x3a] = fconvert.s(x87_r7)
arg1[0x3b] = fconvert.s(x87_r7)
arg1[0x3c] = fconvert.s(x87_r7)
arg1[0x3e] = fconvert.s(x87_r7)
arg1[0x3f] = fconvert.s(x87_r7)
arg1[0x40] = fconvert.s(x87_r7)
arg1[0x41] = fconvert.s(x87_r7)
arg1[0x43] = fconvert.s(x87_r7)
arg1[0x44] = fconvert.s(x87_r7)
arg1[0x45] = fconvert.s(x87_r7)
arg1[0x46] = fconvert.s(x87_r7)
arg1[0x48] = fconvert.s(x87_r6)
arg1[0x4d] = fconvert.s(x87_r6)
arg1[0x52] = fconvert.s(x87_r6)
arg1[0x57] = fconvert.s(x87_r6)
arg1[0x49] = fconvert.s(x87_r7)
arg1[0x4a] = fconvert.s(x87_r7)
arg1[0x4b] = fconvert.s(x87_r7)
arg1[0x4c] = fconvert.s(x87_r7)
arg1[0x4e] = fconvert.s(x87_r7)
arg1[0x4f] = fconvert.s(x87_r7)
arg1[0x50] = fconvert.s(x87_r7)
arg1[0x51] = fconvert.s(x87_r7)
arg1[0x53] = fconvert.s(x87_r7)
arg1[0x54] = fconvert.s(x87_r7)
arg1[0x55] = fconvert.s(x87_r7)
arg1[0x56] = fconvert.s(x87_r7)
arg1[0x58] = 0
arg1[0x59].w = 0
*(arg1 + 0x166) = 0
arg1[0x5a] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
