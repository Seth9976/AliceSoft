// 函数: sub_5c8a50
// 地址: 0x5c8a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_712700
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = arg2 * 0x30
char* hObject = eax_5 + *(arg1 + 4)

if (*hObject == 0)
    BOOL hObject_2 = 0xffffffff
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_c_1 = 0
    
    if (sub_601f00(&hObject_2, &hObject[4]) == 0)
        BOOL hObject_1 = hObject_2
        
        if (hObject_1 != 0xffffffff)
            CloseHandle(hObject_1)
        
        hObject_1.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return hObject_1
    
    char* hObject_3 = hObject_2
    
    if (hObject_3 == 0xffffffff)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (var_30_1 + 3 u> var_2c_1)
    label_5c8b71:
        CloseHandle(hObject_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    uint8_t buffer
    uint32_t numberOfBytesRead
    
    if (ReadFile(hObject_3, &buffer, 3, &numberOfBytesRead, nullptr) == 0 || numberOfBytesRead != 3)
        goto label_5c8b71
    
    char var_3f
    char var_3e
    uint32_t ebx_2 = (((((zx.d(var_3e) << 8) + zx.d(var_3f)) << 8) + zx.d(buffer)) << 8) u/ 3
    int32_t var_30_2 = var_30_1 + 3
    
    if (ebx_2 s> 0)
        uint32_t var_28 = 0
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        sub_404f60(ebx_2 * 3, &var_28)
        var_c_1.b = 1
        
        if (var_2c_1 u<= 0)
        label_5c8c24:
            sub_65ab60(&var_28)
            sub_601e80(&hObject_2)
            BOOL eax_17
            eax_17.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_17
        
        SetFilePointer(hObject_3, 0, nullptr, FILE_BEGIN)
        uint32_t eax_12 = var_28
        int32_t var_30_3 = 0
        
        if (sub_6021f0(&hObject_2, var_24_1 - eax_12, eax_12) == 0)
            goto label_5c8c24
        
        int32_t* esi_7 = eax_5 + *(arg1 + 4) + 0x20
        sub_65a090(esi_7, ebx_2)
        int32_t ecx_13 = 0
        
        if (ebx_2 s> 0)
            void* eax_16 = var_28 + 1
            
            do
                uint32_t* edi_6 = *esi_7
                uint32_t edx_10 =
                    ((((zx.d(*(eax_16 + 1)) << 8) + zx.d(*eax_16)) << 8) + zx.d(*(eax_16 - 1))) << 8
                
                if (ecx_13 != 0)
                    edi_6[ecx_13] = edx_10
                else
                    *edi_6 = edx_10
                
                ecx_13 += 1
                eax_16 += 3
            while (ecx_13 s< ebx_2)
        
        *(eax_5 + *(arg1 + 4)) = 1
        sub_65ab60(&var_28)
        hObject = hObject_2
        
        if (hObject != 0xffffffff)
            CloseHandle(hObject)
    else
        sub_59cdc0(eax_5 + *(arg1 + 4) + 0x20)
        *(eax_5 + *(arg1 + 4)) = 1
        CloseHandle(hObject_3)

hObject.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return hObject
