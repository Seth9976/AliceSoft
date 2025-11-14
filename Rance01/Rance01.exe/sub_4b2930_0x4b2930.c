// 函数: sub_4b2930
// 地址: 0x4b2930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713446
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CBillboard::`vftable'{for `sealengine::CDrawInstance'}
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
long double x87_r7 = float.t(0)
arg1[3].b = 0
arg1[4] = fconvert.s(x87_r7)
arg1[5] = fconvert.s(x87_r7)
arg1[6] = fconvert.s(x87_r7)
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
sub_4addb0(4, &arg1[7])
var_4.b = 1
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
sub_4b3ba0(4, &arg1[0xb])
long double x87_r7_1 = float.t(1)
__builtin_memset(&arg1[0xf], 0, 0x14)
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x1e] = 0xf
arg1[0x1d] = 0
arg1[0x19].b = 0
arg1[0x22] = fconvert.s(x87_r7_1)
long double x87_r6 = float.t(0)
float* eax_3 = arg1[0xb]
arg1[0x23] = fconvert.s(x87_r6)
arg1[0x20] = 0
arg1[0x24] = fconvert.s(x87_r6)
arg1[0x21] = 0xffffffff
arg1[0x25] = fconvert.s(x87_r6)
arg1[0x26] = 0
*eax_3 = fconvert.s(x87_r6)
eax_3[1] = fconvert.s(x87_r6)
void* eax_4 = arg1[0xb]
*(eax_4 + 8) = fconvert.s(x87_r7_1)
*(eax_4 + 0xc) = fconvert.s(x87_r6)
void* eax_5 = arg1[0xb]
*(eax_5 + 0x10) = fconvert.s(x87_r6)
*(eax_5 + 0x14) = fconvert.s(x87_r7_1)
void* edi_1 = arg1[0xb]
*(edi_1 + 0x18) = fconvert.s(x87_r7_1)
*(edi_1 + 0x1c) = fconvert.s(x87_r7_1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
