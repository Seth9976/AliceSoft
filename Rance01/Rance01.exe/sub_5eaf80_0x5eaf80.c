// 函数: sub_5eaf80
// 地址: 0x5eaf80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *(arg1 + 0x3c)

if (ecx s> 0)
    result = *(arg1 + 8)
    
    if (result != *(arg1 + 0xc))
        if (*(arg1 + 0x48) == 0)
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(arg2 + *(arg1 + 0x4c))
            result = divs.dp.d(edx_1:eax_7, ecx)
            bool cond:0_1 = *(arg1 + 0x40) == 0
            *(arg1 + 0x4c) = mods.dp.d(edx_1:eax_7, ecx)
            
            if (cond:0_1)
                int32_t eax_16
                int32_t edx_6
                edx_6:eax_16 = sx.q(*(arg1 + 0x50) + result)
                int32_t edi_3 = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
                result = divs.dp.d(edx_6:eax_16, edi_3)
                *(arg1 + 0x50) = mods.dp.d(edx_6:eax_16, edi_3)
            else if (result s> 0)
                int32_t temp1_2 = mods.dp.d(sx.q(*(arg1 + 0x44) + result), *(arg1 + 0x38))
                void* eax_11 = arg1 + 0x18
                *(arg1 + 0x44) = temp1_2
                
                if (*(eax_11 + 0x14) u>= 0x10)
                    eax_11 = *eax_11
                
                int32_t var_3c_1 = *(arg1 + 0x34) + temp1_2
                char* eax_12 = sub_4104a0(eax_11)
                int32_t var_4 = 0
                sub_5e7890(**(arg1 + 8), eax_12)
                result = sub_401110(&var_2c)
            
            *(arg1 + 0x6c) = 1
        else
            *(arg1 + 0x48) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
