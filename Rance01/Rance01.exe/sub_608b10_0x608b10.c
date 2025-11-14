// 函数: sub_608b10
// 地址: 0x608b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719500
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
fsbase->NtTib.ExceptionList = &ExceptionList
HWND result = arg1

if (result != 0)
    int32_t __saved_edi
    result = (**result)(data_78c474 ^ &__saved_edi)
    HWND hWnd = result
    
    if (result != 0)
        int32_t edi_1 = data_78f500
        result = data_797dc4
        WPARAM wParam = result
        
        if (edi_1 s>= 0)
            int32_t ecx_3 = data_797e10 - data_797e0c
            int32_t edx_2
            edx_2:result = muls.dp.d(0x92492493, ecx_3)
            
            if (edi_1 s< ecx_3 s/ 0x1c)
                int32_t* var_48
                sub_61ac30(&var_48, edi_1)
                int32_t var_4 = 0
                int32_t var_38
                
                if (var_38 != 0)
                    var_5c = 0
                    int128_t* var_58_1 = nullptr
                    int32_t var_54_1 = 0
                    var_4.b = 1
                    void var_2c
                    sub_402be0(&var_2c, "Sys4xOpenSourceFile")
                    bool cond:0_1 = sub_6b30f0(&var_5c, &var_2c, var_38 + 1) == 0
                    sub_401110(&var_2c)
                    
                    if (cond:0_1 == 0)
                        int32_t* eax_8 = var_48
                        int32_t var_34
                        
                        if (var_34 u< 0x10)
                            eax_8 = &var_48
                        
                        sub_6c02a0(var_58_1, eax_8, var_38 + 1)
                        SendMessageA(hWnd, 0x401, wParam, 0)
                    
                    sub_6b30c0(&var_5c)
                
                result = sub_401110(&var_48)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
