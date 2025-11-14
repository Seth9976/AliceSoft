// 函数: sub_61ca80
// 地址: 0x61ca80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71d578
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (sub_622240(arg2, *(arg1 + 0xb8), arg1 + 0xb28) != 0)
    SendMessageA(*(arg1 + 0xb28), 0x401, 0x9c8a, 0)
    SendMessageA(*(arg1 + 0xb28), 0x401, 0x9c8b, 1)
    SendMessageA(*(arg1 + 0xb28), 0x401, 0x9c8c, 1)
    
    if (sub_61f720(arg1 + 0xd8, arg2) == 0)
    labelid_1:
        result = 0xffffffff
    else if (sub_620160(arg1 + 0x1a0, (**(arg1 + 0xd8))(*(arg1 + 0xb8), eax_4)) == 0)
    labelid_1:
        result = 0xffffffff
    else
        int32_t i_1 = 0
        void* esi_2 = arg1 + 0x5e0
        int32_t i
        
        do
            int32_t i_3 = i_1
            *esi_2 = arg1 + 0xc58
            *(esi_2 + 0xc) = arg1 + 0x388
            *(esi_2 - 4) = i_3
            *(esi_2 + 8) = arg1 + 0xbf4
            *(esi_2 + 4) = arg2
            
            if (sub_6216a0(esi_2 - 0xdc, (**(arg1 + 0x1a0))(*(arg1 + 0xb8))) == 0)
                goto label_61cad6_1
            
            i = i_1 + 1
            esi_2 += 0x17c
            i_1 = i
        while (i s< 4)
        *(arg1 + 0x464) = arg1 + 0xc58
        *(arg1 + 0x46c) = arg1 + 0xbf4
        int32_t eax_22 = *(arg1 + 0xb8)
        *(arg1 + 0x468) = arg2
        int32_t eax_23 = **(arg1 + 0xd8)
        *(arg1 + 0x460) = 4
        *(arg1 + 0x470) = arg1 + 0x388
        
        if (sub_6216a0(arg1 + 0x388, eax_23(eax_22)) == 0)
        labelid_1:
            result = 0xffffffff
        else
            sub_620f30(0x7343cc, arg1 + 0x1a0, arg1 + 0x504)
            sub_620f30(0x7343d0, arg1 + 0x1a0, arg1 + 0x680)
            sub_620f30(0x7343d8, arg1 + 0x1a0, arg1 + 0x7fc)
            sub_620f30(0x7343e4, arg1 + 0x1a0, arg1 + 0x978)
            HWND eax_27 = CreateStatusWindowA(0x50000103, 0x72d7eb, arg2, 0x9c91)
            *(arg1 + 0xbf8) = eax_27
            
            if (eax_27 == 0)
            labelid_1:
                result = 0xffffffff
            else
                *(arg1 + 0x190) = (**(arg1 + 0x1a0))()
                *(arg1 + 0x194) = (**(arg1 + 0x388))()
                HWND eax_33 = (**(arg1 + 0x1a0))()
                
                if (sub_61eaf0(*(arg1 + 0xb8), arg1 + 0xc58, arg1 + 0xaf4, eax_33) == 0)
                labelid_1:
                    result = 0xffffffff
                else
                    HINSTANCE ecx_13 = *(arg1 + 0xb8)
                    *(arg1 + 0x37c) = arg1 + 0xaf4
                    
                    if (sub_61d920(arg1 + 0xb30, ecx_13, arg2, arg1 + 0xc58) == 0)
                    label_61cad6:
                        result = 0xffffffff
                    else
                        CheckMenuRadioItem(*(arg1 + 0x80), 0x9c77, 0x9c79, 0x9c78, 0)
                        HKEY hKey_1 = nullptr
                        int32_t var_c_1 = 0
                        void var_38
                        sub_402be0(&var_38, "Software\Alicesoft\Sys43IDE\DPVariable")
                        char eax_40 = sub_6b32e0(&hKey_1, &var_38, 0x80000001)
                        sub_401110(&var_38)
                        int32_t i_2
                        void* ecx_17
                        
                        if (eax_40 == 0)
                            ecx_17 = arg1
                            i_2 = 0x10
                        else
                            sub_402be0(&var_38, "FontSize")
                            char eax_43 = sub_6b3320(&var_38, &hKey_1, &i_1)
                            sub_401110(&var_38)
                            ecx_17 = arg1
                            
                            i_2 = eax_43 == 0 ? 0x10 : i_1
                        
                        sub_61d540(ecx_17, i_2)
                        uint32_t uIDEvent = *(arg1 + 0xcec)
                        
                        if (uIDEvent != 0)
                            KillTimer(*(arg1 + 0xcf0), uIDEvent)
                            *(arg1 + 0xcec) = 0
                        
                        *(arg1 + 0xcf0) = arg2
                        *(arg1 + 0xcec) = SetTimer(arg2, 1, 0x3e8, nullptr)
                        HKEY hKey = hKey_1
                        
                        if (hKey != 0)
                            RegCloseKey(hKey)
                        
                        result = 0
else
label_61cad6_1:
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
