// 函数: sub_56f6f0
// 地址: 0x56f6f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e833
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1bc
int32_t eax_2 = data_78c474 ^ &var_1bc
int32_t __saved_edi
int32_t var_1cc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_1b8 = 0
int32_t* lpFileName_1
sub_426250(&lpFileName_1, arg2, &arg1[0x20])
int32_t var_c_1 = 0
int32_t* lpFileName = lpFileName_1
int32_t var_184

if (var_184 u< 0x10)
    lpFileName = &lpFileName_1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile != 0xffffffff && (findFileData.dwFileAttributes.b & 0x10) == 0)
    int32_t var_1b4 = 0xffffffff
    int32_t var_1b0_1
    __builtin_memset(&var_1b0_1, 0, 0x14)
    var_c_1.b = 2
    int32_t var_1a8
    int32_t* var_1d0_3 = &var_1a8
    var_1b8 = 1
    char eax_6 = sub_601f80(&lpFileName_1)
    int32_t edi_1 = var_1a8
    int32_t var_1a4
    
    if (eax_6 == 0 || edi_1 == var_1a4)
        eax_6 = 1
    else
        eax_6 = 0
    
    int32_t var_c_2 = 1
    
    if (eax_6 == 0)
        var_1b4 = edi_1
        int32_t var_1b0_2 = var_1a4
        int32_t var_168_1 = 0xf
        int32_t var_16c_1 = 0
        char var_17c = 0
        var_c_2.b = 3
        
        if (sub_410070(&var_1b4, &var_17c).b != 0)
            char* ecx_19
            
            if (sub_402680(0x74b504, &var_17c) == 0)
            label_56f9d4:
                ecx_19 = &var_17c
            label_56f9d8:
                sub_401110(ecx_19)
                sub_65ab60(&var_1a8)
                sub_401110(&lpFileName_1)
                hFindFile.b = 0
            else
                if (sub_5546f0(&var_1b4, &var_1b8) == 0)
                    goto label_56f9d4
                
                uint32_t edi_3 = var_1b8
                
                if (edi_3 u> 4)
                    goto label_56f9d4
                
                int32_t* ecx_6 = &var_1b4
                
                if (sub_5546f0(ecx_6, &var_1b8) == 0)
                    goto label_56f9d4
                
                *arg1 = var_1b8 != 0
                
                if (sub_5546f0(ecx_6, &arg1[4]) == 0)
                    goto label_56f9d4
                
                if (edi_3 s< 1)
                    arg1[8] = 0
                else
                    if (sub_5546f0(&var_1b4, &var_1b8) == 0)
                        goto label_56f9d4
                    
                    arg1[8] = var_1b8 != 0
                
                if (edi_3 s< 2)
                    arg1[9] = 0
                else
                    if (sub_5546f0(&var_1b4, &var_1b8) == 0)
                        goto label_56f9d4
                    
                    int32_t* ecx_8
                    ecx_8.b = var_1b8 != 0
                    arg1[9] = ecx_8.b
                
                if (edi_3 s< 3)
                    arg1[0xa] = 1
                else
                    if (sub_5546f0(&var_1b4, &var_1b8) == 0)
                        goto label_56f9d4
                    
                    arg1[0xa] = var_1b8 != 0
                
                if (edi_3 s< 4)
                    *(arg1 + 0xb) = 0x101
                else
                    if (sub_40fea0(&var_1b4, &arg1[0xb]) == 0)
                        goto label_56f9d4
                    
                    if (sub_40fea0(&var_1b4, &arg1[0xc]) == 0)
                        goto label_56f9d4
                
                if (sub_5546f0(&var_1b4, &var_1b8) == 0)
                    goto label_56f9d4
                
                int32_t* ecx_15
                ecx_15.b = var_1b8 != 0
                arg1[0xd] = ecx_15.b
                int32_t* ecx_16 = &var_1b4
                
                if (sub_5546f0(ecx_16, &arg1[0x10]) == 0)
                    goto label_56f9d4
                
                if (sub_5546f0(ecx_16, &arg1[0x14]) == 0)
                    goto label_56f9d4
                
                int32_t* ecx_18 = &var_1b4
                
                if (sub_5546f0(ecx_18, &arg1[0x18]) == 0)
                    goto label_56f9d4
                
                ecx_19 = &var_17c
                
                if (sub_5546f0(ecx_18, &arg1[0x1c]) == 0)
                    goto label_56f9d8
                
                sub_401110(ecx_19)
                sub_65ab60(&var_1a8)
                sub_401110(&lpFileName_1)
                hFindFile.b = 1
        else
            if (var_168_1 u>= 0x10)
                int32_t var_1d0_6 = var_17c.d
                sub_6b4d5b()
            
            int32_t var_168_2 = 0xf
            int32_t var_16c_2 = 0
            var_17c = 0
            
            if (edi_1 != 0)
                int32_t var_1d0_7 = edi_1
                sub_6b4d5b()
            
            if (var_184 u>= 0x10)
                int32_t* lpFileName_4 = lpFileName_1
                sub_6b4d5b()
            
            hFindFile.b = 0
    else
        int32_t* lpFileName_5 = lpFileName_1
        
        if (var_184 u< 0x10)
            lpFileName_5 = &lpFileName_1
        
        int32_t* lpFileName_6 = lpFileName_5
        sub_604c90(0x74b4d4)
        
        if (edi_1 != 0)
            int32_t var_1d0_4 = edi_1
            sub_6b4d5b()
        
        if (var_184 u>= 0x10)
            int32_t* lpFileName_3 = lpFileName_1
            sub_6b4d5b()
        
        hFindFile.b = 0
else
    if (var_184 u>= 0x10)
        int32_t* lpFileName_2 = lpFileName_1
        sub_6b4d5b()
    
    hFindFile.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1bc)
return hFindFile
