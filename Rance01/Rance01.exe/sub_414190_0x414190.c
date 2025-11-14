// 函数: sub_414190
// 地址: 0x414190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct guiengine::CGUIView::guiengine::CGUIHScrollbarView::VTable** var_10 = arg1
int32_t eax_2 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg2 + 0x2c)
int32_t result

if (ecx != 0)
    result = (*(*ecx + 8))(eax_2)

if (ecx == 0 || result != 5)
    int32_t* ecx_1 = *(arg2 + 0x2c)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(eax_2)
        *(arg2 + 0x2c) = 0
    
    struct guiengine::CGUIView::guiengine::CGUIHScrollbarView::VTable** eax_5 = operator new(0xbc)
    var_10 = eax_5
    int32_t var_4 = 0
    struct guiengine::CGUIView::guiengine::CGUIHScrollbarView::VTable** eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        int32_t var_18_1 = *(arg2 + 0x30)
        eax_6 = sub_686490(arg2, eax_5, *(arg2 + 0x38))
    
    int32_t var_4_1 = 0xffffffff
    *(arg2 + 0x2c) = eax_6
    result = (*eax_6)->vFunc_8(arg2 + 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
