// 函数: sub_5dc1f0
// 地址: 0x5dc1f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719848
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_98 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hObject

if (*(arg3 + 0x140) == 0)
    hObject.b = 0
else
    BOOL hObject_1 = 0xffffffff
    int32_t var_7c_1 = 0
    int32_t var_78_1 = 0
    int32_t var_4 = 0
    int32_t var_2c
    int32_t* var_9c_1 = sub_401800(arg5, arg3 + 0x130, &var_2c)
    var_4.b = 1
    char var_48
    sub_402c60(&var_48, "LogViewerWindowPos.sav", nullptr)
    bool cond:0_1 = sub_601f00(&hObject_1, &var_48) == 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_9c_2 = var_48.d
        sub_6b4d5b()
    
    var_4.b = 0
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_9c_3 = var_2c
        sub_6b4d5b()
    
    if (cond:0_1 != 0)
        goto label_5dc3d6
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    var_4.b = 2
    char eax_9 = sub_602270(&hObject_1, &var_64)
    char eax_10
    
    if (eax_9 != 0)
        eax_10 = sub_402680(0x73658c, &var_64)
    
    if (eax_9 == 0 || eax_10 == 0)
        if (var_50_1 u>= 0x10)
            int32_t var_9c_10 = var_64.d
            sub_6b4d5b()
        
        int32_t var_50_2 = 0xf
        int32_t var_54_2 = 0
        var_64 = 0
    label_5dc3d6:
        hObject = hObject_1
        
        if (hObject != 0xffffffff)
            CloseHandle(hObject)
        
        hObject.b = 0
    else
        int32_t* esi_2 = &hObject_1
        int32_t var_6c
        char* ecx_2
        
        if (sub_602230(esi_2, &var_6c) == 0 || var_6c != 0)
        label_5dc355:
            ecx_2 = &var_64
        label_5dc359:
            sub_401110(ecx_2)
            sub_601e80(&hObject_1)
            hObject.b = 0
        else
            if (sub_602230(esi_2, arg4) == 0)
                goto label_5dc355
            
            int32_t* esi_4 = &hObject_1
            
            if (sub_602230(esi_4, arg1) == 0)
                goto label_5dc355
            
            if (sub_602230(esi_4, arg2) == 0)
                goto label_5dc355
            
            if (sub_602230(esi_4, arg5) == 0)
                goto label_5dc355
            
            ecx_2 = &var_64
            
            if (sub_601f60(esi_4) == 0)
                goto label_5dc359
            
            sub_401110(ecx_2)
            sub_601e80(esi_4)
            hObject.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return hObject
