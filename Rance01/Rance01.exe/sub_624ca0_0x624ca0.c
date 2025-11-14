// 函数: sub_624ca0
// 地址: 0x624ca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_54 = arg1
int32_t edi = arg4 * 3
int32_t esi = (*(**(arg2 + 4) + 4))(arg3)
int32_t result

if (esi == 0 || edi s< 0)
    result.b = 0
else
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q((*(*esi + 0x14))(eax_4))
    
    if (edi s>= (eax_9 + (edx_3 & 3)) s>> 2)
        result.b = 0
    else
        int32_t eax_13 = *((*(*esi + 0x18))() + (edi << 2))
        int32_t esi_1 = (*(**(arg2 + 4) + 4))(arg3)
        
        if (esi_1 == 0 || edi + 1 s< 0)
            result.b = 0
        else
            int32_t eax_17
            int32_t edx_9
            edx_9:eax_17 = sx.q((*(*esi_1 + 0x14))())
            
            if (edi + 1 s>= (eax_17 + (edx_9 & 3)) s>> 2)
                result.b = 0
            else
                int32_t ebx_2 = *((*(*esi_1 + 0x18))() + ((edi + 1) << 2))
                int32_t var_50
                
                if (sub_6246f0(arg2, edi + 2, arg3, &var_50).b == 0)
                    result.b = 0
                else
                    int32_t var_34_1 = 0xf
                    int32_t var_38_1 = 0
                    char var_48 = 0
                    int32_t var_4 = 0
                    int128_t* eax_23 = (***(arg2 + 8))(ebx_2)
                    int128_t* var_6c_4
                    void* edi_2
                    
                    if (eax_23 == 0)
                        var_6c_4 = &data_733fd0
                        edi_2 = 3
                    else
                        char* ecx_8 = eax_23
                        char i
                        
                        do
                            i = *ecx_8
                            ecx_8 = &ecx_8[1]
                        while (i != 0)
                        var_6c_4 = eax_23
                        edi_2 = ecx_8 - &ecx_8[1]
                    
                    sub_401270(&var_48, edi_2, var_6c_4)
                    char* eax_24 = var_48.d
                    
                    if (var_34_1 u< 0x10)
                        eax_24 = &var_48
                    
                    int32_t var_6c_5 = var_50
                    char* var_70_2 = eax_24
                    int32_t var_74_1 = eax_13
                    char* eax_25 = sub_4104a0("%6d <%s> (%d)")
                    var_4.b = 1
                    int128_t* edx_14
                    
                    if (*(eax_25 + 0x14) u< 0x10)
                        edx_14 = eax_25
                    else
                        edx_14 = *eax_25
                    
                    int128_t* eax_26 = edx_14
                    void* esi_4 = eax_26 + 1
                    char i_1
                    
                    do
                        i_1 = *eax_26
                        eax_26 += 1
                    while (i_1 != 0)
                    sub_401270(var_54, eax_26 - esi_4, edx_14)
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        int32_t var_2c
                        int32_t var_6c_7 = var_2c
                        sub_6b4d5b()
                    
                    if (var_34_1 u>= 0x10)
                        int32_t var_6c_8 = var_48.d
                        sub_6b4d5b()
                    
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
