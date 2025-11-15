// 函数: sub_10001110
// 地址: 0x10001110
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t cchData = GetLocaleInfoA(0x800, arg2, nullptr, 0)

if (cchData s<= 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

char var_11 = 0
uint8_t* lpLCData_1 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
sub_10001400(&lpLCData_1, cchData, &var_11)
int32_t var_8_1 = 0
uint8_t* lpLCData = lpLCData_1
int32_t eax_4 = GetLocaleInfoA(0x800, arg2, lpLCData, cchData)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (eax_4 s> 0)
    void* ecx_3
    
    if (*lpLCData != 0)
        uint8_t* lpLCData_2 = lpLCData
        
        do
            eax_4.b = *lpLCData_2
            lpLCData_2 = &lpLCData_2[1]
        while (eax_4.b != 0)
        
        ecx_3 = lpLCData_2 - &lpLCData_2[1]
    else
        ecx_3 = nullptr
    
    sub_100014d0(arg1, lpLCData, ecx_3)

sub_10001220(&lpLCData_1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
