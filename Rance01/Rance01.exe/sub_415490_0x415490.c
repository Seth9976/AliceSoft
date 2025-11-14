// 函数: sub_415490
// 地址: 0x415490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i_1 = arg3
struct IInterface::guiengine::CGUIComponent::VTable** result_1 = operator new(0x3c)
struct IInterface::guiengine::CGUIComponent::VTable** result

if (result_1 == 0)
    result = nullptr
else
    int32_t edx = arg3[0xa]
    result_1[1] = &guiengine::CEventObserverBase::`vftable'{for `IEventObserver'}
    *result_1 = &guiengine::CGUIComponent::`vftable'{for `IInterface'}
    result_1[1] = &guiengine::CGUIComponent::`vftable'{for `guiengine::CEventObserverBase'}
    result_1[2] = arg1
    result_1[3] = 1
    result_1[4] = 0xffffffff
    result_1[5] = 0
    result_1[6] = 0
    result_1[7] = 0
    result_1[9] = arg1
    result_1[0xa] = 0
    result_1[0xb] = 0
    result_1[0xc] = arg3
    result_1[0xd] = 0
    result_1[0xe] = edx
    result = result_1

int32_t* i = *arg3
i_1 = i

if (i != 0)
    int32_t ecx = result[6]
    int32_t* eax = result[5]
    
    if (eax == ecx)
        sub_61b5a0(&i_1, &result[5])
    else
        while (*eax != i)
            eax = &eax[1]
            
            if (eax == ecx)
                break
        
        if (eax == ecx)
            sub_61b5a0(&i_1, &result[5])

return result
