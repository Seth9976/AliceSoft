// 函数: sub_5ce4d0
// 地址: 0x5ce4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e18e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_1ac
int32_t eax_2 = data_78c474 ^ &var_1ac
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_1ac = 0
HANDLE hFindFile = data_797d88
HANDLE hFindFile_1 = hFindFile

if (*(hFindFile + 0x14) == 0)
    hFindFile.b = 1
else
    void* lpFileName_1 = hFindFile + 4
    PSTR lpFileName
    
    if (*(hFindFile + 0x18) u< 0x10)
        lpFileName = lpFileName_1
    else
        lpFileName = *lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile == 0xffffffff)
        hFindFile.b = 1
    else
        FindClose(hFindFile)
        
        if ((findFileData.dwFileAttributes.b & 0x10) != 0)
            hFindFile.b = 1
        else
            int32_t var_1a8 = 0
            int32_t var_1a4_1 = 0
            int32_t var_1a0_1 = 0
            int32_t var_c_1 = 0
            int32_t var_198 = 0xffffffff
            int32_t var_194_1 = 0
            int32_t var_190_1 = 0
            var_c_1.b = 1
            int32_t* var_1c0_3 = &var_1a8
            var_1ac = 1
            char eax_5 = sub_601f80(lpFileName_1)
            int32_t ebx_1 = var_1a8
            
            if (eax_5 == 0 || ebx_1 == var_1a4_1)
                eax_5 = 1
            else
                eax_5 = 0
            
            int32_t var_c_2 = 0
            
            if (eax_5 == 0)
                int32_t var_184_1 = 0
                var_c_2.b = 2
                struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_6 =
                    sub_59e250(0x737334)
                struct IDecompressor::nutria::CZlibDecompressor::VTable** var_184_2 = eax_6
                
                if (eax_6 == 0)
                    sub_65ab60(&var_1a8)
                    hFindFile.b = 0
                else
                    var_198 = var_1a8
                    int32_t var_168_1 = 0xf
                    int32_t var_16c_1 = 0
                    char var_17c = 0
                    var_c_2.b = 3
                    
                    if (sub_410070(&var_198, &var_17c) == 0)
                        goto label_5ce759
                    
                    if (sub_402680(0x73741c, &var_17c) == 0)
                        goto label_5ce759
                    
                    if (sub_5546f0(&var_198, &var_1ac) == 0 || var_1ac != 0)
                        goto label_5ce759
                    
                    uint32_t var_180
                    
                    if (sub_40ff00(&var_180, &var_198, &var_180) == 0)
                        goto label_5ce759
                    
                    if (sub_40ff00(&var_1ac, &var_198, &var_1ac) == 0)
                        goto label_5ce759
                    
                    uint32_t edi_2 = var_180
                    
                    if (edi_2 == 0)
                        goto label_5ce785
                    
                    uint32_t ecx_6 = var_1ac
                    
                    if (ecx_6 == 0)
                        goto label_5ce785
                    
                    int32_t esi_1 = var_198
                    
                    if (esi_1 u>= var_1a4_1 || esi_1 == 0 || ecx_6 + esi_1 u> var_1a4_1)
                        goto label_5ce759
                    
                    sub_413150(&var_198, edi_2)
                    var_c_2.b = 4
                    
                    if ((*eax_6)->vFunc_2(var_198, edi_2, esi_1, var_1ac) != 0)
                        int32_t* esi_4 = &var_198
                        
                        if (sub_5cf0b0(&var_198, hFindFile_1) != 0)
                            sub_65ab60(esi_4)
                        label_5ce785:
                            sub_401110(&var_17c)
                            var_c_2.b = 0
                            (*eax_6)->vFunc_1(eax_4)
                            sub_65ab60(&var_1a8)
                            hFindFile.b = 1
                        else
                            sub_65ab60(esi_4)
                        label_5ce759:
                            sub_401110(&var_17c)
                            var_c_2.b = 0
                            (*eax_6)->vFunc_1(eax_4)
                            sub_65ab60(&var_1a8)
                            hFindFile.b = 0
                    else
                        sub_65ab60(&var_198)
                        sub_401110(&var_17c)
                        var_c_2.b = 0
                        (*eax_6)->vFunc_1(eax_4)
                        sub_65ab60(&var_1a8)
                        hFindFile.b = 0
            else
                if (*(lpFileName_1 + 0x14) u>= 0x10)
                    lpFileName_1 = *lpFileName_1
                
                void* lpFileName_2 = lpFileName_1
                sub_604c90(0x7373ec)
                
                if (ebx_1 != 0)
                    int32_t var_1c0_4 = ebx_1
                    sub_6b4d5b()
                
                hFindFile.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1ac)
return hFindFile
