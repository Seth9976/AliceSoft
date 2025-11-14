// 函数: sub_60ed50
// 地址: 0x60ed50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
SetFocus(arg2)

if (data_797db4 != 0)
    int32_t esi_3 = GetScrollPos(arg2, SB_VERT)
        + divs.dp.d(sx.q(arg3 u>> 0x10), *(arg1 + 0xb8) + *(arg1 + 0xb4))
    *(arg1 + 0xd0) = esi_3
    InvalidateRect(arg2, nullptr, 1)
    UpdateWindow(arg2)
    
    if (esi_3 s>= 0 && esi_3 s< (*(arg1 + 0xc4) - *(arg1 + 0xc0)) s/ 0x38)
        void* eax_13
        int32_t edx_7
        eax_13, edx_7 = sub_60f560(*(arg1 + 0xdc), *(arg1 + 0xc0) + esi_3 * 0x38)
        var_4c = eax_13
        
        if (eax_13 != 0)
            int32_t var_48
            sub_401a00(&var_48, edx_7, eax_13 + 0x5c)
            int32_t var_4 = 0
            BOOL i = 0
            
            if ((data_797e10 - data_797e0c) s/ 0x1c s> 0)
                do
                    var_4.b = 1
                    var_4.b = 0
                    int32_t var_2c
                    int32_t ebx_2
                    ebx_2.b = sub_405d70(&var_48, sub_61ac30(&var_2c, i))
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        int32_t var_64_3 = var_2c
                        sub_6b4d5b()
                    
                    if (ebx_2.b != 0)
                        sub_613d40(*(arg1 + 0xe0), *(var_4c + 0x78), i)
                        break
                    
                    i += 1
                while (i s< (data_797e10 - data_797e0c) s/ 0x1c)
            
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_64_5 = var_48
                sub_6b4d5b()
else
    *(arg1 + 0xd0) = 0xffffffff
    InvalidateRect(arg2, nullptr, 1)
    UpdateWindow(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return 0
