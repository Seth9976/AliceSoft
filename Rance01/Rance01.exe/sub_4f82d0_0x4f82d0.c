// 函数: sub_4f82d0
// 地址: 0x4f82d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fcec
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 9
sub_4f8630(arg1)
var_4.b = 8
sub_4c1fb0(&arg1[0x2d])
int32_t eax_4 = arg1[0x29]

if (eax_4 != 0)
    int32_t var_2c_2 = eax_4
    sub_6b4d5b()

arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0

if (arg1[0x25] u>= 0x10)
    int32_t var_2c_3 = arg1[0x20]
    sub_6b4d5b()

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0
int32_t eax_6 = arg1[0x1c]

if (eax_6 != 0)
    int32_t var_2c_4 = eax_6
    sub_6b4d5b()

arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
void* eax_7 = arg1[0x18]

if (eax_7 != 0)
    int32_t* var_2c_5 = arg1
    int32_t var_30_1 = arg1[0x19]
    sub_4fec80(eax_7, arg1)
    int32_t var_34_1 = arg1[0x18]
    sub_6b4d5b()

arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
int32_t eax_9 = arg1[0x14]

if (eax_9 != 0)
    int32_t var_2c_6 = eax_9
    sub_6b4d5b()

arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
void* eax_10 = arg1[0x10]

if (eax_10 != 0)
    int32_t* var_2c_7 = arg1
    sub_4fec30(eax_10, arg1[0x11])
    int32_t var_2c_8 = arg1[0x10]
    sub_6b4d5b()

arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
void* var_14 = &arg1[0xb]
var_4.b = 0xa
sub_501490(&arg1[0xb])
var_4.b = 0xb
int32_t*** eax_12 = arg1[0xc]
void var_10
sub_4365a0(&arg1[0xb], &var_10, *eax_12, eax_12)
int32_t var_2c_11 = arg1[0xc]
int32_t result = sub_6b4d5b()

if (arg1[7] u>= 0x10)
    int32_t var_2c_12 = arg1[2]
    result = sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
CRITICAL_SECTION* lpCriticalSection = arg1[1]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
