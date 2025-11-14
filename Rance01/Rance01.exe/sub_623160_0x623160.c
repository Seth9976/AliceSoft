// 函数: sub_623160
// 地址: 0x623160
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
int32_t edx = ***(arg1 + 4)
result_1 = 0
int32_t ebp = 0
int32_t result

if (edx(eax_4) s<= 0)
    result = 0
else
    int32_t eax_22
    
    do
        int32_t var_18_1 = 0xf
        int32_t result_2 = 0
        char var_2c = 0
        int32_t var_4 = 0
        int32_t* eax_7 = *(arg1 + 4)
        void* edi_1 = *eax_7
        int32_t eax_9 = (*(*eax_7 + 0x20))()
        *(arg1 + 4)
        int32_t* eax_10 = (*(edi_1 + 4))(eax_9)
        
        if (eax_10 != 0 && ebp s>= 0)
            int32_t eax_13
            int32_t edx_4
            edx_4:eax_13 = sx.q((*(*eax_10 + 0x14))())
            
            if (ebp s< (eax_13 + (edx_4 & 3)) s>> 2)
                float edi_3 = *((*(*eax_10 + 0x18))() + (ebp << 2))
                sub_622f00((*(**(arg1 + 8) + 0x18))(ebp), arg1, edi_3, &var_2c)
        
        if (result_1 s< result_2)
            result_1 = result_2
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_44_4 = var_2c.d
            sub_6b4d5b()
        
        int32_t edx_10 = ***(arg1 + 4)
        int32_t var_18_2 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        ebp += 1
        eax_22 = edx_10()
    while (ebp s< eax_22)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
