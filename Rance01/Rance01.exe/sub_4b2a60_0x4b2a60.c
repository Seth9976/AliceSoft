// 函数: sub_4b2a60
// 地址: 0x4b2a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715492
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CBillboard::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 5
sub_4b31a0(arg1)
sub_4b30d0(arg1)
int32_t* ecx_1 = arg1[0x10]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x10] = 0

arg1[0x21] = 0xffffffff
arg1[0x1d] = 0
char* eax_4

if (arg1[0x1e] u< 0x10)
    eax_4 = &arg1[0x19]
else
    eax_4 = arg1[0x19]

*eax_4 = 0
arg1[0x20] = 0
arg1[3].b = 0

if (arg1[0x1e] u>= 0x10)
    int32_t var_24_1 = arg1[0x19]
    sub_6b4d5b()

arg1[0x1e] = 0xf
arg1[0x1d] = 0
arg1[0x19].b = 0
int32_t eax_6 = arg1[0x15]

if (eax_6 != 0)
    int32_t var_24_2 = eax_6
    sub_6b4d5b()

arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
int32_t eax_7 = arg1[0x11]

if (eax_7 != 0)
    int32_t var_24_3 = eax_7
    sub_6b4d5b()

arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0
int32_t eax_8 = arg1[0xb]

if (eax_8 != 0)
    int32_t var_24_4 = eax_8
    sub_6b4d5b()

arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
int32_t result = arg1[7]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
CRITICAL_SECTION* lpCriticalSection = arg1[2]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
