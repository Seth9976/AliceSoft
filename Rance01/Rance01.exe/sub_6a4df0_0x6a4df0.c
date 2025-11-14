// 函数: sub_6a4df0
// 地址: 0x6a4df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72434b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6a4f50(arg1)
struct dpsound::CWindow::VTable** eax_3 = operator new(0x120)
struct dpsound::CWindow::VTable** var_14 = eax_3
struct dpsound::CWindow::VTable** edi = nullptr
int32_t var_4 = 0
HICON var_10

if (eax_3 != 0)
    void* ebp_1 = arg1 + 0x34
    
    if (*(arg1 + 0x48) u>= 0x10)
        ebp_1 = *ebp_1
    
    HCURSOR eax_4 = LoadCursorA(nullptr, 0x7f00)
    HICON eax_6 = LoadIconA(*(arg1 + 0x54), 0x8e)
    HINSTANCE hInstance_1 = *(arg1 + 0x54)
    var_10 = eax_6
    HICON eax_7 = LoadIconA(hInstance_1, 0x8e)
    edi = sub_6a5fb0(var_10, eax_7, eax_3, *(arg1 + 0x54), ebp_1, eax_4)

int32_t var_4_1 = 0xffffffff
*(arg1 + 0x50) = edi
BOOL hWnd

if (edi[0xd] == 0)
    struct dpsound::CWindow::VTable** ecx_1 = *(arg1 + 0xc)
    int32_t edx_3 = *(arg1 + 0x10)
    var_10 = *(arg1 + 8)
    int32_t eax_10 = *(arg1 + 0x14)
    var_14 = ecx_1
    int32_t var_18 = edx_3
    int32_t var_1c = eax_10
    sub_6a6de0(edi, &var_18, &var_1c, &var_10, &var_14)
    void* edi_1
    
    if (*(arg1 + 0x48) u< 0x10)
        edi_1 = arg1 + 0x34
    else
        edi_1 = *(arg1 + 0x34)
    
    HINSTANCE hInstance = *(arg1 + 0x54)
    HMENU eax_12 = LoadMenuA(hInstance, 0x87)
    sub_6b1840(var_10, var_14, edi_1, *(arg1 + 0x50), 0x12cf0000, var_18, var_1c, nullptr, eax_12, 
        hInstance)
else
    hWnd = edi[0xd]
    
    if (hWnd != 0)
        SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x47)
        edi[0x16].b = 1

hWnd.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return hWnd
