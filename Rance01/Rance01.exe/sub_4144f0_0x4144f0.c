// 函数: sub_4144f0
// 地址: 0x4144f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = *(arg1 + 0x2c)

if (ecx_5 != 0)
    int32_t result = (*(*ecx_5 + 8))()
    
    if (result == 0xa)
        return result

int32_t* ecx = *(arg1 + 0x2c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x2c) = 0

struct guiengine::CGUIView::guiengine::CGUILayoutBoxView::VTable** eax_3 = operator new(0x28)

if (eax_3 == 0)
    *(arg1 + 0x2c) = 0
    return (*(*0 + 0x20))(arg1 + 4)

eax_3[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
*eax_3 = &guiengine::CGUILayoutBoxView::`vftable'{for `guiengine::CGUIView'}
eax_3[1] = &guiengine::CGUILayoutBoxView::`vftable'{for `guiengine::CEventObserverBase'}
eax_3[2] = 1
eax_3[3].b = 0
eax_3[4] = 0
eax_3[5] = 0
eax_3[6] = 0
eax_3[7] = 0
eax_3[9] = 0
*(arg1 + 0x2c) = eax_3
return (*eax_3)->vFunc_8(arg1 + 4)
