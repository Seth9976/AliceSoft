// 函数: sub_611510
// 地址: 0x611510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (GetActiveWindow() == arg2)
    SetFocus(arg2)

SetCursor(*(arg1 + 0x174))
int32_t* eax_10 = sub_6116a0(arg1, zx.d(arg3.w), arg3 u>> 0x10)

if (eax_10 != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_4 = 0
    sub_611b50(&var_2c, eax_10, arg1)
    int32_t edi_2 = *eax_10
    
    if (edi_2 u> 3)
        *(arg1 + 0x160) = 0
    else
        switch (edi_2)
            case 0
                *(arg1 + 0x160) = 1
            case 1
                *(arg1 + 0x160) = 2
            case 2
                *(arg1 + 0x160) = 3
            case 3
                *(arg1 + 0x160) = 4
    
    HWND hWnd_1 = *(arg1 + 0xd4)
    BOOL eax_12
    
    if (hWnd_1 != 0)
        eax_12 = IsWindow(hWnd_1)
    
    if (hWnd_1 == 0 || eax_12 == 0)
        char* var_44_8 = &var_2c
        HWND var_48_1 = arg2
        sub_60b680(arg1 + 0xd4)
    else
        char* var_44_7 = &var_2c
        sub_60b810(arg1 + 0xd4)
        HWND hWnd_2 = *(arg1 + 0xd4)
        
        if (hWnd_2 != 0)
            InvalidateRect(hWnd_2, nullptr, 0)
    
    if (var_18_1 u>= 0x10)
        int32_t var_44_9 = var_2c.d
        sub_6b4d5b()
else
    HWND hWnd = *(arg1 + 0xd4)
    
    if (hWnd != 0)
        DestroyWindow(hWnd)
        *(arg1 + 0xd4) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return 0
