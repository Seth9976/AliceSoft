// 函数: sub_624b10
// 地址: 0x624b10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t ebx = 0

while (true)
    int32_t* eax_6 = (*(**(arg2 + 4) + 4))(arg1)
    uint32_t eax_7
    
    if (eax_6 != 0)
        eax_7 = (*(*eax_6 + 0x14))(eax_4) u>> 2
    else
        eax_7 = 0
    
    if (ebx s>= eax_7)
        break
    
    int32_t var_18_1 = 0xf
    int32_t result_1 = 0
    char var_2c = 0
    int32_t var_4 = 0
    int32_t* eax_11 = (*(**(arg2 + 4) + 4))(arg1)
    
    if (eax_11 != 0 && ebx s>= 0)
        int32_t eax_14
        int32_t edx_5
        edx_5:eax_14 = sx.q((*(*eax_11 + 0x14))(eax_4))
        
        if (ebx s< (eax_14 + (edx_5 & 3)) s>> 2)
            float ebx_1 = *((*(*eax_11 + 0x18))() + (ebx << 2))
            int32_t var_30
            
            if (sub_6249c0(&var_30, arg2) != 0)
                sub_622f00(var_30, arg2, ebx_1, &var_2c)
    
    if (result s< result_1)
        result = result_1
    
    int32_t var_4_1 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        int32_t var_54_5 = var_2c.d
        sub_6b4d5b()
    
    ebx += 1
    int32_t var_18_2 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
