// 函数: sub_40fdd0
// 地址: 0x40fdd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDrawPluginManager::drawpluginmanager::CApp::VTable** eax_3 = data_797d38

if (eax_3 != 0)
    sub_40ef10(eax_3)
    struct IDrawPluginManager::drawpluginmanager::CApp::VTable** var_1c_2 = eax_3
    sub_6b4d5b()
    data_797d38 = 0

struct IDrawPluginManager::drawpluginmanager::CApp::VTable** eax_4 = operator new(0x34)
struct IDrawPluginManager::drawpluginmanager::CApp::VTable** var_10_1 = eax_4
int32_t var_4 = 0
struct IDrawPluginManager::drawpluginmanager::CApp::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_40ee70(eax_4)

data_797d38 = result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
