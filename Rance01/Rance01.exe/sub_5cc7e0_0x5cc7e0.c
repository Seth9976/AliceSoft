// 函数: sub_5cc7e0
// 地址: 0x5cc7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e282
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1cc
int32_t eax_2 = data_78c474 ^ &var_1cc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_1
sub_5cd8d0(arg1, &lpFileName_1)
int32_t var_c_1 = 0
int32_t var_188
char* hFindFile
int32_t var_184

if (var_188 != 0)
    int32_t* lpFileName = lpFileName_1
    
    if (var_184 u< 0x10)
        lpFileName = &lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
    
    if (hFindFile != 0xffffffff && (findFileData.dwFileAttributes.b & 0x10) == 0)
        char* hFindFile_2 = nullptr
        int32_t var_1c4_1 = 0
        int32_t var_1c0_1 = 0
        char* hFindFile_3 = 0xffffffff
        int32_t var_1b0_1 = 0
        int32_t var_1ac_1 = 0
        char** var_1e0_3 = &hFindFile_2
        var_c_1.b = 2
        var_c_1.b = 1
        
        if (sub_601f80(&lpFileName_1) != 0)
            if (hFindFile_2 == var_1c4_1)
                goto label_5ccaf9
            
            int32_t var_1a0_1 = 0
            var_c_1.b = 3
            struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_7 = sub_59e250(0x7374bc)
            struct IDecompressor::nutria::CZlibDecompressor::VTable** var_1a0_2 = eax_7
            
            if (eax_7 == 0)
                goto label_5ccac4
            
            hFindFile_3 = hFindFile_2
            int32_t var_168_1 = 0xf
            int32_t var_16c_1 = 0
            char var_17c = 0
            var_c_1.b = 4
            
            if (sub_410070(&hFindFile_3, &var_17c) == 0)
                goto label_5ccaaa
            
            if (sub_402680(0x737578, &var_17c) == 0)
                goto label_5ccaaa
            
            uint32_t var_1b8
            
            if (sub_5546f0(&hFindFile_3, &var_1b8) == 0 || var_1b8 != 0)
                goto label_5ccaaa
            
            uint32_t var_1a4
            
            if (sub_40ff00(&var_1a4, &hFindFile_3, &var_1a4) == 0)
                goto label_5ccaaa
            
            if (sub_40ff00(&var_1b8, &hFindFile_3, &var_1b8) == 0)
                goto label_5ccaaa
            
            uint32_t edi_2 = var_1a4
            
            if (edi_2 == 0)
                goto label_5ccadf
            
            uint32_t ecx_7 = var_1b8
            
            if (ecx_7 == 0)
                goto label_5ccadf
            
            char* hFindFile_4 = hFindFile_3
            
            if (hFindFile_4 u>= var_1c4_1 || hFindFile_4 == 0 || &hFindFile_4[ecx_7] u> var_1c4_1)
                goto label_5ccaaa
            
            sub_413150(&hFindFile_3, edi_2)
            var_c_1.b = 5
            
            if ((*eax_7)->vFunc_2(hFindFile_3, edi_2, hFindFile_4, var_1b8) == 0)
                sub_65ab60(&hFindFile_3)
                sub_401110(&var_17c)
                var_c_1.b = 1
                (*eax_7)->vFunc_1(eax_4)
                goto label_5ccac4
            
            char** esi_2 = &hFindFile_3
            
            if (sub_5cd6d0(arg1, &hFindFile_3) != 0)
                sub_65ab60(esi_2)
            label_5ccadf:
                sub_401110(&var_17c)
                var_c_1.b = 1
                (*eax_7)->vFunc_1(eax_4)
            label_5ccaf9:
                sub_65ab60(&hFindFile_2)
                sub_401110(&lpFileName_1)
                hFindFile.b = 1
            else
                sub_65ab60(esi_2)
            label_5ccaaa:
                sub_401110(&var_17c)
                var_c_1.b = 1
                (*eax_7)->vFunc_1(eax_4)
            label_5ccac4:
                sub_65ab60(&hFindFile_2)
                sub_401110(&lpFileName_1)
                hFindFile.b = 0
        else
            int32_t** lpFileName_5 = lpFileName_1
            
            if (var_184 u< 0x10)
                lpFileName_5 = &lpFileName_1
            
            int32_t** lpFileName_6 = lpFileName_5
            sub_604c90(0x737548)
            hFindFile = hFindFile_2
            
            if (hFindFile != 0)
                char* hFindFile_1 = hFindFile
                sub_6b4d5b()
            
            if (var_184 u< 0x10)
                hFindFile.b = 0
            else
                int32_t* lpFileName_4 = lpFileName_1
                sub_6b4d5b()
                hFindFile.b = 0
    else if (var_184 u< 0x10)
        hFindFile.b = 1
    else
        int32_t* lpFileName_3 = lpFileName_1
        sub_6b4d5b()
        hFindFile.b = 1
else
    if (var_184 u>= 0x10)
        int32_t* lpFileName_2 = lpFileName_1
        sub_6b4d5b()
    
    hFindFile.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1cc)
return hFindFile
