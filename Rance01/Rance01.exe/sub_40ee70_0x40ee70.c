// 函数: sub_40ee70
// 地址: 0x40ee70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71372b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &drawpluginmanager::CApp::`vftable'{for `IDrawPluginManager'}
arg1[1] = &drawpluginmanager::CFinalizer<class drawpluginmanager::CApp>::`vftable'{for `IInterface'}
arg1[2] = 0
arg1[3].b = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_4 = 0
arg1[8] = 1
arg1[0xb] = 0
int32_t* eax_3 = sub_4fddf0(1)
arg1[0xa] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0xa]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0xa]
*(eax_5 + 8) = eax_5
arg1[0xa][2].vFunc_0.b = 1
*(arg1[0xa] + 0x21) = 1
arg1[2] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
