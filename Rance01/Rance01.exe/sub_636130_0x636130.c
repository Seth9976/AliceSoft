// 函数: sub_636130
// 地址: 0x636130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x70) - *(arg1 + 0x6c))
int32_t edx_1 = edx s>> 2
int32_t i_2 = (edx_1 u>> 0x1f) + edx_1
result_1 = 0
int32_t result

if (i_2 s<= 0)
    result = 0
else
    void* ebx_1 = nullptr
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t ecx_2 = *(arg1 + 0x6c)
        
        if (*(ebx_1 + ecx_2 + 4) == 0)
            int32_t var_6c_1 = *(ebx_1 + ecx_2)
            sub_4104a0("%10d")
            int32_t var_4 = 0
            int32_t var_38_1 = 0
            int32_t var_34_1 = 0xf
            char var_48 = 0
            sub_401270(&var_48, nullptr, 0x72d7d6)
            var_4.b = 1
            void* var_2c
            int32_t result_2 = sub_636490(&var_2c, arg2, &var_48)
            var_4.b = 0
            
            if (var_34_1 u>= 0x10)
                int32_t var_6c_3 = var_48.d
                sub_6b4d5b()
            
            if (result_1 s<= result_2)
                result_1 = result_2
            
            var_4.b = 2
            sub_401ef0(&var_2c, sub_61fce0(&var_48, " - ", &var_2c))
            var_4.b = 0
            
            if (var_34_1 u>= 0x10)
                int32_t var_6c_5 = var_48.d
                sub_6b4d5b()
            
            int32_t edx_4 = *(arg1 + 0x6c)
            int32_t esi_6 = (*(ebx_1 + edx_4 + 0xc) - *(ebx_1 + edx_4 + 8)) s>> 2
            int32_t var_34_2 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
            
            if (esi_6 s> 0)
                int32_t edi_2 = 0
                
                do
                    int32_t result_3 =
                        sub_636310(&var_2c, *(*(*(arg1 + 0x6c) + ebx_1 + 8) + (edi_2 << 2)), arg2)
                    
                    if (result_1 s<= result_3)
                        result_1 = result_3
                    
                    edi_2 += 1
                while (edi_2 s< esi_6)
            
            int32_t var_4_1 = 0xffffffff
            int32_t var_18
            
            if (var_18 u>= 0x10)
                void* var_6c_7 = var_2c
                sub_6b4d5b()
        
        ebx_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
