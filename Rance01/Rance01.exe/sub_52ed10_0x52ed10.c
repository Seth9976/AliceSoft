// 函数: sub_52ed10
// 地址: 0x52ed10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71acec
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HANDLE hFindFile_2
int32_t eax_2 = data_78c474 ^ &hFindFile_2
int32_t __saved_edi
int32_t var_1cc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1].b = 0
PSTR lpFileName

if (arg1[5] u< 0x10)
    lpFileName = arg1
else
    lpFileName = *arg1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile == 0xffffffff)
    hFindFile.b = 1
else
    FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) != 0)
        hFindFile.b = 1
    else
        hFindFile_2 = nullptr
        int32_t var_1b8_1 = 0
        int32_t var_1b4_1 = 0
        int32_t var_c_1 = 0
        HANDLE hFindFile_3 = 0xffffffff
        int32_t var_1a4_1 = 0
        int32_t var_1a0_1 = 0
        int32_t* var_1d0_2 = &hFindFile_2
        var_c_1.b = 1
        var_c_1.b = 0
        bool cond:1_1 = sub_601f80(arg1) != 0
        hFindFile = hFindFile_2
        
        if (cond:1_1 && hFindFile != var_1b8_1)
            hFindFile_3 = hFindFile
            int32_t var_1a4_2 = var_1b8_1
            int32_t var_184_1 = 0xf
            int32_t var_188_1 = 0
            char var_198 = 0
            var_c_1.b = 2
            
            if (sub_40ff90(&hFindFile_3, &var_198, 4) == 0)
                goto label_52ee92
            
            if (sub_402680("JDBG", &var_198) == 0)
                goto label_52ee92
            
            uint32_t var_1ac = 0
            
            if (sub_5546f0(&hFindFile_3, &var_1ac) == 0 || var_1ac != 3)
                goto label_52ee92
            
            int32_t var_168_1 = 0xf
            int32_t var_16c_1 = 0
            char var_17c = 0
            var_c_1.b = 3
            char eax_10 = sub_40ff90(&hFindFile_3, &var_17c, 4)
            char eax_11
            
            if (eax_10 != 0)
                eax_11 = sub_402680("KEYC", &var_17c)
            
            char* ecx_4
            
            if (eax_10 == 0 || eax_11 == 0)
                ecx_4 = &var_17c
            label_52ee89:
                sub_401110(ecx_4)
            label_52ee92:
                sub_401110(&var_198)
                sub_65ab60(&hFindFile_2)
                hFindFile.b = 0
            else
                ecx_4 = &var_17c
                
                if (sub_40ff00(0, &hFindFile_3, arg2) == 0)
                    goto label_52ee89
                
                arg2[1].b = 1
                sub_401110(ecx_4)
                sub_401110(&var_198)
                sub_65ab60(&hFindFile_2)
                hFindFile.b = 1
        else
            if (hFindFile != 0)
                HANDLE hFindFile_1 = hFindFile
                sub_6b4d5b()
            
            hFindFile.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hFindFile_2)
return hFindFile
