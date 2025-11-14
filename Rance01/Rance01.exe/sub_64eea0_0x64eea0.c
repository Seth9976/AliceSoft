// 函数: sub_64eea0
// 地址: 0x64eea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715da4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CMainWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpparts::CMainWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 2
void* edi = arg1[0x22]

if (edi != 0)
    HWND hWnd = *(edi + 0x34)
    
    if (hWnd != 0 && *(edi + 0x38) != 0)
        DestroyWindow(hWnd)
        HINSTANCE hInstance = *(edi + 0x18)
        PSTR lpClassName = *(edi + 0x2c)
        *(edi + 0x34) = 0
        
        if (UnregisterClassA(lpClassName, hInstance) != 0)
            *(edi + 0x38) = 0
    
    int32_t* ecx = arg1[0x22]
    
    if (ecx != 0)
        (*(*ecx + 4))(1)
    
    arg1[0x22] = 0

void* edi_1 = arg1[0x23]

if (edi_1 != 0)
    HWND hWnd_1 = *(edi_1 + 0x34)
    
    if (hWnd_1 != 0 && *(edi_1 + 0x38) != 0)
        DestroyWindow(hWnd_1)
        HINSTANCE hInstance_1 = *(edi_1 + 0x18)
        PSTR lpClassName_1 = *(edi_1 + 0x2c)
        *(edi_1 + 0x34) = 0
        
        if (UnregisterClassA(lpClassName_1, hInstance_1) != 0)
            *(edi_1 + 0x38) = 0
    
    int32_t* ecx_1 = arg1[0x23]
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(1)
    
    arg1[0x23] = 0

void* edi_2 = arg1[0x21]

if (edi_2 != 0)
    sub_6ae4d0(edi_2)
    void* var_28_6 = edi_2
    sub_6b4d5b()
    arg1[0x21] = 0

uint32_t uIDEvent = arg1[0x30]

if (uIDEvent != 0)
    KillTimer(arg1[0x31], uIDEvent)
    arg1[0x30] = 0

uint32_t uIDEvent_1 = arg1[0x30]

if (uIDEvent_1 != 0)
    KillTimer(arg1[0x31], uIDEvent_1)
    arg1[0x30] = 0

void* eax_8 = arg1[0x24]

if (eax_8 != 0)
    struct dpparts::CWindow::dpparts::CMainWindow::VTable** var_28_9 = arg1
    sub_5327d0(eax_8, arg1[0x25])
    int32_t var_2c_5 = arg1[0x24]
    sub_6b4d5b()

arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x26] = 0
HWND result = sub_65e310(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
