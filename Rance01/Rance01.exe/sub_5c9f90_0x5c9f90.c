// 函数: sub_5c9f90
// 地址: 0x5c9f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_719c70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct IALDFile2::aldloader::CALDFile::VTable** result = arg5
void* i = arg3
struct IALDFile2::aldloader::CALDFile::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg4; i += 0x2c)
    struct IALDFile2::aldloader::CALDFile::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &aldloader::CALDFile::`vftable'{for `IALDFile2'}
        sub_5ca050(&result[1], i + 4)
        var_8_1.b = 2
        sub_5ca120(&result[5], i + 0x14)
        result[9] = *(i + 0x24)
        result[0xa] = *(i + 0x28)
    
    result = &result[0xb]
    var_8_1.b = 0
    arg5 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
