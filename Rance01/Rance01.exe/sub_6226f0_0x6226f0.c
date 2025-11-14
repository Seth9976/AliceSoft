// 函数: sub_6226f0
// 地址: 0x6226f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71900d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0

if (*(arg1 + 0x88) u>= 0x10)
    int32_t var_2c_1 = *(arg1 + 0x74)
    sub_6b4d5b()

*(arg1 + 0x88) = 0xf
*(arg1 + 0x84) = 0
*(arg1 + 0x74) = 0
int32_t eax_4 = *(arg1 + 0x64)

if (eax_4 != 0)
    int32_t var_2c_2 = eax_4
    sub_6b4d5b()

*(arg1 + 0x64) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x6c) = 0
int32_t* eax_5 = *(arg1 + 0x54)
void* var_14 = arg1 + 0x44

if (eax_5 != 0)
    sub_405780(eax_5, *(arg1 + 0x58))
    int32_t var_2c_3 = *(arg1 + 0x54)
    sub_6b4d5b()

*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
var_4.b = 3
int32_t* eax_7 = *(arg1 + 0x48)
int32_t* var_10
sub_429bc0(arg1 + 0x44, &var_10, *eax_7, eax_7)
int32_t var_2c_5 = *(arg1 + 0x48)
sub_6b4d5b()
int32_t eax_8 = *(arg1 + 0x34)

if (eax_8 != 0)
    int32_t var_2c_6 = eax_8
    sub_6b4d5b()

*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
var_10 = arg1 + 0x24
var_4.b = 4
int32_t** eax_9 = *(arg1 + 0x28)
sub_429bc0(arg1 + 0x24, &var_14, *eax_9, eax_9)
int32_t var_2c_8 = *(arg1 + 0x28)
sub_6b4d5b()
void* edi_4 = arg1 + 0x14
arg1 = edi_4
int32_t var_4_1 = 5
int32_t*** eax_10 = *(edi_4 + 4)
sub_4365a0(edi_4, &var_10, *eax_10, eax_10)
int32_t var_2c_10 = *(edi_4 + 4)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
