// 函数: sub_4186e0
// 地址: 0x4186e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726fc6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &guiengine::CGUIControllerStack::`vftable'
int32_t var_4 = 1
sub_418d30(arg1)
int32_t eax_3 = arg1[9]

if (eax_3 != 0)
    int32_t var_1c_1 = eax_3
    sub_6b4d5b()

arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
int32_t result = arg1[4]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
