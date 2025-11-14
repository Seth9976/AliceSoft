// 函数: sub_53cdf0
// 地址: 0x53cdf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4 = *(arg1 + 0x1f4)

if (eax_4 s< 0)
    return 0

void* esi

if (eax_4 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    esi = *(*(arg1 + 0x1e4) + (eax_4 << 2))
else
    esi = nullptr

if (*(esi + 0x50) == 0)
    struct IVMGlobal::sys43vm::CVMGlobalWrapper::VTable** eax_1 = operator new(8)
    
    if (eax_1 != 0)
        *eax_1 = &sys43vm::CVMGlobalWrapper::`vftable'{for `IVMGlobal'}
        eax_1[1] = 0
        *(esi + 0x50) = eax_1
        eax_1[1] = esi
        return *(esi + 0x50)
    
    *(esi + 0x50) = 0
    *4 = esi

return *(esi + 0x50)
