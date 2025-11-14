// 函数: sub_5c8180
// 地址: 0x5c8180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7167a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_64
int32_t var_1c = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg3 s<= 0 || arg3 s>= *(arg2 + 0x24))
    result.b = 0
else
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    int32_t eax_5 = arg3 << 4
    int32_t var_c_1 = 0
    int32_t edx_1 = *(arg2 + 0x14)
    uint32_t esi_1 = zx.d(*(eax_5 + edx_1))
    var_64 = zx.d(*(eax_5 + edx_1 + 2))
    
    if (esi_1 != 0)
        result = sub_5c8a50(arg2, esi_1 - 1)
    
    if (esi_1 == 0 || result.b == 0)
        int32_t ebx_1 = *(arg2 + 0x14)
        *(ebx_1 + eax_5 + 8) = 0
        *(ebx_1 + eax_5 + 0xc) = 1
        
        if (var_2c_1 u>= 0x10)
            int32_t var_78_3 = var_40.d
            sub_6b4d5b()
        
        result.b = 0
    else
        void* esi_5 = (esi_1 - 1) * 0x30 + *(arg2 + 4)
        sub_401180(&var_40, 0xffffffff, esi_5 + 4, 0)
        var_64 = *(*(esi_5 + 0x20) + (var_64 << 2))
        HANDLE hObject_1 = 0xffffffff
        int32_t var_5c_1 = 0
        int32_t var_58_1 = 0
        var_c_1.b = 1
        
        if (sub_601f00(&hObject_1, &var_40) != 0)
            HANDLE* esi_8 = &hObject_1
            
            if (sub_6026c0(var_64, &hObject_1) == 0)
                goto label_5c82f4
            
            void var_24
            
            if (sub_6021f0(esi_8, 8, &var_24) != 0)
                int32_t* var_4c_1 = &var_1c
                void* var_50 = &var_24
                uint32_t var_44
                sub_40ff00(&var_24, &var_50, &var_44)
                sub_40ff00(&var_64, &var_50, &var_64)
                void* eax_12 = *(arg2 + 0x14) + eax_5
                uint32_t ebx_2 = var_64
                uint32_t edx_6 = var_44
                *(eax_12 + 8) = ebx_2
                *(eax_12 + 0xc) = 1
                
                if (sub_6026c0(var_5c_1 + edx_6 - 8, &hObject_1) == 0)
                    goto label_5c82f0
                
                if ((*(*arg1 + 8))(ebx_2) == 0)
                    goto label_5c82f0
                
                esi_8 = &hObject_1
                
                if (sub_6021f0(esi_8, (*(*arg1 + 0x14))(eax_4), (*(*arg1 + 0x18))()) == 0)
                    goto label_5c82f4
                
                sub_601e80(esi_8)
                sub_401110(&var_40)
                result.b = 1
            else
            label_5c82f0:
                esi_8 = &hObject_1
            label_5c82f4:
                sub_601e80(esi_8)
                sub_401110(&var_40)
                result.b = 0
        else
            HANDLE hObject = hObject_1
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
            
            sub_401110(&var_40)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(var_1c ^ &var_64)
return result
