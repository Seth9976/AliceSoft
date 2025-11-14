// 函数: sub_61dd70
// 地址: 0x61dd70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d490
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
int128_t* ecx = *(ebx + 0xb8)
int128_t* esi = *(ebx + 0xb4)
void* var_50 = ebx

if (esi != ecx)
    int32_t edi_1 = 0 s>> 2 << 2
    int32_t __saved_edi
    sub_6b49d0(esi, ecx, edi_1, data_78c474 ^ &__saved_edi)
    *(ebx + 0xb8) = edi_1 + esi

int32_t ebp = 0
*(ebx + 0x88) = 0
HKEY phkResult = nullptr
int32_t var_4 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0x26, "Software\Alicesoft\Sys42IDE\DPVariable")
HKEY hKey = phkResult

if (hKey != 0)
    RegCloseKey(hKey)
    phkResult = nullptr

char* lpSubKey = var_48.d

if (var_34 u< 0x10)
    lpSubKey = &var_48

bool var_55 = RegCreateKeyExA(0x80000001, lpSubKey, 0, nullptr, REG_OPTION_RESERVED, 
    KEY_ALL_ACCESS, nullptr, &phkResult, nullptr) == NO_ERROR

if (var_34 u>= 0x10)
    int32_t var_70_3 = var_48.d
    sub_6b4d5b()

if (var_55 != 0)
    void* eax_9 = *(ebx + 0xb0)
    
    if ((*(eax_9 + 0x58) - *(eax_9 + 0x54)) s/ 0x1c s> 0)
        while (true)
            void* eax_14 = *(ebx + 0xb0)
            int32_t ecx_2
            
            if (ebp s< 0 || ebp s> (*(eax_14 + 0x68) - *(eax_14 + 0x64)) s>> 2)
                ecx_2.b = 0
            else
                ecx_2.b = *(*(eax_14 + 0x64) + (ebp << 2)) == 1
            
            int32_t data_1
            data_1.b = ecx_2.b != 0
            int32_t var_2c
            char* eax_15 = sub_625230(eax_14, &var_2c, ebp)
            var_4.b = 1
            int128_t* ecx_5
            
            if (*(eax_15 + 0x14) u< 0x10)
                ecx_5 = eax_15
            else
                ecx_5 = *eax_15
            
            char* eax_16 = ecx_5
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            char i
            
            do
                i = *eax_16
                eax_16 = &eax_16[1]
            while (i != 0)
            sub_401270(&var_48, eax_16 - &eax_16[1], ecx_5)
            HKEY hKey_2 = phkResult
            int32_t data = data_1
            
            if (hKey_2 != 0)
                char* lpValueName = var_48.d
                
                if (var_34_1 u< 0x10)
                    lpValueName = &var_48
                
                RegSetValueExA(hKey_2, lpValueName, 0, REG_DWORD, &data, 4)
            
            if (var_34_1 u>= 0x10)
                int32_t var_70_6 = var_48.d
                sub_6b4d5b()
            
            var_4.b = 0
            int32_t var_34_2 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_70_7 = var_2c
                sub_6b4d5b()
            
            void* eax_19 = *(var_50 + 0xb0)
            ebp += 1
            
            if (ebp s>= (*(eax_19 + 0x58) - *(eax_19 + 0x54)) s/ 0x1c)
                break
            
            ebx = var_50

HKEY hKey_1 = phkResult

if (hKey_1 != 0)
    RegCloseKey(hKey_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return 0
