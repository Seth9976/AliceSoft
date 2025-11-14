// 函数: sub_604500
// 地址: 0x604500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7162cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_184
int32_t eax_2 = data_78c474 ^ &var_184
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpPathName = arg1
PSTR lpFileName

if (lpPathName[5] u< 0x10)
    lpFileName = lpPathName
else
    lpFileName = *lpPathName

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

BOOL result

if (hFindFile != 0xffffffff && ((findFileData.dwFileAttributes u>> 4).b & 1) != 0)
    result.b = 1
else
    int32_t var_17c
    sub_401770(&var_17c)
    int32_t var_c_1 = 0
    int32_t var_16c
    int32_t var_168
    
    if (var_16c == 0)
    label_6045c1:
        
        if (lpPathName[4] != 3)
        label_604634:
            
            if (lpPathName[5] u>= 0x10)
                lpPathName = *lpPathName
            
            if (CreateDirectoryA(lpPathName, nullptr) != 0)
                if (var_168 u>= 0x10)
                    int32_t var_198_5 = var_17c
                    sub_6b4d5b()
                
                result.b = 1
            else if (var_168 u< 0x10)
                result.b = 0
            else
                int32_t var_198_4 = var_17c
                sub_6b4d5b()
                result.b = 0
        else
            int32_t ecx_3 = lpPathName[5]
            char* lpPathName_1
            
            if (ecx_3 u< 0x10)
                lpPathName_1 = lpPathName
            else
                lpPathName_1 = *lpPathName
            
            char* lpPathName_2
            
            if (*lpPathName_1 u>= 0x61)
                if (ecx_3 u< 0x10)
                    lpPathName_2 = lpPathName
                else
                    lpPathName_2 = *lpPathName
            
            if (*lpPathName_1 u< 0x61 || *lpPathName_2 u> 0x7a)
                char* lpPathName_3
                
                if (ecx_3 u< 0x10)
                    lpPathName_3 = lpPathName
                else
                    lpPathName_3 = *lpPathName
                
                if (*lpPathName_3 u< 0x41)
                    goto label_604634
                
                char* lpPathName_4
                
                if (ecx_3 u< 0x10)
                    lpPathName_4 = lpPathName
                else
                    lpPathName_4 = *lpPathName
                
                if (*lpPathName_4 u> 0x5a)
                    goto label_604634
            
            int32_t* lpPathName_5
            
            if (ecx_3 u< 0x10)
                lpPathName_5 = lpPathName
            else
                lpPathName_5 = *lpPathName
            
            if (*(lpPathName_5 + 1) != 0x3a)
                goto label_604634
            
            int32_t* lpPathName_6
            
            if (ecx_3 u< 0x10)
                lpPathName_6 = lpPathName
            else
                lpPathName_6 = *lpPathName
            
            if (*(lpPathName_6 + 2) != 0x5c)
                goto label_604634
            
            sub_401110(&var_17c)
            result.b = 1
    else
        if (sub_604500(&var_17c, eax_4).b != 0)
            goto label_6045c1
        
        if (var_168 u>= 0x10)
            int32_t var_198_3 = var_17c
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_184)
return result
