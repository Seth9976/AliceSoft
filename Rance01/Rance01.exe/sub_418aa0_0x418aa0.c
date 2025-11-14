// 函数: sub_418aa0
// 地址: 0x418aa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg3
int128_t* ebx = *arg1
int128_t* ecx = arg1[1]

if (ebx != ecx)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(ebx, ecx, ebp_1)
    arg1[1] = ebp_1 + ebx

int32_t ecx_4 = *(arg3 + 0x10)
int32_t eax_3 = *(arg3 + 0x14)

if (ecx_4 != eax_3)
    int128_t* ebx_1 = *arg1
    int128_t* eax_6 = arg1[1]
    var_4 = *(ecx_4 + ((eax_3 - ecx_4) s>> 2 << 2) - 4)
    
    if (ebx_1 != eax_6)
        int32_t ebp_3 = 0 s>> 2 << 2
        ecx_4 = sub_6b49d0(ebx_1, eax_6, ebp_3)
        arg1[1] = ebp_3 + ebx_1
    
    sub_414f70(ecx_4, arg1, var_4 + 0x10)
    struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** edi_1 =
        *(*(arg3 + 0x10) + ((*(arg3 + 0x14) - *(arg3 + 0x10)) s>> 2 << 2) - 4)
    
    if (edi_1 != 0)
        sub_417620(edi_1)
        struct guiengine::CEventObserverBase::guiengine::CGUIController::VTable** var_18_5 = edi_1
        sub_6b4d5b()
    
    int32_t eax_10 = *(arg3 + 0x14)
    
    if (*(arg3 + 0x10) != eax_10)
        *(arg3 + 0x14) = eax_10 - 4

int32_t* result = *(arg3 + 0x10)

if (result != *(arg3 + 0x14))
    return result

int32_t var_18_7 = sub_418fd0(arg3)
return sub_418a00(arg3)
