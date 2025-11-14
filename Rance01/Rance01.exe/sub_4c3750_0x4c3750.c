// 函数: sub_4c3750
// 地址: 0x4c3750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7151cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)
CRITICAL_SECTION* lpCriticalSection_1

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    lpCriticalSection_1 = lpCriticalSection

arg1[1] = lpCriticalSection_1
int32_t var_4 = 0
arg1[2] = 0
arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
var_4.b = 1
long double x87_r7 = float.t(0)
arg1[0xa] = fconvert.s(x87_r7)
arg1[0xb] = fconvert.s(x87_r7)
arg1[0xc] = fconvert.s(x87_r7)
long double x87_r6 = float.t(1)
arg1[0xd] = fconvert.s(x87_r6)
arg1[0xe] = fconvert.s(x87_r7)
arg1[0xf] = fconvert.s(x87_r7)
arg1[0x10] = fconvert.s(x87_r7)
arg1[0x11] = fconvert.s(x87_r7)
arg1[0x12] = fconvert.s(x87_r7)
arg1[0x13] = fconvert.s(x87_r6)
arg1[0x16] = 0
arg1[0x14] = fconvert.s(x87_r6)
arg1[0x17] = 0
arg1[0x15] = fconvert.s(x87_r6)
arg1[0x18] = 0
float var_18 = fconvert.s(x87_r7)
float var_14 = fconvert.s(x87_r7)
float var_10 = fconvert.s(x87_r7)
sub_4c8740(&arg1[0x16], &var_18)
var_4.b = 2
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
sub_4b3ba0(4, &arg1[0x1a])
var_4.b = 3
long double x87_r7_3 = float.t(0)
arg1[0x1e] = fconvert.s(x87_r7_3)
arg1[0x1f] = fconvert.s(x87_r7_3)
arg1[0x20] = fconvert.s(x87_r7_3)
long double x87_r6_3 = float.t(1)
arg1[0x21] = fconvert.s(x87_r6_3)
int32_t var_1c = 1
arg1[0x25] = fconvert.s(x87_r6_3)
arg1[0x22] = fconvert.s(x87_r7_3)
arg1[0x23] = fconvert.s(x87_r7_3)
arg1[0x24] = fconvert.s(x87_r7_3)
arg1[0x26] = fconvert.s(x87_r7_3)
arg1[0x27] = fconvert.s(x87_r7_3)
arg1[0x28] = fconvert.s(x87_r7_3)
arg1[0x29] = fconvert.s(x87_r6_3)
arg1[0x2c] = fconvert.s(x87_r7_3)
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
sub_4257e0(&arg1[0x2e], 2, &var_1c)
arg1[0x32] = &sealengine::CSkeleton::`vftable'
arg1[0x33] = &sealengine::CBoneList::`vftable'
arg1[0x34] = 0
arg1[0x35] = 0
arg1[0x36] = 0
arg1[0x38] = 0
arg1[0x39] = 0
arg1[0x3a] = 0
arg1[0x3c].b = 0
arg1[0x3d] = &sealengine::CBoneCollisionShapeList::`vftable'
arg1[0x3e] = 0
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x47] = 0xf
arg1[0x46] = 0
arg1[0x42].b = 0
arg1[0x49].b = 0
long double x87_r7_6 = float.t(0)
arg1[0x4c] = fconvert.s(x87_r7_6)
arg1[0x4b] = 0
arg1[0x4d] = fconvert.s(x87_r7_6)
arg1[0x4e] = fconvert.s(x87_r7_6)
arg1[0x4f] = fconvert.s(x87_r7_6)
arg1[0x50] = fconvert.s(x87_r7_6)
arg1[0x52] = fconvert.s(x87_r7_6)
arg1[0x51] = 0
arg1[0x53] = fconvert.s(x87_r7_6)
arg1[0x54] = fconvert.s(x87_r7_6)
arg1[0x55] = fconvert.s(x87_r7_6)
arg1[0x56] = fconvert.s(x87_r7_6)
arg1[0x60] = 0xf
arg1[0x5f] = 0
arg1[0x5b].b = 0
arg1[0x67] = 0xf
arg1[0x66] = 0
arg1[0x62].b = 0
arg1[0x6b] = 0
arg1[0x6c] = 0
arg1[0x6d] = 0
arg1[0x6f] = 0
arg1[0x70] = 0
arg1[0x71] = 0
arg1[0x76].b = 0
arg1[0x77] = 0
arg1[0x78] = 0
arg1[0x79] = 0
arg1[0x7b] = 0
arg1[0x7c] = 0
arg1[0x7d] = 0
__builtin_memset(&arg1[0x7f], 0, 0x19)
arg1[0x86] = 0
arg1[0x87] = 0
arg1[0x88] = 0
arg1[0x8a] = 0
arg1[0x8b] = 0
arg1[0x8c] = 0
__builtin_memset(&arg1[0x8e], 0, 0x24)
arg1[0x98] = 0
arg1[0x99] = 0
arg1[0x9a].b = 0
arg1[0x9d] = 0
arg1[0x9e] = 0
arg1[0x9f] = 0
var_4.b = 0xc
arg1[0xa5] = arg2
float* eax_5 = arg1[0x1a]
*eax_5 = fconvert.s(x87_r7_6)
eax_5[1] = fconvert.s(x87_r7_6)
void* eax_6 = arg1[0x1a]
long double x87_r6_6 = float.t(1)
*(eax_6 + 8) = fconvert.s(x87_r6_6)
*(eax_6 + 0xc) = fconvert.s(x87_r7_6)
void* eax_7 = arg1[0x1a]
*(eax_7 + 0x10) = fconvert.s(x87_r7_6)
*(eax_7 + 0x14) = fconvert.s(x87_r6_6)
void* eax_8 = arg1[0x1a]
*(eax_8 + 0x18) = fconvert.s(x87_r6_6)
*(eax_8 + 0x1c) = fconvert.s(x87_r6_6)
arg1[0x1e] = fconvert.s(x87_r6_6)
arg1[0x1f] = fconvert.s(x87_r6_6)
arg1[0x20] = fconvert.s(x87_r6_6)
arg1[0x21] = fconvert.s(x87_r6_6)
arg1[0x25] = fconvert.s(x87_r6_6)
arg1[0x22] = fconvert.s(x87_r7_6)
arg1[0x23] = fconvert.s(x87_r7_6)
arg1[0x24] = fconvert.s(x87_r7_6)
arg1[0x26] = fconvert.s(x87_r7_6)
arg1[0x27] = fconvert.s(x87_r7_6)
arg1[0x28] = fconvert.s(x87_r7_6)
arg1[0x29] = fconvert.s(x87_r6_6)
arg1[0x2b] = fconvert.s(x87_r6_6)
arg1[0x2d] = 0x1000001
arg1[0x57] = 0
arg1[0x59] = 0
arg1[0x2a] = fconvert.s(x87_r7_6)
arg1[0x58].b = 0
arg1[0x6a] = fconvert.s(x87_r7_6)
arg1[0x5a].b = 0
arg1[0x69].w = 0
arg1[0x74] = 0
arg1[0x75].b = 0
arg1[0xa4] = 0
arg1[0xa6] = 0
arg1[0xa7] = 0
sub_65a090(&arg1[0x6f], 0x10)
int32_t eax_9 = arg1[0x70]

for (int32_t* i = arg1[0x6f]; i != eax_9; i = &i[1])
    *i = 0xffffffff

arg1[0xa3].b = 1
arg1[0x73] = fconvert.s(fconvert.t(30f))
arg1[0x9b] = 0
long double x87_r7_12 = float.t(0)
*(arg1 + 0x28d) = 0
arg1[0xa1] = fconvert.s(x87_r7_12)
arg1[0xa2] = fconvert.s(fconvert.t(0.100000001f))
arg1[0x9c].b = 0
arg1[0x4a] = fconvert.s(x87_r7_12)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
