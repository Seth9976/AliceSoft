// 函数: sub_5fa570
// 地址: 0x5fa570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724439
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 3
sub_5fa640(arg1)
int32_t edx = arg1[0x1a]
int32_t* eax_3 = arg1[0x19]

if (eax_3 != edx)
    int32_t* var_20_1 = arg1
    int32_t var_24_1 = edx
    arg1[0x1a] = sub_4febf0(eax_3, edx, arg1)

var_4.b = 2
int32_t edi = arg1[0x1d]

if (edi != 0xffffffff)
    sub_409390(edi)
    arg1[0x1d] = 0xffffffff

int32_t eax_5 = arg1[0x19]

if (eax_5 != 0)
    int32_t var_20_2 = eax_5
    sub_6b4d5b()

arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
int32_t result = arg1[0x14]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0

if (arg1[5] u>= 0x10)
    int32_t var_20_3 = *arg1
    result = sub_6b4d5b()

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
