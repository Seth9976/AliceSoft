// 函数: sub_66beb0
// 地址: 0x66beb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c190
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXFile::exfile::CEXFile::VTable** esi = arg1
*esi = &exfile::CEXFile::`vftable'{for `IEXFile'}
int32_t var_4 = 3
sub_669750(&esi[2])

if (esi[0x1a] u>= 0x10)
    int32_t var_20_1 = esi[0x15]
    sub_6b4d5b()

esi[0x1a] = 0xf
esi[0x19] = 0
esi[0x15].b = 0

if (esi[0x13] u>= 0x10)
    int32_t var_20_2 = esi[0xe]
    sub_6b4d5b()

esi[0x13] = 0xf
esi[0x12] = 0
esi[0xe].b = 0

if (esi[0xc] u>= 0x10)
    int32_t var_20_3 = esi[7]
    sub_6b4d5b()

esi[0xc] = 0xf
esi[0xb] = 0
esi[7].b = 0
arg1 = &esi[2]
int32_t var_4_1 = 4
sub_669750(&esi[2])
int32_t var_4_2 = 5
sub_669750(&esi[2])
int32_t result = esi[2]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

esi[2] = 0
esi[3] = 0
esi[4] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
