// 函数: sub_544120
// 地址: 0x544120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg4 + 0x2b0) -= 4
int32_t eax_6 = **(arg4 + 0x2b0)
char** var_30_1
char** ecx_3

if (eax_6 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
    ecx_3 = *(*(arg4 + 0x1e4) + (eax_6 << 2))
    var_30_1 = ecx_3

char result

if (eax_6 u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2 && ecx_3 != 0)
    int32_t var_18_1 = 0xf
    char* var_1c_1 = nullptr
    char var_2c = 0
    int32_t var_4 = 0
    char* edx_2
    
    if (ecx_3[1] != 0)
        edx_2 = *ecx_3
    else
        edx_2 = nullptr
    
    char* eax_7 = edx_2
    
    do
        ecx_3.b = *eax_7
        eax_7 = &eax_7[1]
    while (ecx_3.b != 0)
    
    sub_401270(&var_2c, eax_7 - &eax_7[1], edx_2)
    char* edx_3 = var_1c_1
    
    if (edx_3 != 0)
        int32_t ecx_5 = 0
        int32_t eax_9 = 0
        
        if (edx_3 u> 0)
            char* edi_2 = var_2c.d
            
            do
                ecx_5 = eax_9
                char* edx_4 = edi_2
                
                if (var_18_1 u< 0x10)
                    edx_4 = &var_2c
                
                if (edx_4[eax_9] u>= 0x81)
                    edx_3 = edi_2
                    
                    if (var_18_1 u< 0x10)
                        edx_3 = &var_2c
                
                if (edx_4[eax_9] u>= 0x81 && edx_3[eax_9] u<= 0x9f)
                    eax_9 += 2
                else
                    edx_3 = edi_2
                    
                    if (var_18_1 u< 0x10)
                        edx_3 = &var_2c
                    
                    if (edx_3[eax_9] u< 0xe0)
                        eax_9 += 1
                    else
                        eax_9 += 2
            while (eax_9 u< var_1c_1)
        
        sub_401350(0xffffffff, edx_3, ecx_5, &var_2c)
    
    if (sub_550660(var_30_1, &var_2c) != 0)
        if (var_18_1 u>= 0x10)
            int32_t var_4c_4 = var_2c.d
            sub_6b4d5b()
        
        result = 1
    else
        int32_t entry_ebx
        result = sub_53d0e0(arg4, 0x74eb94, eax_4, arg3, arg2, arg1, entry_ebx)
        
        if (var_18_1 u>= 0x10)
            int32_t var_4c_3 = var_2c.d
            sub_6b4d5b()
else
    result = sub_53d0e0(arg4, 0x74eb5c, eax_6, eax_4, arg3, arg2, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
