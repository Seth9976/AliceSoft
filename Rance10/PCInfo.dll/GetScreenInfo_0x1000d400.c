// 函数: GetScreenInfo
// 地址: 0x1000d400
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void var_dc
int32_t eax_1 = __security_cookie ^ &var_dc
int32_t* var_d0 = arg1
int32_t esi
int32_t var_e4 = esi
int32_t edi
int32_t var_e8 = edi

if (arg1 == 0)
    int32_t* eax_2
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_dc)
    return eax_2

HWND hWnd = GetDesktopWindow()
HDC eax_3 = GetDC(hWnd)
GetDeviceCaps(eax_3, 0xc)
int32_t var_d4 = GetSystemMetrics(SM_CXSCREEN)
GetSystemMetrics(SM_CYSCREEN)
ReleaseDC(hWnd, eax_3)
void var_24
int32_t* eax_7 = sub_10001000(&var_24)
void var_3c
int32_t* eax_8 = sub_10001000(&var_3c)
void var_54
int32_t* eax_9 = sub_10001000(&var_54)
void var_6c
char* eax_10 = sub_10001cc0(eax_9.b, eax_9, &var_6c, " x ")
void var_84
char* eax_11 = sub_10001d10(eax_10, eax_10, &var_84, eax_8)
void var_9c
char* eax_12 = sub_10001cc0(eax_11.b, eax_11, &var_9c, " (")
void var_b4
char* eax_13 = sub_10001d10(eax_12, eax_12, &var_b4, eax_7)
void var_cc
char* edx_8 = sub_10001cc0(eax_13.b, eax_13, &var_cc, "bpp)")

if (*(edx_8 + 0x14) u>= 0x10)
    edx_8 = *edx_8

(*(*var_d0 + 4))(edx_8)
sub_10001310(&var_d0)
void* var_b8
sub_10001310(&var_b8)
void* var_a0
sub_10001310(&var_a0)
void* var_88
sub_10001310(&var_88)
void* var_70
sub_10001310(&var_70)
void* var_58
sub_10001310(&var_58)
void* var_40
sub_10001310(&var_40)
void* var_28
sub_10001310(&var_28)
int32_t eax_16
eax_16.b = 1
int32_t __saved_ebx
int32_t var_10
@__security_check_cookie@4(var_10 ^ &__saved_ebx)
return eax_16
