// 函数: sub_5b1cf0
// 地址: 0x5b1cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719ce8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 == 0 || arg2 s< 3)
    result = 0xffffffff
else
    char eax_5 = *arg1
    
    if (eax_5 == 0x50 && arg1[1] == 0x4d)
        result = 0
    else if (eax_5 == 0x42 && arg1[1] == 0x4d)
        result = 1
    else if (eax_5 == 0x51 && arg1[1] == 0x4e && arg1[2] == 0x54)
        result = 2
    else if (eax_5 == 0x41 && arg1[1] == 0x4a && arg1[2] == 0x50)
        result = 4
    else if (arg2 s<= 0xa || eax_5 != 0xff)
    label_5b1db5:
        int32_t eax_8
        
        if (arg2 s> 8)
            eax_8 = 0
            int32_t var_18 = 0x474e5089
            int32_t var_14_1 = 0xa1a0a0d
            
            while (true)
                int32_t ecx_1
                ecx_1.b = *(&var_18 + arg1 - &var_18 + eax_8)
                
                if (ecx_1.b != *(&var_18 + eax_8))
                    break
                
                eax_8 += 1
                
                if (eax_8 s>= 8)
                    result = 5
                    goto label_5b1e46
        
        if (arg2 s> 8 && eax_8 s>= 8)
            result = 5
        else if (arg1[arg2 - 1] != 0 || arg2 s< 0x12)
            result = 0xffffffff
        else
            sub_402be0(&var_34, &arg1[arg2 - 0x12])
            void* edi_1 = &var_34
            int32_t var_4 = 0
            char eax_10 = sub_402680("TRUEVISION-TARGA", edi_1)
            char eax_11
            
            if (eax_10 == 0)
                eax_11 = sub_402680("TRUEVISION-XFILE.", edi_1)
            
            if (eax_10 != 0 || eax_11 != 0)
                sub_401110(&var_34)
                result = 6
            else
                sub_401110(&var_34)
                result = 0xffffffff
    else
        if (sub_5b1e80(arg1) == 0)
            goto label_5b1db5
        
        result = 3

label_5b1e46:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
