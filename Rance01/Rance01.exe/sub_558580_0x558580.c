// 函数: sub_558580
// 地址: 0x558580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg2[1]
int32_t* ecx = arg2[3]
var_30 = arg1

if (result s< &ecx[1])
    result.b = 0
else
    if (result != 0)
        result = *arg2
    
    int32_t ebp_1 = *(ecx + result)
    arg2[3] = &ecx[1]
    int32_t esi_1
    
    if (ebp_1 s> 0)
        sub_4bc7e0(ebp_1, &ecx[1], ecx, arg1)
        esi_1 = 0
    
    if (ebp_1 s<= 0 || ebp_1 s<= 0)
    label_558650:
        result.b = 1
    else
        int32_t edi_1 = 0
        
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            
            if (sub_5568e0(arg2, &var_2c).b == 0)
                if (var_18_1 u>= 0x10)
                    int32_t var_48_3 = var_2c.d
                    sub_6b4d5b()
                
                break
            
            sub_401180(*var_30 + edi_1, 0xffffffff, &var_2c, 0)
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                int32_t var_48_2 = var_2c.d
                sub_6b4d5b()
            
            esi_1 += 1
            edi_1 += 0x1c
            
            if (esi_1 s>= ebp_1)
                goto label_558650
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
