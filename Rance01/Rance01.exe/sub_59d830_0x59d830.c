// 函数: sub_59d830
// 地址: 0x59d830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719d48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** hObject

if (arg1 == 0)
    hObject.b = 0
else
    struct _EXCEPTION_REGISTRATION_RECORD** hObject_1 = 0xffffffff
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    int32_t var_4 = 0
    char* eax_5 = arg1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    sub_401270(&var_2c, eax_5 - &eax_5[1], arg1)
    bool var_39_1 = sub_601f00(&hObject_1, &var_2c) == 0
    
    if (var_18_1 u>= 0x10)
        int32_t var_54_2 = var_2c.d
        sub_6b4d5b()
    
    if (var_39_1 == 0)
        int128_t* eax_9 = arg2[1]
        int128_t* edi_3 = *arg2
        
        if (edi_3 != eax_9)
            void* esi_5 = 0
            sub_6b49d0(edi_3, eax_9, esi_5, eax_4)
            arg2[1] = esi_5 + edi_3
        
        if (sub_59d7e0(arg2, var_30_1) == 0)
            goto label_59d8d6
        
        int32_t ecx_1 = *arg2
        int32_t edx = arg2[1]
        int32_t eax_13 = ecx_1 - edx
        int32_t eax_14 = neg.d(eax_13)
        int32_t* esi_7 = &hObject_1
        
        if (sub_6021f0(esi_7, edx - ecx_1, sbb.d(eax_14, eax_14, eax_13 != 0) & ecx_1) == 0)
            goto label_59d8d6
        
        if (sub_601f60(esi_7) != 0)
            sub_601e80(esi_7)
            hObject.b = 1
        else
            sub_601e80(esi_7)
            hObject.b = 0
    else
    label_59d8d6:
        hObject = hObject_1
        
        if (hObject != 0xffffffff)
            CloseHandle(hObject)
        
        hObject.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return hObject
