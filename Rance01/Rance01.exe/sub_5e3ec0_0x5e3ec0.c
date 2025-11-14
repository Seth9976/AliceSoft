// 函数: sub_5e3ec0
// 地址: 0x5e3ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720340
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp

if (arg2[5] u< 0x10)
    ebp = arg2
else
    ebp = *arg2

void* result = arg2[4] + ebp
void* result_1 = result

if (ebp u< result)
    do
        result.b = *ebp
        char i
        
        if ((result.b u< 0x81 || result.b u> 0x9f) && result.b u< 0xe0)
            var_58 = result.b
            char* eax_11 = &var_58
            char var_57 = 0
            ebp += 1
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            
            do
                i = *eax_11
                eax_11 = &eax_11[1]
            while (i != 0)
            
            sub_401270(&var_48, eax_11 - &var_57, &var_58)
            int32_t var_4_2 = 1
            result = sub_405220(&var_48, arg1)
            int32_t var_4_3 = 0xffffffff
            
            if (var_34_1 u>= 0x10)
                int32_t var_70_4 = var_48.d
                result = sub_6b4d5b()
            
            int32_t var_34_2 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
        else
            i = *(ebp + 1)
            char var_54 = result.b
            char* eax_8 = &var_54
            char i_1 = i
            char var_52_1 = 0
            ebp += 2
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            
            do
                i = *eax_8
                eax_8 = &eax_8[1]
            while (i != 0)
            
            sub_401270(&var_2c, eax_8 - &i_1, &var_54)
            int32_t var_4 = 0
            result = sub_405220(&var_2c, arg1)
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                int32_t var_70_2 = var_2c.d
                result = sub_6b4d5b()
    while (ebp u< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
