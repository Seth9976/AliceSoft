// 函数: sub_623650
// 地址: 0x623650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(**(arg1 + 4) + 8)
result_1 = 0
int32_t edi = 0
int32_t result

if ((*(**(arg1 + 8) + 8))((*(**(arg1 + 4) + 0x18))(edx(eax_4))) s<= 0)
    result = 0
else
    int32_t eax_34
    
    do
        int32_t var_18_1 = 0xf
        int32_t result_2 = 0
        char var_2c = 0
        int32_t var_4 = 0
        int32_t* eax_14 = (*(**(arg1 + 4) + 4))((*(**(arg1 + 4) + 8))())
        
        if (eax_14 != 0 && edi s>= 0)
            int32_t eax_17
            int32_t edx_6
            edx_6:eax_17 = sx.q((*(*eax_14 + 0x14))())
            
            if (edi s< (eax_17 + (edx_6 & 3)) s>> 2)
                float ebp_2 = *((*(*eax_14 + 0x18))() + (edi << 2))
                sub_622f00(
                    (*(**(arg1 + 8) + 0xc))((*(**(arg1 + 4) + 0x18))((*(**(arg1 + 4) + 8))()), 
                        edi), 
                    arg1, ebp_2, &var_2c)
        
        if (result_1 s< result_2)
            result_1 = result_2
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_44_6 = var_2c.d
            sub_6b4d5b()
        
        int32_t edx_14 = *(**(arg1 + 4) + 8)
        int32_t var_18_2 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        edi += 1
        eax_34 = (*(**(arg1 + 8) + 8))((*(**(arg1 + 4) + 0x18))(edx_14()))
    while (edi s< eax_34)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
