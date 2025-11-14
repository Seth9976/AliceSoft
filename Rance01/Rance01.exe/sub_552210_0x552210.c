// 函数: sub_552210
// 地址: 0x552210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x54) == 0)
    struct IString::sys43vm::CStringWrapper::VTable** eax_1 = operator new(8)
    
    if (eax_1 != 0)
        *eax_1 = &sys43vm::CStringWrapper::`vftable'{for `IString'}
        eax_1[1] = 0
        *(arg1 + 0x54) = eax_1
        eax_1[1] = arg1
        return *(arg1 + 0x54)
    
    *(arg1 + 0x54) = 0
    *4 = arg1

return *(arg1 + 0x54)
