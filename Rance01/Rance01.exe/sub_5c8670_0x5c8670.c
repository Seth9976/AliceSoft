// 函数: sub_5c8670
// 地址: 0x5c8670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HANDLE hObject_2
int32_t eax_2 = data_78c474 ^ &hObject_2
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 s> 0 && arg2 s< *(arg1 + 0x24))
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t eax_6 = arg2 << 4
    int32_t var_4 = 0
    void* eax_7 = *(arg1 + 0x14)
    uint32_t esi_1 = zx.d(*(eax_7 + eax_6))
    uint32_t ebx_1 = zx.d(*(eax_7 + eax_6 + 2))
    char eax_8
    
    if (esi_1 != 0)
        eax_8 = sub_5c8a50(arg1, esi_1 - 1)
    
    if (esi_1 == 0 || eax_8 == 0)
        int32_t edi_2 = *(arg1 + 0x14)
        *(edi_2 + eax_6 + 8) = 0
        *(edi_2 + eax_6 + 0xc) = 1
        
        if (var_18_1 u>= 0x10)
            int32_t var_50_3 = var_2c.d
            sub_6b4d5b()
    else
        void* esi_5 = (esi_1 - 1) * 0x30 + *(arg1 + 4)
        int32_t ebp_2 = 0
        sub_401180(&var_2c, 0xffffffff, esi_5 + 4, 0)
        int32_t ebx_2 = *(*(esi_5 + 0x20) + (ebx_1 << 2))
        hObject_2 = 0xffffffff
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        
        if (sub_601f00(&hObject_2, &var_2c) != 0)
            char eax_11 = sub_6026c0(ebx_2, &hObject_2)
            char eax_12
            
            if (eax_11 != 0)
                eax_12 = sub_6026c0(var_34_1 + 0x10, &hObject_2)
            
            if (eax_11 != 0 && eax_12 != 0)
                while (true)
                    if (sub_6021f0(&hObject_2, 1, ebp_2 + 0x797e98) == 0)
                        goto label_5c87aa
                    
                    if (*(ebp_2 + 0x797e98) == 0)
                        if (ebp_2 s>= 0x100)
                            break
                        
                        HANDLE hObject_1 = hObject_2
                        
                        if (hObject_1 != 0xffffffff)
                            CloseHandle(hObject_1)
                        
                        sub_401110(&var_2c)
                        result = 0x797e98
                        goto label_5c8756
                    
                    ebp_2 += 1
                    
                    if (ebp_2 s>= 0x100)
                        goto label_5c8737
                
                goto label_5c8737
            
        label_5c87aa:
            sub_601e80(&hObject_2)
        else
        label_5c8737:
            HANDLE hObject = hObject_2
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
        
        sub_401110(&var_2c)

result = 0
label_5c8756:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hObject_2)
return result
