// 函数: sub_4ae920
// 地址: 0x4ae920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_30 = arg2
EnterCriticalSection(*arg2)
char var_34 = 1
struct IMemory::common::CIMemory::VTable** result = nullptr
int32_t var_4 = 0
char var_2c
int32_t* eax_6 = sub_401c00(&var_2c, arg1)
var_4.b = 1
void** eax_8 = sub_4af030(&arg2[9], eax_6)
void** var_38 = eax_8
char eax_10

if (eax_8 != arg2[0xa])
    eax_10 = sub_405dd0(&eax_8[3], eax_6)

void*** eax_11

if (eax_8 == arg2[0xa] || eax_10 != 0)
    var_3c = arg2[0xa]
    eax_11 = &var_3c
else
    eax_11 = &var_38

void** edi_1 = *eax_11
var_4.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_50_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0

if (edi_1 != arg2[0xa])
    int32_t ecx_1 = edi_1[0xc]
    
    if (ecx_1 == 0)
        result = sub_4aea30(arg2, &edi_1[0xa])
    else if (ecx_1 == 1)
        result = sub_4aecc0(arg2, &edi_1[0xa])

LeaveCriticalSection(*arg2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
