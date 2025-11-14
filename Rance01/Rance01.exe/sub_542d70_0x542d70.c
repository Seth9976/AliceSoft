// 函数: sub_542d70
// 地址: 0x542d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t edi
int32_t var_58 = edi
int32_t var_5c = data_78c474 ^ &var_58
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
var_4.b = 1
int32_t result

if (sub_54d120(0xf, arg1, edi, arg1, &var_2c, "S_GT").b != 0)
    if (sub_54d120(0xf, arg1, edi, arg1, &var_48, "S_GT").b != 0)
        char* ecx_3 = var_2c.d
        
        if (var_18 u< 0x10)
            ecx_3 = &var_2c
        
        char* eax_5 = var_48.d
        
        if (var_34 u< 0x10)
            eax_5 = &var_48
        
        while (true)
            char edx_2 = *eax_5
            char temp0_1 = *ecx_3
            bool c_1 = edx_2 u< temp0_1
            
            if (edx_2 == temp0_1)
                if (edx_2 == 0)
                    result = 0
                    break
                
                edx_2 = eax_5[1]
                char temp3_1 = ecx_3[1]
                c_1 = edx_2 u< temp3_1
                
                if (edx_2 == temp3_1)
                    eax_5 = &eax_5[2]
                    ecx_3 = &ecx_3[2]
                    
                    if (edx_2 != 0)
                        continue
                    
                    result = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            result = sbb.d(sbb.d(eax_5, eax_5, c_1), 0xffffffff, c_2)
            break
        
        int32_t ecx_4
        ecx_4.b = result == 1
        **(arg1 + 0x2b0) = ecx_4
        *(arg1 + 0x2b0) += 4
        
        if (var_34 u>= 0x10)
            int32_t var_60_5 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_3 = 0xf
        int32_t var_38_3 = 0
        var_48 = 0
        
        if (var_18 u>= 0x10)
            int32_t var_60_6 = var_2c.d
            sub_6b4d5b()
        
        result.b = 1
    else
        if (var_34 u>= 0x10)
            int32_t var_60_3 = var_48.d
            sub_6b4d5b()
        
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        
        if (var_18 u< 0x10)
            result.b = 0
        else
            int32_t var_60_4 = var_2c.d
            sub_6b4d5b()
            result.b = 0
else
    if (var_34 u>= 0x10)
        int32_t var_60_1 = var_48.d
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_18 u>= 0x10)
        int32_t var_60_2 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
