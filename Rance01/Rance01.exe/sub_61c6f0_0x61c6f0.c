// 函数: sub_61c6f0
// 地址: 0x61c6f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND phkResult
int32_t eax_2 = data_78c474 ^ &phkResult
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t eax_6 = (**(arg1 - 0xb0))(data_78c474 ^ &__saved_edi)
BOOL eax_9

if (eax_6 != 0)
    eax_9 = IsWindow((**(arg1 - 0xb0))())

HWND hKey

if (eax_6 == 0 || eax_9 == 0)
    if (sub_622920(arg1 + 0xba8).b == 0)
        hKey.b = 0
    else
        sub_401270(arg1 - 0x90, 0xc, 0x73434c)
        sub_401270(arg1 - 0xac, 0xf, "DPVariableClass")
        HICON eax_13 = LoadIconA(*(arg1 + 8), 0x80)
        HINSTANCE hInstance = *(arg1 + 8)
        *(arg1 - 0x60) = eax_13
        *(arg1 - 0x58) = 0
        *(arg1 - 0x30) = LoadMenuA(hInstance, 0x7f)
        *(arg1 - 0x34) = 0
        *(arg1 - 0x48) = 0x2cf0000
        *(arg1 - 0x14) = 0x400
        *(arg1 - 0x10) = 0x300
        phkResult = nullptr
        int32_t var_4 = 0
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_401270(&var_2c, 0x26, "Software\Alicesoft\Sys42IDE\DPVariable")
        HWND hKey_1 = phkResult
        
        if (hKey_1 != 0)
            RegCloseKey(hKey_1)
            phkResult = nullptr
        
        char* lpSubKey = var_2c.d
        
        if (var_18_1 u< 0x10)
            lpSubKey = &var_2c
        
        bool var_35_1 = RegOpenKeyExA(0x80000001, lpSubKey, 0, KEY_READ, &phkResult) == NO_ERROR
        
        if (var_18_1 u>= 0x10)
            int32_t var_54_6 = var_2c.d
            sub_6b4d5b()
        
        if (var_35_1 != 0)
            int32_t var_34 = 0x400
            int32_t var_30 = 0x300
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            sub_401270(&var_2c, 7, "WindowX")
            sub_6b3320(&var_2c, &phkResult, arg1 - 0x44)
            
            if (var_18_2 u>= 0x10)
                int32_t var_54_8 = var_2c.d
                sub_6b4d5b()
            
            int32_t var_18_3 = 0xf
            int32_t var_1c_3 = 0
            var_2c = 0
            sub_401270(&var_2c, 7, "WindowY")
            sub_6b3320(&var_2c, &phkResult, arg1 - 0x40)
            
            if (var_18_3 u>= 0x10)
                int32_t var_54_10 = var_2c.d
                sub_6b4d5b()
            
            int32_t var_18_4 = 0xf
            int32_t var_1c_4 = 0
            var_2c = 0
            sub_401270(&var_2c, 0xb, "WindowWidth")
            sub_6b3320(&var_2c, &phkResult, &var_34)
            
            if (var_18_4 u>= 0x10)
                int32_t var_54_12 = var_2c.d
                sub_6b4d5b()
            
            int32_t var_18_5 = 0xf
            int32_t var_1c_5 = 0
            var_2c = 0
            sub_401270(&var_2c, 0xc, "WindowHeight")
            sub_6b3320(&var_2c, &phkResult, &var_30)
            
            if (var_18_5 u>= 0x10)
                int32_t var_54_14 = var_2c.d
                sub_6b4d5b()
            
            int32_t eax_22 = var_30
            *(arg1 - 0x14) = var_34
            *(arg1 - 0x10) = eax_22
        
        if (sub_6181c0(arg1 - 0xb0, *(arg1 + 8)) != 0)
            sub_62ae50(arg1 - 0xb0)
            ShowWindow(*(arg1 - 0x28), SW_SHOW)
            UpdateWindow(*(arg1 - 0x28))
            SetForegroundWindow(*(arg1 - 0x28))
            hKey = phkResult
            
            if (hKey != 0)
                RegCloseKey(hKey)
            
            hKey.b = 1
        else
            hKey = phkResult
            
            if (hKey != 0)
                RegCloseKey(hKey)
            
            hKey.b = 0
else
    SetActiveWindow((**(arg1 - 0xb0))())
    hKey.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &phkResult)
return hKey
