// 函数: sub_4b3f30
// 地址: 0x4b3f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4b40e0(arg1)
char result

if (*(arg1 + 0x60) != 0)
    if (sub_50a8a0(&arg1[4], 0, arg2, arg3, 1, 1, arg5) != 0)
        if (sub_50a8a0(&arg1[0x1c], 0, arg2, arg3, 1, 1, arg5) != 0)
            long double x87_r7_1 = float.t(1)
            float var_48_3 = fconvert.s(x87_r7_1)
            long double x87_r7_4 = float.t(0)
            
            if (sub_519f30(arg5, &arg1[0x34], fconvert.s(x87_r7_4), fconvert.s(x87_r7_4), 
                    fconvert.s(float.t(arg2)), fconvert.s(float.t(arg3)), -nanf, 
                    fconvert.s(x87_r7_1)) == 0)
                result = 0
            else
                *arg1 = arg6
                *(arg1 + 0x58) = arg4
                void* const eax_9 = &data_756640
                
                if (arg6 == 0)
                    eax_9 = &data_72da07
                
                void* const var_48_4 = eax_9
                int32_t var_4c_2 = arg4
                sub_4104a0("ps_shadeoff%d%s.fx")
                int32_t var_48_5 = 0x14
                int32_t var_4 = 0
                void var_2c
                int32_t* eax_10 = sub_513af0(&var_2c)
                int32_t* ecx_6 = *(arg1 + 0x5c)
                
                if (ecx_6 != 0)
                    (*(*ecx_6 + 4))(eax_4)
                    *(arg1 + 0x5c) = 0
                
                int32_t* eax_12 = sub_511f10(*(arg1 + 0x60), eax_10)
                *(arg1 + 0x5c) = eax_12
                
                if (eax_12 != 0)
                    sub_401110(&var_2c)
                    result = 1
                else
                    sub_51ddc0(0x756658)
                    sub_401110(&var_2c)
                    result = 0
        else
            sub_51ddc0("CBlurBuffer::Create()\n")
            result = 0
    else
        sub_51ddc0("CBlurBuffer::Create()\n")
        result = 0
else
    sub_51ddc0("CBlurBuffer::Create()\n")
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
