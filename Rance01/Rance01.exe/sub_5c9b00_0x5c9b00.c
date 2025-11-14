// 函数: sub_5c9b00
// 地址: 0x5c9b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_716718
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_58
struct IALDFile2::aldloader::CALDFile::VTable** esi = arg1
struct IALDFile2::aldloader::CALDFile::VTable** var_18 = esi
int32_t var_8_1 = 0

while (arg2 u> 0)
    struct IALDFile2::aldloader::CALDFile::VTable* const var_48_1 =
        &aldloader::CALDFile::`vftable'{for `IALDFile2'}
    int32_t var_44 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_34 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_24_1 = 0
    int32_t var_20_1 = 1
    struct IALDFile2::aldloader::CALDFile::VTable** var_1c_1 = esi
    var_8_1.b = 2
    
    if (esi != 0)
        *esi = &aldloader::CALDFile::`vftable'{for `IALDFile2'}
        sub_5ca050(&esi[1], &var_44)
        var_8_1.b = 3
        result = sub_5ca120(&esi[5], &var_34)
        esi[9] = 0
        esi[0xa] = 1
    
    arg2 -= 1
    esi = &esi[0xb]
    var_8_1.b = 0
    arg1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
