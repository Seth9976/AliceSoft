// 函数: sub_643b90
// 地址: 0x643b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7139d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CDPPartsWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CDPPartsWindow::VTable** var_10_1 = arg1
*arg1 = &dpparts::CDPPartsWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 1
void* esi = arg1[0x24]

if (esi != 0)
    HWND hWnd = *(esi + 0x34)
    
    if (hWnd != 0 && *(esi + 0x38) != 0)
        DestroyWindow(hWnd)
        HINSTANCE hInstance = *(esi + 0x18)
        PSTR lpClassName = *(esi + 0x2c)
        *(esi + 0x34) = 0
        
        if (UnregisterClassA(lpClassName, hInstance) != 0)
            *(esi + 0x38) = 0
    
    int32_t* ecx = arg1[0x24]
    
    if (ecx != 0)
        (*(*ecx + 4))(1)
    
    arg1[0x24] = 0

void* esi_1 = arg1[0x23]

if (esi_1 != 0)
    HWND hWnd_1 = *(esi_1 + 0x34)
    
    if (hWnd_1 != 0 && *(esi_1 + 0x38) != 0)
        DestroyWindow(hWnd_1)
        HINSTANCE hInstance_1 = *(esi_1 + 0x18)
        PSTR lpClassName_1 = *(esi_1 + 0x2c)
        *(esi_1 + 0x34) = 0
        
        if (UnregisterClassA(lpClassName_1, hInstance_1) != 0)
            *(esi_1 + 0x38) = 0
    
    int32_t* ecx_1 = arg1[0x23]
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(1)
    
    arg1[0x23] = 0

void* esi_2 = arg1[0x22]

if (esi_2 != 0)
    sub_6ae4d0(esi_2)
    void* var_28_6 = esi_2
    sub_6b4d5b()
    arg1[0x22] = 0

int32_t eax_7 = arg1[0x25]

if (eax_7 != 0)
    int32_t var_28_7 = eax_7
    sub_6b4d5b()

arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0
HWND result = sub_65e310(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
