// 函数: sub_5521d0
// 地址: 0x5521d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x4c) == 0)
    struct IVMStruct3::sys43vm::CVMStructWrapper::VTable** eax_1 = operator new(8)
    
    if (eax_1 != 0)
        *eax_1 = &sys43vm::CVMStructWrapper::`vftable'{for `IVMStruct3'}
        eax_1[1] = 0
        *(arg1 + 0x4c) = eax_1
        eax_1[1] = arg1
        return *(arg1 + 0x4c)
    
    *(arg1 + 0x4c) = 0
    *4 = arg1

return *(arg1 + 0x4c)
