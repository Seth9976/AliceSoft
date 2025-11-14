// 函数: sub_4b5710
// 地址: 0x4b5710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7153e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct sealengine::CBoneCollisionShape::VTable** result = arg5
void* i = arg3
struct sealengine::CBoneCollisionShape::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x3c)
    struct sealengine::CBoneCollisionShape::VTable** result_1 = result
    
    if (result != 0)
        *result = &sealengine::CBoneCollisionShape::`vftable'
        result[1] = &sealengine::CCollisionShape::`vftable'
        result[2] = *(i + 8)
        result[3] = *(i + 0xc)
        result[4] = *(i + 0x10)
        result[5] = *(i + 0x14)
        result[6] = *(i + 0x18)
        result[7] = *(i + 0x1c)
        result[8] = *(i + 0x20)
        result[9] = fconvert.s(fconvert.t(*(i + 0x24)))
        var_8_1.b = 2
        result[0xa] = *(i + 0x28)
        sub_6b05e0(&result[0xb], i + 0x2c)
    
    result = &result[0xf]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
