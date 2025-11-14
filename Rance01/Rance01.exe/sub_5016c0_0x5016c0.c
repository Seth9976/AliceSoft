// 函数: sub_5016c0
// 地址: 0x5016c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723f81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_34 = 0
arg1[5] = 0xf
arg1[4] = 0
int32_t* var_30 = arg1
*arg1 = 0
int32_t var_4 = 0
int32_t* eax_5 = *(arg2 + 4)
int32_t* i = *eax_5
var_34 = 1

if (i != eax_5)
    do
        int32_t var_4_1 = 1
        int32_t var_2c
        sub_402000(arg1, sub_500ae0(i[4], &var_2c, 0), 0, 0xffffffff)
        var_4_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_4c_1 = var_2c
            sub_6b4d5b()
        
        if (*(i + 0x15) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x15) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x15) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x15) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x15) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg2 + 4))

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return arg1
