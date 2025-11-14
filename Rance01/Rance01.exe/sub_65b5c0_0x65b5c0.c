// 函数: sub_65b5c0
// 地址: 0x65b5c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722fd9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_94
int32_t eax_2 = data_78c474 ^ &var_94
int32_t __saved_edi
int32_t var_a4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = 0xf
int32_t var_74 = 0
char var_84 = 0
sub_401270(&var_84, 0x14, "DPPartsDPPartsWindow")
int32_t var_4 = 0

if (*(arg1 + 0x108) == 0)
    struct dpparts::CWindow::dpparts::CDPPartsWindow::VTable** eax_6 = operator new(0xa8)
    var_4.b = 1
    struct dpparts::CWindow::dpparts::CDPPartsWindow::VTable** eax_13
    
    if (eax_6 == 0)
        eax_13 = nullptr
    else
        if (var_70 u< 0x10)
            var_94 = &var_84
        else
            var_94 = var_84.d
        
        HGDIOBJ eax_7 = GetStockObject(LTGRAY_BRUSH)
        HCURSOR eax_8 = LoadCursorA(nullptr, 0x7f00)
        HICON eax_9 = LoadIconA(nullptr, 0x7f00)
        HICON eax_10 = LoadIconA(nullptr, 0x7f00)
        eax_13 = sub_643ac0(eax_8, eax_7, eax_6, *(arg1 + 0x18), var_94, eax_10, eax_9)
    
    var_4.b = 0
    int32_t edx_1 = *(arg1 + 0x80)
    *(arg1 + 0x108) = eax_13
    eax_13[0x21] = edx_1
    sub_6445c0()

if (*(*(arg1 + 0x108) + 0x34) == 0)
    WINDOWPLACEMENT lpwndpl
    GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
    int32_t esi_4 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
    WINDOWPLACEMENT lpwndpl_1
    GetWindowPlacement(*(arg1 + 0x34), &lpwndpl_1)
    PSTR edi_1 = var_84.d
    
    if (var_70 u< 0x10)
        edi_1 = &var_84
    
    sub_65e420(lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, esi_4, edi_1, 
        *(arg1 + 0x108), 0x56000000, 0, *(arg1 + 0x5c), arg2, nullptr, *(arg1 + 0x18))
    
    if (var_70 u>= 0x10)
        int32_t var_a8_5 = var_84.d
        sub_6b4d5b()
else if (var_70 u>= 0x10)
    int32_t var_a8_6 = var_84.d
    sub_6b4d5b()

void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_94)
return result
