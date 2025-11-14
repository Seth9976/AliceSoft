// 函数: sub_4eb550
// 地址: 0x4eb550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726a01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CParticleEffectView::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 4
sub_4eb9d0(arg1)
int32_t eax_3 = arg1[0x15]

if (eax_3 != 0)
    int32_t var_24_1 = eax_3
    sub_6b4d5b()

arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
void* var_10_1 = &arg1[0x10]
var_4.b = 5
int32_t* ecx_1 = arg1[0x14]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x14] = 0

int32_t eax_5 = arg1[0x10]

if (eax_5 != 0)
    int32_t var_24_2 = eax_5
    sub_6b4d5b()

arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
int32_t result = arg1[0xc]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0

if (arg1[9] u>= 0x10)
    int32_t var_24_3 = arg1[4]
    result = sub_6b4d5b()

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
CRITICAL_SECTION* lpCriticalSection = arg1[2]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
