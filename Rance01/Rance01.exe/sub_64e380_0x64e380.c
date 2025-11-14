// 函数: sub_64e380
// 地址: 0x64e380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = data_78c474 ^ &var_38
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (arg1[1] - *arg1) s>> 5
int32_t* var_34 = arg1

if (result s> 0)
    var_38 = 0
    int32_t result_1 = result
    
    while (true)
        int32_t var_2c
        char* eax_9 = sub_66fc20(&var_2c, *arg1 + var_38)
        int32_t edi_1 = arg2[4]
        int32_t* ecx
        
        if (arg2[5] u< 0x10)
            ecx = arg2
        else
            ecx = *arg2
        
        int32_t esi_2 = *(eax_9 + 0x10)
        int32_t edx_1 = esi_2
        
        if (esi_2 u>= edi_1)
            edx_1 = edi_1
        
        if (*(eax_9 + 0x14) u>= 0x10)
            eax_9 = *eax_9
        
        result = sub_402320(eax_9, eax_9, ecx, edx_1)
        bool cond:0_1 = result == 0
        
        if (result == 0)
            if (esi_2 u>= edi_1)
                result.b = esi_2 != edi_1
            else
                result = 0xffffffff
            
            cond:0_1 = result == 0
        
        int32_t var_4 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_50_3 = var_2c
            result = sub_6b4d5b()
        
        if (cond:0_1 != 0)
            result.b = arg3
            *(var_38 + *var_34 + 0x1c) = result.b
        
        var_38 += 0x20
        int32_t result_2 = result_1
        result_1 -= 1
        
        if (result_2 == 1)
            break
        
        arg1 = var_34

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_38)
return result
