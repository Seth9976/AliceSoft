// 函数: sub_42fa70
// 地址: 0x42fa70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713621
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatLayerView::`vftable'{for `IInterface'}
int32_t var_4 = 2
sub_42fd90(arg1)
int32_t eax_3 = arg1[0x11]

if (eax_3 != 0)
    int32_t var_1c_1 = eax_3
    sub_6b4d5b()

arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0
int32_t eax_4 = arg1[0xd]

if (eax_4 != 0)
    int32_t var_1c_2 = eax_4
    sub_6b4d5b()

arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
int32_t result = arg1[9]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
