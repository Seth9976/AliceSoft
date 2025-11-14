// 函数: sub_508580
// 地址: 0x508580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723ec8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*arg1 == 0 || arg1[1] == 0)
    result = 1
else
    int32_t __saved_edi
    int32_t ecx_2
    result, ecx_2 = (*(*arg1[1] + 0xc))(data_78c474 ^ &__saved_edi)
    
    if (result == 0)
        result = 1
    else if (sub_508dc0(ecx_2, arg1) == 0)
        result = 0
    else
        int32_t* var_20 = nullptr
        int128_t* var_1c_1 = nullptr
        int32_t var_18_1 = 0
        int32_t var_4 = 0
        int32_t* ecx_4 = sub_4cb2b0(&arg1[0x41], &var_20)
        int32_t* edi_1 = var_20
        
        if (edi_1 != var_1c_1)
            ecx_4 = sub_4b8c00(var_1c_1, edi_1, nullptr)
        
        int32_t* var_3c_2 = arg1
        sub_5086c0(ecx_4)
        
        if (sub_509680(arg1) != 0)
            arg1[0x3a] = arg1[0x3f]
            int32_t ecx_5 = *arg1
            arg1[0x3b] = *(ecx_5 + 0x15c)
            
            if (sub_509910(ecx_5, arg1) == 0)
                sub_4b8b70(&var_20)
                result = 0
            else if (sub_5088e0(arg1) == 0)
                sub_4b8b70(&var_20)
                result = 0
            else
                char eax_8
                int80_t st0_1
                st0_1, eax_8 = sub_508e00(arg1, &var_20)
                
                if (eax_8 == 0)
                    sub_4b8b70(&var_20)
                    result = 0
                else
                    int32_t** var_3c_5 = &var_20
                    char eax_9
                    int80_t st0_2
                    st0_2, eax_9 = sub_508930(arg1)
                    
                    if (eax_9 == 0)
                        sub_4b8b70(&var_20)
                        result = 0
                    else
                        (*(*arg1[1] + 0x74))()
                        sub_4b8b70(&var_20)
                        result = 1
        else
            sub_51ddc0(0x7544cc)
            sub_4b8b70(&var_20)
            result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
