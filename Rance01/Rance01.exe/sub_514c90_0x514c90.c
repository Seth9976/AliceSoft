// 函数: sub_514c90
// 地址: 0x514c90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x9d]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x9d] = 0

int32_t* ecx_1 = arg1[0x9c]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x9c] = 0

void* eax_6 = (*(**arg1 + 0x30))(eax_2)
arg1[0x9c] = eax_6

if (eax_6 != 0)
    int32_t ebx_2 = arg1[0x9e] + 1
    int32_t var_1c = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    int32_t var_20 = 1
    sub_61b5a0(&var_20, &var_1c)
    int32_t edi_2 = var_1c
    
    if ((*(*arg1[0x9c] + 8))(ebx_2, edi_2, (var_18_1 - edi_2) s>> 2, 1).b != 0
            && sub_514df0(arg1).b != 0)
        int32_t* eax_11 = (*(**arg1 + 0x20))()
        arg1[0x9d] = eax_11
        char eax_13
        
        if (eax_11 != 0)
            eax_13 = (*(*eax_11 + 8))(arg1[0x9e] * 3, 0)
        
        int32_t* esi_1
        
        if (eax_11 == 0 || eax_13 == 0)
            esi_1 = &var_1c
        else
            esi_1 = &var_1c
            
            if (sub_514f30(arg1) != 0)
                sub_65ab60(esi_1)
                int32_t eax_15
                eax_15.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_15
        
        sub_65ab60(esi_1)
        int32_t eax_12
        eax_12.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    if (edi_2 != 0)
        int32_t var_38_1 = edi_2
        sub_6b4d5b()

eax_6.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
