// 函数: sub_552250
// 地址: 0x552250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x58) == 0)
    struct IVMArray2::sys43vm::CVMArrayWrapper::VTable** eax_1 = operator new(8)
    
    if (eax_1 != 0)
        *eax_1 = &sys43vm::CVMArrayWrapper::`vftable'{for `IVMArray2'}
        eax_1[1] = 0
        *(arg1 + 0x58) = eax_1
        eax_1[1] = arg1
        return *(arg1 + 0x58)
    
    *(arg1 + 0x58) = 0
    *4 = arg1

return *(arg1 + 0x58)
