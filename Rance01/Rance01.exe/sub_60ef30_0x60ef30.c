// 函数: sub_60ef30
// 地址: 0x60ef30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_716108
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND hMenu
int32_t eax_2 = data_78c474 ^ &hMenu
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
hMenu = arg2
SetFocus(arg2)

if (data_797db4 != 0)
    int32_t eax_5 = GetScrollPos(arg2, SB_VERT)
    int32_t temp0_1 = divs.dp.d(sx.q(arg3 u>> 0x10), *(arg1 + 0xb8) + *(arg1 + 0xb4))
    int32_t ecx_3 = temp0_1 + eax_5
    
    if (temp0_1 + eax_5 s>= 0 && ecx_3 s< (*(arg1 + 0xc4) - *(arg1 + 0xc0)) s/ 0x38)
        void* eax_14
        int32_t edx_8
        eax_14, edx_8 = sub_60f560(*(arg1 + 0xdc), *(arg1 + 0xc0) + ecx_3 * 0x38)
        
        if (eax_14 != 0)
            void var_38
            sub_401a00(&var_38, edx_8, eax_14 + 0x5c)
            int32_t var_c_1 = 0
            int32_t eax_16 = sub_61acb0(&var_38)
            sub_401110(&var_38)
            
            if (eax_16 != 0xffffffff)
                int32_t ecx_6 = *(eax_14 + 0x78)
                HWND hWnd = hMenu
                data_78f500 = eax_16
                data_797dc4 = ecx_6
                *(arg1 + 0xd0) = ecx_3
                InvalidateRect(hWnd, nullptr, 1)
                UpdateWindow(hWnd)
                hMenu = nullptr
                int32_t var_40_1 = 0
                HWND* esi_7 = &hMenu
                
                if (sub_6105c0(esi_7, GetParent(GetParent(GetParent(hWnd)))) != 0)
                    AppendMenuA(hMenu, MF_BYCOMMAND, 0x9d0b, 0x73513c)
                    sub_6105e0(esi_7)
else
    *(arg1 + 0xd0) = 0xffffffff
    InvalidateRect(arg2, nullptr, 1)
    UpdateWindow(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hMenu)
return 0
