// 函数: sub_56b7b0
// 地址: 0x56b7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_716c46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HANDLE result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_1a4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
PSTR lpFileName

if (arg2[5] u< 0x10)
    lpFileName = arg2
else
    lpFileName = *arg2

WIN32_FIND_DATAA findFileData
HANDLE result = FindFirstFileA(lpFileName, &findFileData)

if (result != 0xffffffff)
    FindClose(result)

if (result != 0xffffffff && (findFileData.dwFileAttributes.b & 0x10) == 0)
    result_1 = 0xffffffff
    int32_t var_190_1 = 0
    int32_t var_18c_1 = 0
    int32_t var_c_1 = 0
    
    if (sub_601f00(&result_1, arg2) == 0)
        goto label_56b8a2
    
    int32_t var_168_1 = 0xf
    int32_t var_16c_1 = 0
    char var_17c = 0
    char* var_1a8_2 = &var_17c
    var_c_1.b = 1
    
    if (sub_602450(&result_1) == 0)
        if (var_168_1 u>= 0x10)
            int32_t var_1a8_3 = var_17c.d
            sub_6b4d5b()
        
        int32_t var_168_2 = 0xf
        int32_t var_16c_2 = 0
        var_17c = 0
        goto label_56b8a2
    
    if (sub_402680("SFSF", &var_17c) != 0)
        int32_t* esi_2 = &result_1
        int32_t var_180
        
        if (sub_602230(esi_2, &var_180) == 0 || var_180 != 0)
        label_56b91a:
            sub_401110(&var_17c)
            sub_601e80(&result_1)
            result.b = 0
        else
            int32_t var_184
            
            if (sub_602230(esi_2, &var_184) == 0)
                goto label_56b91a
            
            int32_t eax_10 = var_184
            
            if (eax_10 u> 2)
                goto label_56b91a
            
            *arg1 = eax_10
            sub_401110(&var_17c)
            sub_601e80(esi_2)
            result.b = 1
    else
        sub_401110(&var_17c)
    label_56b8a2:
        result = result_1
        
        if (result != 0xffffffff)
            CloseHandle(result)
        
        result.b = 0
else
    *arg1 = 0
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
