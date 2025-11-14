// 函数: sub_632110
// 地址: 0x632110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int128_t* var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
bool cond:0 = ebx[8] != 0
var_5c = arg2
int32_t* result

if (cond:0)
    char* eax_5 = arg2
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    char var_54 = 0
    
    do
        arg1.b = *eax_5
        eax_5 = &eax_5[1]
    while (arg1.b != 0)
    
    sub_401270(&var_54, eax_5 - &eax_5[1], arg2)
    int32_t var_c_1 = 0
    int32_t var_c_2 = 0xffffffff
    int32_t* result_2 = sub_631700(ebx[8], &var_54)
    
    if (var_40_1 u>= 0x10)
        int32_t var_70_3 = var_54.d
        sub_6b4d5b()
    
    if (result_2 != 0)
        result = result_2
    else
        int128_t* esi_2 = var_5c
        int32_t* result_1 = (**ebx)(esi_2)
        
        if (result_1 != 0)
            sub_402be0(&var_54, esi_2)
            int32_t var_c_3 = 1
            sub_631790(ebx[8], &var_54, result_1)
            
            if (var_40_1 u>= 0x10)
                int32_t var_70_6 = var_54.d
                sub_6b4d5b()
            
            result = result_1
        else if (ebx[5] == 0)
            result = nullptr
        else
            int32_t* eax_12 = (*(*ebx[4] + 0x10))(2)
            
            if ((*(*eax_12 + 0xc))(esi_2) == 0)
                result = nullptr
            else
                int32_t* eax_16 = (*(*eax_12 + 8))(esi_2)
                
                if (eax_16 == 0)
                    result = nullptr
                else
                    void* esi_3 = *ebx[5]
                    int32_t eax_21 = (*(*eax_16 + 0x18))((*(*eax_16 + 0x14))(eax_4))
                    ebx[5]
                    result_2 = (*(esi_3 + 8))(eax_21)
                    (*(*eax_16 + 4))()
                    
                    if (result_2 == 0)
                        result = nullptr
                    else
                        void var_38
                        sub_402be0(&var_38, var_5c)
                        int32_t var_c_4 = 2
                        sub_631790(ebx[8], &var_38, result_2)
                        sub_401110(&var_38)
                        result = result_2
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
