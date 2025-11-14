// 函数: sub_61d920
// 地址: 0x61d920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d4d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x58) = GetStockObject(GRAY_BRUSH)
*(arg1 + 0x68) = 0x52000000
*(arg1 + 0x7c) = arg3
*(arg1 + 0xb0) = arg4
sub_401270(arg1 + 4, 0x1d, "DPVariable__CCheckBoxWindow__")
HWND hKey

if (sub_6181c0(arg1, arg2).b == 0)
    hKey.b = 0
else
    *(arg1 + 0xb0) = arg4
    HKEY phkResult = nullptr
    int32_t var_4 = 0
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_401270(&var_48, 0x26, "Software\Alicesoft\Sys42IDE\DPVariable")
    HKEY hKey_1 = phkResult
    
    if (hKey_1 != 0)
        RegCloseKey(hKey_1)
        phkResult = nullptr
    
    char* lpSubKey = var_48.d
    
    if (var_34_1 u< 0x10)
        lpSubKey = &var_48
    
    enum WIN32_ERROR eax_7
    eax_7.b = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
    
    if (var_34_1 u>= 0x10)
        int32_t var_78_3 = var_48.d
        sub_6b4d5b()
    
    if (eax_7.b != 0)
        void* eax_8 = *(arg1 + 0xb0)
        int32_t i = 0
        
        if ((*(eax_8 + 0x58) - *(eax_8 + 0x54)) s/ 0x1c s> 0)
            int32_t X = 0
            void* eax_25
            
            do
                void* eax_13 = *(arg1 + 0xb0)
                int32_t data = 1
                int32_t var_2c
                char* eax_14 = sub_625230(eax_13, &var_2c, i)
                var_4.b = 1
                char* edx_5
                
                if (*(eax_14 + 0x14) u< 0x10)
                    edx_5 = eax_14
                else
                    edx_5 = *eax_14
                
                char* eax_15 = edx_5
                int32_t var_34_2 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
                char j
                
                do
                    j = *eax_15
                    eax_15 = &eax_15[1]
                while (j != 0)
                sub_401270(&var_48, eax_15 - &eax_15[1], edx_5)
                HKEY hKey_2 = phkResult
                uint32_t lpcbData
                
                if (hKey_2 != 0)
                    enum REG_VALUE_TYPE type = REG_DWORD
                    lpcbData = 4
                    PSTR lpValueName = var_48.d
                    
                    if (var_34_2 u< 0x10)
                        lpValueName = &var_48
                    
                    hKey_2.b =
                        RegQueryValueExA(hKey_2, lpValueName, nullptr, &type, &data, &lpcbData) == 0
                else
                    hKey_2.b = 0
                
                bool var_5d_1 = hKey_2.b == 0
                
                if (var_34_2 u>= 0x10)
                    int32_t var_78_8 = var_48.d
                    sub_6b4d5b()
                
                var_4.b = 0
                int32_t var_34_3 = 0xf
                int32_t var_38_3 = 0
                var_48 = 0
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_78_9 = var_2c
                    sub_6b4d5b()
                
                if (var_5d_1 != 0)
                    data = 1
                
                bool cond:0_1 = data != 0
                void* eax_18 = *(arg1 + 0xb0)
                
                if (i s>= 0 && i s<= (*(eax_18 + 0x68) - *(eax_18 + 0x64)) s>> 2)
                    int32_t edx_9
                    edx_9.b = cond:0_1 != 0
                    *(*(eax_18 + 0x64) + (i << 2)) = edx_9
                    sub_624ee0(eax_18, nullptr)
                
                char* lpWindowName = sub_625230(*(arg1 + 0xb0), &var_2c, i)
                
                if (*(lpWindowName + 0x14) u>= 0x10)
                    lpWindowName = *lpWindowName
                
                HWND hWnd = CreateWindowExA(WS_EX_LEFT, "BUTTON", lpWindowName, 0x50000002, X, 0, 
                    0x96, 0x14, *(arg1 + 0x88), i + 0x190, *(arg1 + 0x84), nullptr)
                lpcbData = hWnd
                
                if (var_18 u>= 0x10)
                    int32_t var_78_11 = var_2c
                    sub_6b4d5b()
                
                WPARAM wParam
                wParam.b = cond:0_1 != 0
                SendMessageA(hWnd, 0xf1, wParam, 0)
                int32_t eax_20 = *(arg1 + 0xb8)
                int32_t ecx_8
                
                if (&lpcbData u< eax_20)
                    ecx_8 = *(arg1 + 0xb4)
                
                if (&lpcbData u>= eax_20 || ecx_8 u> &lpcbData)
                    if (eax_20 == *(arg1 + 0xbc))
                        sub_4307a0(arg1 + 0xb4)
                    
                    struct HWND__** eax_24 = *(arg1 + 0xb8)
                    
                    if (eax_24 != 0)
                        *eax_24 = hWnd
                else
                    if (eax_20 == *(arg1 + 0xbc))
                        sub_4307a0(arg1 + 0xb4)
                    
                    int32_t* eax_22 = *(arg1 + 0xb8)
                    
                    if (eax_22 != 0)
                        *eax_22 = *(*(arg1 + 0xb4) + ((&lpcbData - ecx_8) s>> 2 << 2))
                
                *(arg1 + 0xb8) += 4
                eax_25 = *(arg1 + 0xb0)
                X += 0x96
                i += 1
            while (i s< (*(eax_25 + 0x58) - *(eax_25 + 0x54)) s/ 0x1c)
        
        hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
        
        hKey.b = 1
    else
        hKey = phkResult
        
        if (hKey != 0)
            RegCloseKey(hKey)
        
        hKey.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return hKey
