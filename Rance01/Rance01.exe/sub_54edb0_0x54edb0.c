// 函数: sub_54edb0
// 地址: 0x54edb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = 0
arg1[1] = 0
struct IVMDebugPage3::sys43vm::CVMDebugPage::VTable** eax = operator new(8)

if (eax == 0)
    eax = nullptr
else
    *eax = &sys43vm::CVMDebugPage::`vftable'{for `IVMDebugPage3'}
    eax[1] = arg1

arg1[2] = eax
struct IVMDebug::sys43vm::CVMDebug::VTable** eax_1 = operator new(8)

if (eax_1 == 0)
    eax_1 = nullptr
else
    *eax_1 = &sys43vm::CVMDebug::`vftable'{for `IVMDebug'}
    eax_1[1] = arg1

arg1[3] = eax_1
struct IVMDebugJabFile::sys43vm::CVMDebugJabFile::VTable** eax_2 = operator new(8)

if (eax_2 == 0)
    arg1[4] = 0
    return arg1

*eax_2 = &sys43vm::CVMDebugJabFile::`vftable'{for `IVMDebugJabFile'}
eax_2[1] = arg1
arg1[4] = eax_2
return arg1
