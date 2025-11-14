// 函数: sub_622240
// 地址: 0x622240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d2e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = data_78c474 ^ &var_b4
int32_t __saved_edi
int32_t var_c8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct TBBUTTON buttons
buttons.iBitmap = 0
buttons.idCommand = 0x9c8a
buttons.fsState = 4
buttons.fsStyle = 0
buttons.dwData = 0
buttons.iString = 0
int32_t var_3c = 1
int32_t var_38 = 0x9c8b
int16_t var_34 = 4
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_28 = 2
int32_t var_24 = 0x9c8c
int16_t var_20 = 4
int32_t var_1c = 0
int32_t var_18 = 0
HWND hWnd = CreateToolbarEx(arg1, 0x50000000, 0x9c90, 3, arg2, 0x9c90, &buttons, 3, 0x10, 0xf, 
    0x10, 0xf, 0x14)
*arg3 = hWnd

if (hWnd != 0)
    int32_t eax_5 = GetWindowLongA(hWnd, 0xfffffff0)
    SetWindowLongA(*arg3, 0xfffffff0, eax_5 | 0x800)
    InvalidateRect(*arg3, nullptr, 1)
    hWnd = CreateWindowExA(WS_EX_LEFT, "tooltips_class32", nullptr, WS_ACTIVECAPTION, 0x80000000, 
        0x80000000, 0x80000000, 0x80000000, arg1, nullptr, arg2, nullptr)
    arg3[1] = hWnd
    
    if (hWnd == 0)
        hWnd.b = 0
    else
        struct _EXCEPTION_REGISTRATION_RECORD** var_ac = nullptr
        int32_t var_a8_1 = 0
        int32_t var_a4_1 = 0
        int32_t var_4 = 0
        int32_t var_58_1 = 0xf
        int32_t var_5c_1 = 0
        char var_6c = 0
        sub_401270(&var_6c, 0xa, 0x73405c)
        var_4.b = 1
        sub_405220(&var_6c, &var_ac)
        var_4.b = 0
        
        if (var_58_1 u>= 0x10)
            int32_t var_cc_2 = var_6c.d
            sub_6b4d5b()
        
        int32_t var_58_2 = 0xf
        int32_t var_5c_2 = 0
        var_6c = 0
        sub_401270(&var_6c, 0xe, 0x734068)
        var_4.b = 2
        sub_405220(&var_6c, &var_ac)
        var_4.b = 0
        
        if (var_58_2 u>= 0x10)
            int32_t var_cc_3 = var_6c.d
            sub_6b4d5b()
        
        int32_t var_58_3 = 0xf
        int32_t var_5c_3 = 0
        var_6c = 0
        sub_401270(&var_6c, 0x28, 0x734078)
        var_4.b = 3
        sub_405220(&var_6c, &var_ac)
        
        if (var_58_3 u>= 0x10)
            int32_t var_cc_4 = var_6c.d
            sub_6b4d5b()
        
        struct HWND__* eax_8 = *arg3
        int32_t var_98_1 = 0x10
        struct _EXCEPTION_REGISTRATION_RECORD** esi_4 = var_ac
        int32_t lParam = 0x30
        struct HWND__* var_94_1 = eax_8
        HINSTANCE var_7c_1 = arg2
        WPARAM wParam = 0
        var_4c
        void* var_b0_1 = &var_4c
        
        do
            void lParam_1
            SendMessageA(*arg3, 0x41d, wParam, &lParam_1)
            int32_t var_90_1 = *var_b0_1
            
            if (esi_4[5] u< 0x10)
                struct _EXCEPTION_REGISTRATION_RECORD** var_78_2 = esi_4
            else
                struct _EXCEPTION_REGISTRATION_RECORD* var_78_1 = *esi_4
            
            SendMessageA(arg3[1], 0x404, 0, &lParam)
            var_b0_1 += 0x14
            wParam += 1
            esi_4 = &esi_4[7]
        while (wParam s< 3)
        
        SendMessageA(*arg3, 0x424, arg3[1], 0)
        struct _EXCEPTION_REGISTRATION_RECORD** esi_5 = var_ac
        
        if (esi_5 != 0)
            sub_405780(esi_5, var_a8_1)
            struct _EXCEPTION_REGISTRATION_RECORD** var_cc_7 = esi_5
            sub_6b4d5b()
        
        hWnd.b = 1
else
    hWnd.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b4)
return hWnd
