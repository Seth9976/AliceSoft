// 函数: sub_42cf10
// 地址: 0x42cf10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_72427e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_1c4
int32_t eax_2 = data_78c474 ^ &var_1c4
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
var_1c4 = arg1
int32_t var_198
int32_t edx
sub_401940(&var_198, edx, ebx)
int32_t var_c_1 = 0
var_c_1.b = 1
int32_t* lpFileName_1
sub_401ef0(&var_198, sub_401c00(&lpFileName_1, &var_198))
var_c_1.b = 0
int32_t var_1a0

if (var_1a0 u>= 0x10)
    int32_t* lpFileName_2 = lpFileName_1
    sub_6b4d5b()

struct IInterface::partsengine::CFlatData::VTable** result
int32_t var_184
struct IInterface::partsengine::CFlatData::VTable** result_1

if (var_1c4[1].b == 0)
    result_1 = nullptr
label_42d197:
    int32_t* ecx_9 = *var_1c4
    
    if (ecx_9 != 0)
        int32_t* eax_22 = (*(*ecx_9 + 0x10))(3)
        
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        int32_t* eax_24 = (*(*eax_22 + 8))(ebx)
        
        if (eax_24 == 0)
            goto label_42d239
        
        struct IInterface::partsengine::CFlatData::VTable** eax_25 = operator new(0x78)
        var_1c4 = eax_25
        var_c_1.b = 7
        
        if (eax_25 != 0)
            result_1 = sub_4282d0(eax_25)
        
        var_c_1.b = 0
        char eax_31 = sub_428950(result_1, (*(*eax_24 + 0x18))((*(*eax_24 + 0x14))(eax_4)))
        int32_t eax_32 = *(*eax_24 + 4)
        
        if (eax_31 != 0)
            eax_32()
            
            if (var_184 u>= 0x10)
                int32_t var_1d8_15 = var_198
                sub_6b4d5b()
            
            result = result_1
        else
            eax_32()
            (*result_1)->__offset(0x4).d()
        label_42d239:
            
            if (var_184 u< 0x10)
                result = nullptr
            else
                int32_t var_1d8_14 = var_198
                sub_6b4d5b()
                result = nullptr
    else if (var_184 u< 0x10)
        result = nullptr
    else
        int32_t var_1d8_10 = var_198
        sub_6b4d5b()
        result = nullptr
else
    sub_42cb80(&lpFileName_1)
    var_c_1.b = 2
    void* var_17c
    int32_t* eax_9 = sub_405c90(&var_17c, &var_198, ".flat")
    var_c_1.b = 3
    sub_5870d0(&lpFileName_1)
    result_1 = nullptr
    sub_402000(&lpFileName_1, eax_9, 0, 0xffffffff)
    int32_t var_168
    
    if (var_168 u>= 0x10)
        void* var_1d8_2 = var_17c
        sub_6b4d5b()
    
    int32_t* lpFileName = lpFileName_1
    
    if (var_1a0 u< 0x10)
        lpFileName = &lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
    
    if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
        var_c_1.b = 0
        
        if (var_1a0 u>= 0x10)
            int32_t* lpFileName_4 = lpFileName_1
            sub_6b4d5b()
        
        goto label_42d197
    
    var_17c = nullptr
    int32_t var_178_1 = 0
    int32_t var_174_1 = 0
    int32_t var_1c0_1 = 0xffffffff
    int32_t var_1bc_1 = 0
    int32_t var_1b8_1 = 0
    int32_t* var_1d8_5 = &var_17c
    var_c_1.b = 5
    var_c_1.b = 4
    
    if (sub_601f80(&lpFileName_1) != 0)
        int32_t* eax_14 = operator new(0x78)
        var_1c4 = eax_14
        var_c_1.b = 6
        
        if (eax_14 != 0)
            result_1 = sub_4282d0(eax_14)
        
        var_c_1.b = 4
        void* edx_2 = var_17c
        
        if (sub_428950(result_1, edx_2, var_178_1 - edx_2) != 0)
            sub_65ab60(&var_17c)
            sub_4c1cf0(&lpFileName_1)
            sub_401110(&var_198)
            result = result_1
        else
            (*result_1)->__offset(0x4).d(eax_4)
            sub_65ab60(&var_17c)
            sub_4c1cf0(&lpFileName_1)
            sub_401110(&var_198)
            result = nullptr
    else
        void* eax_12 = var_17c
        
        if (eax_12 != 0)
            void* var_1d8_6 = eax_12
            sub_6b4d5b()
        
        if (var_1a0 u>= 0x10)
            int32_t* lpFileName_3 = lpFileName_1
            sub_6b4d5b()
        
        int32_t var_1a0_1 = 0xf
        int32_t var_1a4_1 = 0
        lpFileName_1.b = 0
        
        if (var_184 u>= 0x10)
            int32_t var_1d8_7 = var_198
            sub_6b4d5b()
        
        result = nullptr
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1c4)
return result
