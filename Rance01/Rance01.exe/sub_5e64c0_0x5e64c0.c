// 函数: sub_5e64c0
// 地址: 0x5e64c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_719735
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct partsengine::CConstructionSpriteData::VTable** result = arg5
void* i = arg3
struct partsengine::CConstructionSpriteData::VTable** result_1 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0xc4)
    var_8_1.b = 1
    
    if (result != 0)
        sub_5e5e40(result, i)
    
    result = &result[0x31]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
