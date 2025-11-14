// 函数: sub_52e150
// 地址: 0x52e150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ad8a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg3
int32_t ebx_2 = (arg4 - edi) s/ 0x38
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(ebx_2)
int32_t result = eax_7 - edx_3
int32_t i = result s>> 1
var_50 = edi

if (i s> 0)
    int32_t* esi_1 = edi + i * 0x38 + 0x20
    
    do
        esi_1 -= 0x38
        i -= 1
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        sub_401180(&var_48, 0xffffffff, &esi_1[-8], 0)
        int32_t var_4 = 0
        int32_t var_2c_1 = esi_1[-1]
        int32_t* var_28
        sub_52dfc0(&var_28, esi_1)
        int32_t var_18_1 = esi_1[4]
        int32_t var_14_1 = esi_1[5]
        int32_t var_4_1 = 1
        sub_52e880(edi, i, ebx_2, &var_48, arg5)
        int32_t var_4_2 = 2
        int32_t* eax_11 = var_28
        int32_t var_24
        
        if (eax_11 != 0)
            int32_t* edi_1 = eax_11
            
            if (eax_11 != var_24)
                do
                    (**edi_1)(0)
                    edi_1 = &edi_1[4]
                while (edi_1 != var_24)
                
                eax_11 = var_28
            
            int32_t* var_68_3 = eax_11
            sub_6b4d5b()
            edi = var_50
        
        result = 0
        int32_t var_4_3 = 0xffffffff
        var_28 = nullptr
        var_24 = 0
        int32_t var_20_1 = 0
        
        if (var_34_1 u>= 0x10)
            int32_t var_68_4 = var_48.d
            result = sub_6b4d5b()
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
