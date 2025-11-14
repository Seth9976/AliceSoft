// 函数: sub_56a6a0
// 地址: 0x56a6a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ea70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND hWnd
int32_t eax_2 = data_78c474 ^ &hWnd
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
hWnd = arg2
HWND eax_5
eax_5.b = *(arg1 + 0xf0)
enum MESSAGEBOX_RESULT eax_9

if (eax_5.b != 0)
    char var_2c
    char* lpCaption = sub_567100(&var_2c, *(arg1 + 0x3b8))
    int32_t var_4 = 0
    char var_48
    char* eax_7 = sub_567100(&var_48, *(arg1 + 0x3b8))
    var_4.b = 1
    
    if (*(eax_7 + 0x14) u>= 0x10)
        eax_7 = *eax_7
    
    char* var_80_3 = eax_7
    char* lpText = sub_4104a0(0x74b90c)
    
    if (*(lpCaption + 0x14) u>= 0x10)
        lpCaption = *lpCaption
    
    if (*(lpText + 0x14) u>= 0x10)
        lpText = *lpText
    
    eax_9 = MessageBoxA(hWnd, lpText, lpCaption, 0x24)
    int32_t var_50
    
    if (var_50 u>= 0x10)
        char var_64
        int32_t var_80_4 = var_64.d
        sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64_1 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_80_5 = var_48.d
        sub_6b4d5b()
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_80_6 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0

if (eax_5.b == 0 || eax_9 == IDYES)
    (**(arg1 + 4))(eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hWnd)
return 0
