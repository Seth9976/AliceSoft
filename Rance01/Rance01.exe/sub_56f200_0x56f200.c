// 函数: sub_56f200
// 地址: 0x56f200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e888
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_60 = &fileimage::CFileImageMaker::`vftable'
int32_t result_3 = 0
int32_t var_58 = 0
int32_t var_54 = 0
int32_t var_4 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_401270(&var_2c, 3, 0x74b4a4)
var_4.b = 1
char* edx = var_2c.d
char* ecx = edx
char* eax_7

if (var_18 u>= 0x10)
    eax_7 = edx
else
    ecx = &var_2c
    eax_7 = &var_2c

void** var_7c = arg2
int32_t* esi_1 = &result_3
sub_4102d0(esi_1, nullptr, eax_7, var_1c + ecx)
uint8_t var_61 = 0
sub_54e400(&var_61, esi_1)
var_4.b = 0

if (var_18 u>= 0x10)
    int32_t var_7c_1 = var_2c.d
    sub_6b4d5b()

int32_t* esi_2 = &result_3
var_61 = 4
sub_54e400(&var_61, esi_2)
var_61 = 0
sub_54e400(&var_61, esi_2)
var_61 = 0
sub_54e400(&var_61, esi_2)
var_61 = 0
sub_54e400(&var_61, esi_2)
int32_t ebx
ebx.b = *arg1 != 0
var_61 = ebx.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_2 = *(arg1 + 4)
var_61 = ebx_2.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_2 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_2 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_2 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_4
ebx_4.b = *(arg1 + 8) != 0
var_61 = ebx_4.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_4 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_4 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_4 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_6
ebx_6.b = *(arg1 + 9) != 0
var_61 = ebx_6.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_6 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_6 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_6 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_8
ebx_8.b = *(arg1 + 0xa) != 0
var_61 = ebx_8.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_8 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_8 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_8 u>> 0x18).b
sub_54e400(&var_61, esi_2)
var_61 = *(arg1 + 0xb) != 0
sub_54e400(&var_61, esi_2)
var_61 = *(arg1 + 0xc) != 0
sub_54e400(&var_61, esi_2)
int32_t ebx_10
ebx_10.b = *(arg1 + 0xd) != 0
var_61 = ebx_10.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_10 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_10 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_10 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_12 = *(arg1 + 0x10)
var_61 = ebx_12.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_12 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_12 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_12 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_14 = *(arg1 + 0x14)
var_61 = ebx_14.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_14 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_14 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_14 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_16 = *(arg1 + 0x18)
var_61 = ebx_16.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_16 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_16 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_16 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t ebx_18 = *(arg1 + 0x1c)
var_61 = ebx_18.b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_18 u>> 8).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_18 u>> 0x10).b
sub_54e400(&var_61, esi_2)
var_61 = (ebx_18 u>> 0x18).b
sub_54e400(&var_61, esi_2)
int32_t* var_48
sub_426250(&var_48, arg2, arg1 + 0x20)
var_4.b = 2
int32_t result
int32_t var_34

if (sub_602070(&var_48, &result_3) != 0)
    if (var_34 u>= 0x10)
        int32_t* var_7c_6 = var_48
        sub_6b4d5b()
    
    result = result_3
    int32_t var_34_2 = 0xf
    int32_t var_38_1 = 0
    var_48.b = 0
    
    if (result != 0)
        int32_t result_2 = result
        sub_6b4d5b()
    
    result.b = 1
else
    int32_t* eax_71 = var_48
    
    if (var_34 u< 0x10)
        eax_71 = &var_48
    
    int32_t* var_7c_4 = eax_71
    sub_604c90(0x74b4a8)
    
    if (var_34 u>= 0x10)
        int32_t* var_7c_5 = var_48
        sub_6b4d5b()
    
    result = result_3
    int32_t var_34_1 = 0xf
    int32_t var_38 = 0
    var_48.b = 0
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
