// 函数: sub_586680
// 地址: 0x586680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *arg1 = 0

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t eax_5 = (*(*arg2 + 0x30))(eax_2)
*arg1 = eax_5

if (eax_5 != 0)
    int32_t var_28 = 0
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    int32_t var_c_1 = 0
    int32_t var_2c = 0
    int32_t* edi_1 = &var_28
    sub_61b5a0(&var_2c, edi_1)
    var_2c = 4
    sub_61b5a0(&var_2c, edi_1)
    var_2c = 6
    sub_61b5a0(&var_2c, edi_1)
    int32_t edi_2 = var_28
    
    if ((*(**arg1 + 8))(arg3, edi_2, (var_24_1 - edi_2) s>> 2, 1).b != 0)
        arg1[3] = arg3 - 2
        int32_t eax_13
        int32_t edx_8
        edx_8:eax_13 = sx.q(arg3)
        arg1[1] = arg3
        arg1[2] = arg3 s/ 3
        arg1[4] = (eax_13 - edx_8) s>> 1
        
        if (edi_2 != 0)
            int32_t var_40_2 = edi_2
            sub_6b4d5b()
        
        int32_t eax_15
        eax_15.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15
    
    if (edi_2 != 0)
        int32_t var_40_1 = edi_2
        sub_6b4d5b()

eax_5.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
