// 函数: sub_6b26f0
// 地址: 0x6b26f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = data_797d30
var_30 = 0

if (*edi != 0)
    goto label_6b2744

if (OpenClipboard(nullptr) == 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_401270(arg1, nullptr, 0x72cca1)
else
    *edi = 1
label_6b2744:
    HANDLE hMem = GetClipboardData(1)
    
    if (hMem != 0)
        int128_t* eax_6 = GlobalLock(hMem)
        
        if (eax_6 != 0)
            int32_t var_2c
            sub_402be0(&var_2c, eax_6)
            int32_t var_4 = 0
            GlobalUnlock(hMem)
            
            if (*edi != 0)
                CloseClipboard()
                *edi = 0
            
            *(arg1 + 0x14) = 0xf
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_401ef0(arg1, &var_2c)
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_48_3 = var_2c
                sub_6b4d5b()
        else
            if (*edi != 0)
                CloseClipboard()
                *edi = 0
            
            sub_402be0(arg1, 0x72cca3)
    else
        if (*edi != 0)
            CloseClipboard()
            *edi = 0
        
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        sub_401270(arg1, nullptr, 0x72cca2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return arg1
