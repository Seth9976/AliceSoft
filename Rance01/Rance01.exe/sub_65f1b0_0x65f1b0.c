// 函数: sub_65f1b0
// 地址: 0x65f1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72434b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0x18)

if (esi != 0)
    HWND hWnd = *(esi + 0x34)
    
    if (hWnd != 0 && *(esi + 0x38) != 0)
        DestroyWindow(hWnd)
        HINSTANCE hInstance = *(esi + 0x18)
        PSTR lpClassName = *(esi + 0x2c)
        *(esi + 0x34) = 0
        
        if (UnregisterClassA(lpClassName, hInstance) != 0)
            *(esi + 0x38) = 0
    
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 4))(1)

struct dpparts::CWindow::dpparts::CMainWindow::VTable** eax_5 = operator new(0xc8)
struct dpparts::CWindow::dpparts::CMainWindow::VTable** var_14 = eax_5
int32_t var_4 = 0
HICON var_10
struct dpparts::CWindow::dpparts::CMainWindow::VTable** esi_3

if (eax_5 == 0)
    esi_3 = nullptr
else
    void* esi_1 = arg1 + 0x38
    
    if (*(arg1 + 0x4c) u>= 0x10)
        esi_1 = *esi_1
    
    HCURSOR eax_6 = LoadCursorA(nullptr, 0x7f00)
    HICON eax_7 = LoadIconA(*(arg1 + 0x54), 0x83)
    HINSTANCE hInstance_2 = *(arg1 + 0x54)
    var_10 = eax_7
    HICON eax_8 = LoadIconA(hInstance_2, 0x83)
    esi_3 = sub_64eda0(var_10, eax_6, var_14, *(arg1 + 0x54), esi_1, eax_8)

int32_t var_4_1 = 0xffffffff
*(arg1 + 0x18) = esi_3
BOOL hWnd_1

if (esi_3[0xd] == 0)
    HICON ecx_3 = *(arg1 + 8)
    int32_t eax_12 = *(arg1 + 0x10)
    var_14 = *(arg1 + 0xc)
    var_10 = ecx_3
    int32_t ecx_4 = *(arg1 + 0x14)
    int32_t var_18 = eax_12
    int32_t var_1c = ecx_4
    sub_64fbc0(&var_1c, &var_10, &var_18, &var_14)
    PSTR edi_1
    
    if (*(arg1 + 0x4c) u< 0x10)
        edi_1 = arg1 + 0x38
    else
        edi_1 = *(arg1 + 0x38)
    
    HINSTANCE hInstance_1 = *(arg1 + 0x54)
    HMENU eax_13 = LoadMenuA(hInstance_1, 0x82)
    sub_65e420(var_10, var_14, edi_1, *(arg1 + 0x18), 0x12cf0000, var_18, var_1c, nullptr, eax_13, 
        hInstance_1)
else
    hWnd_1 = esi_3[0xd]
    
    if (hWnd_1 != 0)
        SetWindowPos(hWnd_1, nullptr, 0, 0, 0, 0, 0x47)
        esi_3[0x16].b = 1

hWnd_1.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return hWnd_1
