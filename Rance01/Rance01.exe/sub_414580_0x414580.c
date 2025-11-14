// 函数: sub_414580
// 地址: 0x414580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_6 = *(arg1 + 0x2c)

if (ecx_6 != 0)
    int32_t result = (*(*ecx_6 + 8))()
    
    if (result == 0xb)
        return result

int32_t* ecx = *(arg1 + 0x2c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x2c) = 0

struct guiengine::CGUIView::guiengine::CGUIPartsView::VTable** eax_3 = operator new(0x30)

if (eax_3 == 0)
    *(arg1 + 0x2c) = 0
    return (*(*0 + 0x20))(arg1 + 4)

int32_t ecx_1 = *(arg1 + 0x38)
eax_3[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
eax_3[6] = ecx_1
*eax_3 = &guiengine::CGUIPartsView::`vftable'{for `guiengine::CGUIView'}
eax_3[1] = &guiengine::CGUIPartsView::`vftable'{for `guiengine::CEventObserverBase'}
eax_3[2] = 1
eax_3[3].b = 0
eax_3[4] = 0
eax_3[7] = 0
eax_3[8] = 0
eax_3[9] = 0
eax_3[0xb] = 0
*(arg1 + 0x2c) = eax_3
return (*eax_3)->vFunc_8(arg1 + 4)
