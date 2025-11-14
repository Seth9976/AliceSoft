// 函数: sub_55bd50
// 地址: 0x55bd50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg2[9] != 4
void* esi = arg1
var_34 = esi
int32_t* result
int32_t* i

if (not(cond:0))
    result = arg2[1]
    i = *result

if (cond:0 || i == result)
label_55bea4:
    result.b = 1
else
    while (true)
        int32_t edx_1 = *(esi + 0x30)
        result = *(esi + 0x2c)
        int32_t ecx = i[3]
        int32_t ebx_1 = i[4]
        
        if (ecx u< (edx_1 - result) s>> 2 && result != edx_1)
            int32_t edx_2 = *(esi + 0x3c)
            
            if (edx_2 != *(esi + 0x40))
                void* ecx_1 = result[ecx]
                int128_t* ecx_2 = ecx_1 + edx_2
                
                if (ecx_1 != neg.d(edx_2))
                    char* eax_5 = ecx_2
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    
                    do
                        edx_2.b = *eax_5
                        eax_5 = &eax_5[1]
                    while (edx_2.b != 0)
                    
                    sub_401270(&var_2c, eax_5 - &eax_5[1], ecx_2)
                    int32_t var_4 = 0
                    *sub_55bed0(&var_2c, &arg2[4]) = ebx_1
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_4c_3 = var_2c.d
                        sub_6b4d5b()
                    
                    if (*(i + 0x15) == 0)
                        int32_t* i_1 = i[2]
                        
                        if (*(i_1 + 0x15) != 0)
                            result = i[1]
                            
                            if (*(result + 0x15) == 0)
                                while (i == result[2])
                                    i = result
                                    result = result[1]
                                    
                                    if (*(result + 0x15) != 0)
                                        break
                            
                            i = result
                        else
                            i = i_1
                            result = *i
                            
                            while (*(result + 0x15) == 0)
                                i = result
                                result = *i
                    
                    if (i == arg2[1])
                        goto label_55bea4
                    
                    esi = var_34
                    continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
