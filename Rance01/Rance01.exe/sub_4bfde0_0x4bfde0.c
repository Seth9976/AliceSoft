// 函数: sub_4bfde0
// 地址: 0x4bfde0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x3c) != 0)
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(eax_4)
        *(arg1 + 0xc) = 0
    
    int32_t* ecx_2 = *(arg1 + 8)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_4)
        *(arg1 + 8) = 0
    
    int32_t var_44_1 = arg2
    int32_t var_4 = 0
    int32_t var_4_1 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD** edi_2 =
        sub_50b730(*(arg1 + 0x3c), sub_4104a0("CG\CG%05d.png"))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        char var_2c
        int32_t var_44_3 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c_1 = 0
    *(arg1 + 8) = edi_2
    
    if (edi_2 == 0)
        result.b = 0
    else
        char eax_10 = (*edi_2)->__offset(0x28).d(eax_4)
        
        if (sub_4bfef0(arg1, *(arg1 + 8)).b == 0)
            result.b = 0
        else
            *(arg1 + 0x10) = eax_10
            *(arg1 + 0x11) = 0
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
