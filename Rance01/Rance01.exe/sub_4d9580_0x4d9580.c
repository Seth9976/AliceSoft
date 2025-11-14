// 函数: sub_4d9580
// 地址: 0x4d9580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722796
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CMotionObject::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 6
sub_4d9970(arg1)
var_4.b = 5
int32_t* ecx = arg1[0x4f]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x4f] = 0

arg1[0x50].b = 0
int32_t eax_4 = arg1[0x49]

if (eax_4 != 0)
    int32_t var_2c_1 = eax_4
    sub_6b4d5b()

arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x4b] = 0
int32_t eax_5 = arg1[0x44]

if (eax_5 != 0)
    int32_t var_2c_2 = eax_5
    sub_6b4d5b()

arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x46] = 0
var_4.b = 2
sub_51c9a0(&arg1[0xe])
void* var_14 = &arg1[0xa]
var_4.b = 7
sub_4ce2c0(&arg1[0xa])
int32_t eax_7 = arg1[0xa]

if (eax_7 != 0)
    int32_t var_2c_5 = eax_7
    sub_6b4d5b()

arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
void* var_14_1 = &arg1[6]
var_4.b = 8
sub_4ccdc0(&arg1[6])
var_4.b = 9
int32_t*** eax_8 = arg1[7]
void var_10
sub_4365a0(&arg1[6], &var_10, *eax_8, eax_8)
int32_t var_2c_8 = arg1[7]
int32_t result = sub_6b4d5b()
CRITICAL_SECTION* lpCriticalSection = arg1[2]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
