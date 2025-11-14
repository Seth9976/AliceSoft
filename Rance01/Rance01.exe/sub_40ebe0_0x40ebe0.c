// 函数: sub_40ebe0
// 地址: 0x40ebe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct IDrawPlugin::drawgraph::CApp::VTable** eax = data_797d34

if (eax != 0)
    struct IDrawPlugin::drawgraph::CApp::VTable** var_8_1 = eax
    *eax = &drawgraph::CApp::`vftable'{for `IDrawPlugin'}
    sub_6b4d5b()
    data_797d34 = 0

struct IDrawPlugin::drawgraph::CApp::VTable** result = operator new(0x18)

if (result == 0)
    data_797d34 = 0
    result.b = 1
    return result

result[2].b = 0
result[3] = 0
result[4] = 0
result[5] = 0
*result = &drawgraph::CApp::`vftable'{for `IDrawPlugin'}
result[1] = 1
data_797d34 = result
result.b = 1
return result
