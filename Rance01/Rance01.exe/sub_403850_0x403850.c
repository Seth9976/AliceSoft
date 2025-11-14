// 函数: sub_403850
// 地址: 0x403850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_725028
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
BOOL hObject_3 = 0xffffffff
int32_t var_6c = 0
int32_t var_68 = 0
int32_t var_c_1 = 0
BOOL hObject
uint32_t hObject_4

if (sub_601f00(&hObject_3, edi) != 0)
    hObject_4 = 0
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_5c
    int32_t* var_90_3 = &var_5c
    int32_t var_60
    int32_t* var_94_1 = &var_60
    var_c_1.b = 2
    int32_t var_74 = 0
    var_5c = 0
    var_60 = 0
    char eax_8 = sub_403e90(arg2, &hObject_3, &hObject_4, arg3, &var_74)
    BOOL hObject_1 = hObject_3
    
    if (hObject_1 != 0xffffffff && CloseHandle(hObject_1) != 0)
        hObject_3 = 0xffffffff
        hObject_1 = hObject_3
    
    int32_t var_38
    int32_t var_24
    
    if (eax_8 != 0)
        int32_t esi_1 = 0
        int32_t var_58 = 0
        
        if (var_74 s<= 0)
        label_403a0f:
            uint32_t hObject_6 = hObject_4
            
            if (hObject_6 != 0)
                uint32_t hObject_8 = hObject_6
                sub_6b4d5b()
            
            hObject = hObject_3
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
            
            hObject.b = 1
        else
            while (sub_403ac0(edi, &var_58, arg2, &hObject_4, var_60, var_5c) != 0)
                esi_1 += 1
                
                if (esi_1 s>= var_74)
                    goto label_403a0f
            
            if (edi[5] u>= 0x10)
                edi = *edi
            
            int32_t* var_90_11 = edi
            var_c_1.b = 4
            sub_4037c0(sub_4104a0(0x758078))
            
            if (var_24 u>= 0x10)
                int32_t var_90_13 = var_38
                sub_6b4d5b()
            
            uint32_t hObject_7 = hObject_4
            
            if (hObject_7 != 0)
                uint32_t hObject_9 = hObject_7
                sub_6b4d5b()
            
            hObject = hObject_3
            
            if (hObject == 0xffffffff)
                hObject.b = 0
            else
                CloseHandle(hObject)
                hObject.b = 0
    else
        if (edi[5] u>= 0x10)
            edi = *edi
        
        int32_t* var_90_5 = edi
        var_c_1.b = 3
        sub_4037c0(sub_4104a0(0x758048))
        
        if (var_24 u>= 0x10)
            int32_t var_90_7 = var_38
            sub_6b4d5b()
        
        hObject = hObject_4
        
        if (hObject != 0)
            BOOL hObject_2 = hObject
            sub_6b4d5b()
        
        if (hObject_1 != 0xffffffff)
            CloseHandle(hObject_1)
        
        hObject.b = 0
else
    if (edi[5] u>= 0x10)
        edi = *edi
    
    int32_t* var_90 = edi
    var_c_1.b = 1
    sub_4037c0(sub_4104a0(0x75801c))
    int32_t var_40
    
    if (var_40 u>= 0x10)
        uint32_t hObject_5 = hObject_4
        sub_6b4d5b()
    
    hObject = hObject_3
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return hObject
