// 函数: sub_40ef10
// 地址: 0x40ef10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713700
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &drawpluginmanager::CApp::`vftable'{for `IDrawPluginManager'}
int32_t var_4 = 1
sub_40efb0(arg1)
void* var_14 = &arg1[9]
var_4.b = 2
int32_t* eax_3 = arg1[0xa]
void var_10
sub_40f580(&arg1[9], &var_10, *eax_3, eax_3)
int32_t var_28_2 = arg1[0xa]
sub_6b4d5b()
int32_t result = arg1[4]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
