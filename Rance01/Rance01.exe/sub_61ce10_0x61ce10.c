// 函数: sub_61ce10
// 地址: 0x61ce10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71d548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_5 = zx.d(arg3)

if (eax_5 s> 0x9c89)
    if (eax_5 - 0x9c8a u<= 0x88)
        switch (&lookup_table_613394[0x2a + eax_5])
            case &lookup_table_61d048
                int32_t* ecx_1 = *(arg1 + 0xc58)
                
                if (ecx_1 != 0)
                    (*(*ecx_1 + 8))(eax_4)
                
                SendMessageA(*(arg1 + 0xb28), 0x401, 0x9c8a, 0)
                SendMessageA(*(arg1 + 0xb28), 0x401, 0x9c8b, 1)
            case &lookup_table_61d048[1]
                int32_t* ecx_3 = *(arg1 + 0xc58)
                
                if (ecx_3 != 0)
                    (*(*ecx_3 + 4))(eax_4)
                
                SendMessageA(*(arg1 + 0xb28), 0x401, 0x9c8a, 1)
                SendMessageA(*(arg1 + 0xb28), 0x401, 0x9c8b, 0)
            case &lookup_table_61d048[2]
                sub_6210d0(arg1 + 0x1a0, 1)
                *(arg1 + 0x7f9) = *(arg1 + 0x7f9) == 0
                sub_629b60(arg1 + 0x680)
            case &lookup_table_61d048[0x88]
                int32_t var_24_1 = 0xf
                int32_t var_28_1 = 0
                var_38 = 0
                int32_t var_c_1 = 0
                PSTR lpText
                PSTR lpCaption
                
                if (sub_625250(arg1 + 0xc58, &var_38) != 0)
                    int32_t var_48_6 = 0
                    lpCaption = "DPVariable"
                    lpText = 0x73443c
                else
                    PSTR lpText_1 = var_38.d
                    
                    if (var_24_1 u< 0x10)
                        lpText_1 = &var_38
                    
                    int32_t var_48_5 = 0
                    lpCaption = "DPVariable"
                    lpText = lpText_1
                
                MessageBoxA(arg2, lpText, lpCaption, MB_OK)
                sub_401110(&var_38)
else if (eax_5 == 0x9c89)
    sub_61d870(arg1, arg2)
else
    if (eax_5 == 0x9c78)
        sub_61d540(arg1, 0x10)
        InvalidateRect(arg2, nullptr, 1)
    else if (eax_5 == 0x9c79)
        sub_61d540(arg1, 0xc)
        InvalidateRect(arg2, nullptr, 1)
    
    if (eax_5 == 0x9c77)
        sub_61d540(arg1, 0x14)
        InvalidateRect(arg2, nullptr, 1)
    else if (eax_5 == 0x190)
        sub_6210d0(arg1 + 0x1a0, 1)
        sub_629b60(arg1 + 0x680)
    else if (eax_5 == 0x9c43)
        DestroyWindow(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return 0
