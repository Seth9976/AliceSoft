// 函数: sub_5f6dd0
// 地址: 0x5f6dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7278db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionSpriteData::VTable* var_d8
int32_t eax_2 = data_78c474 ^ &var_d8
int32_t __saved_edi
int32_t var_ec = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_5f7370(*data_797da0, arg1)

if (result == 0)
    result.b = 0
else
    result = sub_5f3790(result, arg2)
    
    if (result != 0)
        int32_t var_4 = 0
        sub_5e63e0(arg4, sub_5e5e00(arg3, result, &var_d8))
        sub_5e6630(&var_d8)
        result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_d8)
return result
