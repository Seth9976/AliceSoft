// 函数: sub_605d50
// 地址: 0x605d50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71daf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = arg1 - 8
int32_t result
int32_t edx

if (sub_605c80(arg1 - 8, edx, arg1) != 0)
    if (sub_6144e0(arg1 + 0x120, arg2, *(arg1 + 0xa0)) == 0)
        result = 0xffffffff
    else if (sub_6144e0(arg1 + 0x1d4, *(arg1 + 0x1a8), *(arg1 + 0xa0)) == 0)
        result = 0xffffffff
    else
        HINSTANCE edx_2 = *(arg1 + 0xa0)
        *(arg1 + 0x1c8) = *(arg1 + 0x25c)
        
        if (sub_614cf0(arg1 + 0x288, *(arg1 + 0x1a8), edx_2) == 0)
            result = 0xffffffff
        else if (sub_617a90(arg1 + 0x8e0, *(arg1 + 0x310), *(arg1 + 0xa0), 0x9c7a) == 0)
            result = 0xffffffff
        else
            SendMessageA(*(arg1 + 0x97c), 0x1109, 0, *(arg1 + 0xa58))
            
            if (sub_617a90(arg1 + 0x994, *(arg1 + 0x310), *(arg1 + 0xa0), 0x9c7b) == 0)
                result = 0xffffffff
            else
                SendMessageA(*(arg1 + 0xa30), 0x1109, 0, *(arg1 + 0xa58))
                
                if (sub_60d260(arg1 + 0x44c, *(arg1 + 0x310)) == 0)
                    result = 0xffffffff
                else
                    HWND edi_1 = *(arg1 + 0x310)
                    (*(*(arg1 + 0x53c) + 0x88))(eax_4)
                    
                    if (sub_615f00(arg1 + 0x53c, edi_1) == 0)
                        result = 0xffffffff
                    else if (sub_610f40(arg1 + 0x620, *(arg1 + 0x25c)) == 0)
                        result = 0xffffffff
                    else
                        HINSTANCE ecx_6 = *(arg1 + 0xa0)
                        int32_t edi_2 = *(arg1 + 0x25c)
                        (*(*(arg1 + 0x7e0) + 0x88))()
                        *(arg1 + 0x85c) = edi_2
                        
                        if (sub_6181c0(arg1 + 0x7e0, ecx_6) == 0)
                            result = 0xffffffff
                        else if (sub_616f20(arg1 + 0x8c4, arg2) == 0)
                            result = 0xffffffff
                        else
                            HWND eax_33 = CreateStatusWindowA(0x50000103, 0x72d833, arg2, 0x9c9d)
                            *(arg1 + 0x8dc) = eax_33
                            
                            if (eax_33 == 0)
                                result = 0xffffffff
                            else
                                sub_615a70(0x735378, arg1 + 0x288, *(arg1 + 0x4d4))
                                sub_615a70(0x735380, arg1 + 0x288, *(arg1 + 0x968))
                                sub_615a70(0x735388, arg1 + 0x288, *(arg1 + 0xa1c))
                                sub_615a70(0x735390, arg1 + 0x288, *(arg1 + 0x5c4))
                                int32_t ecx_9 = *(arg1 + 0x868)
                                void* esi_4 = var_4c
                                *(arg1 + 0x1c4) = *(arg1 + 0x310)
                                int32_t eax_39 = *(arg1 + 0x6a8)
                                *(arg1 + 0x278) = eax_39
                                *(arg1 + 0x27c) = ecx_9
                                data_797db8 = eax_39
                                HMENU hMenu = *(esi_4 + 0x88)
                                
                                if (hMenu != 0)
                                    EnableMenuItem(hMenu, 0x9c64, MF_BYCOMMAND)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c64, 1)
                                HMENU hMenu_1 = *(esi_4 + 0x88)
                                
                                if (hMenu_1 != 0)
                                    EnableMenuItem(hMenu_1, 0x9c65, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c65, 0)
                                HMENU hMenu_2 = *(esi_4 + 0x88)
                                
                                if (hMenu_2 != 0)
                                    EnableMenuItem(hMenu_2, 0x9c66, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c66, 0)
                                HMENU hMenu_3 = *(esi_4 + 0x88)
                                
                                if (hMenu_3 != 0)
                                    EnableMenuItem(hMenu_3, 0x9c67, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c67, 0)
                                HMENU hMenu_4 = *(esi_4 + 0x88)
                                
                                if (hMenu_4 != 0)
                                    EnableMenuItem(hMenu_4, 0x9c69, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c69, 0)
                                HMENU hMenu_5 = *(esi_4 + 0x88)
                                
                                if (hMenu_5 != 0)
                                    EnableMenuItem(hMenu_5, 0x9c6b, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c6b, 0)
                                HMENU hMenu_6 = *(esi_4 + 0x88)
                                
                                if (hMenu_6 != 0)
                                    EnableMenuItem(hMenu_6, 0x9c6d, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c6d, 0)
                                HMENU hMenu_7 = *(esi_4 + 0x88)
                                
                                if (hMenu_7 != 0)
                                    EnableMenuItem(hMenu_7, 0x9c6f, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c6f, 0)
                                HMENU hMenu_8 = *(esi_4 + 0x88)
                                
                                if (hMenu_8 != 0)
                                    EnableMenuItem(hMenu_8, 0x9c71, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c71, 0)
                                HMENU hMenu_9 = *(esi_4 + 0x88)
                                
                                if (hMenu_9 != 0)
                                    EnableMenuItem(hMenu_9, 0x9c73, 0x3)
                                
                                SendMessageA(*(esi_4 + 0x8cc), 0x401, 0x9c73, 0)
                                *(arg1 + 0xaa0) = SetTimer(arg2, 1, 0x1f4, nullptr)
                                SetFocus(*(arg1 + 0x6a8))
                                CheckMenuRadioItem(*(arg1 + 0x80), 0x9c77, 0x9c79, 0x9c78, 0)
                                HKEY hKey_1 = nullptr
                                int32_t var_c_1 = 0
                                void var_38
                                sub_402be0(&var_38, "Software\Alicesoft\Sys42IDE\DPAnalysis")
                                void* ebx
                                ebx.b = sub_6b32e0(&hKey_1, &var_38, 0x80000001)
                                sub_401110(&var_38)
                                void* var_64_12
                                int32_t var_60_15
                                
                                if (ebx.b == 0)
                                    var_60_15 = 0x10
                                    var_64_12 = var_4c
                                else
                                    sub_402be0(&var_38, "FontSize")
                                    int32_t var_40
                                    ebx.b = sub_6b3320(&var_38, &hKey_1, &var_40)
                                    sub_401110(&var_38)
                                    
                                    if (ebx.b == 0)
                                        var_60_15 = 0x10
                                        var_64_12 = var_4c
                                    else
                                        var_60_15 = var_40
                                        var_64_12 = var_4c
                                
                                sub_606d00(var_64_12, var_60_15)
                                HKEY hKey = hKey_1
                                
                                if (hKey != 0)
                                    RegCloseKey(hKey)
                                
                                result = 0
else
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
