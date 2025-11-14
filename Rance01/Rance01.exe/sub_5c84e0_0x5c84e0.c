// 函数: sub_5c84e0
// 地址: 0x5c84e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HANDLE hObject_1
int32_t eax_2 = data_78c474 ^ &hObject_1
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 s<= 0 || arg2 s>= *(arg1 + 0x24))
    result = 0
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t eax_6 = arg2 << 4
    int32_t var_4 = 0
    void* eax_7 = *(arg1 + 0x14)
    uint32_t esi_1 = zx.d(*(eax_7 + eax_6))
    uint32_t ecx = zx.d(*(eax_7 + eax_6 + 2))
    char eax_8
    
    if (esi_1 != 0)
        eax_8 = sub_5c8a50(arg1, esi_1 - 1)
    
    if (esi_1 == 0 || eax_8 == 0)
        int32_t edi_2 = *(arg1 + 0x14)
        *(edi_2 + eax_6 + 8) = 0
        *(edi_2 + eax_6 + 0xc) = 1
        
        if (var_18_1 u>= 0x10)
            int32_t var_54_3 = var_2c.d
            sub_6b4d5b()
        
        result = 0
    else
        void* esi_5 = (esi_1 - 1) * 0x30 + *(arg1 + 4)
        sub_401180(&var_2c, 0xffffffff, esi_5 + 4, 0)
        int32_t ebp_2 = *(*(esi_5 + 0x20) + (ecx << 2))
        hObject_1 = 0xffffffff
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        
        if (sub_601f00(&hObject_1, &var_2c) != 0)
            HANDLE* esi_8
            
            if (sub_6026c0(ebp_2, &hObject_1) != 0)
                esi_8 = &hObject_1
                
                if (sub_6026c0(var_38_1 + 8, &hObject_1) == 0)
                    goto label_5c8620
                
                if (sub_6021f0(esi_8, 8, 0x797f9c) == 0)
                    goto label_5c8620
                
                sub_601e80(esi_8)
                sub_401110(&var_2c)
                result = 0x797f9c
            else
                esi_8 = &hObject_1
            label_5c8620:
                sub_601e80(esi_8)
                sub_401110(&var_2c)
                result = 0
        else
            HANDLE hObject = hObject_1
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
            
            sub_401110(&var_2c)
            result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hObject_1)
return result
