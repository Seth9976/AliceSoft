// 函数: sub_42c960
// 地址: 0x42c960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711e90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t edi_2 = (arg4 - arg3) s>> 2

if (edi_2 != 0)
    int32_t* eax_4 = arg1[1]
    int32_t edx_1 = *arg1
    int32_t ecx_2 = (eax_4 - edx_1) s>> 2
    
    if (0x3fffffff - ecx_2 u< edi_2)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    int32_t ebx_2 = ecx_2 + edi_2
    int32_t ecx_5 = (arg1[2] - edx_1) s>> 2
    
    if (ecx_5 u< ebx_2)
        uint32_t eax_6 = ecx_5 u>> 1
        int32_t var_18
        int32_t ecx_6
        
        if (0x3fffffff - eax_6 u>= ecx_5)
            ecx_6 = ecx_5 + eax_6
            var_18 = ecx_6
        else
            var_18 = 0
            ecx_6 = 0
        
        if (ecx_6 u< ebx_2)
            var_18 = ebx_2
            ecx_6 = ebx_2
        
        int128_t* eax_7 = sub_65a1c0(ecx_6)
        int32_t var_8_1 = 0
        int128_t* ecx_7 = *arg1
        int32_t ebx_3 = (arg2 - ecx_7) s>> 2 << 2
        int32_t* var_3c = arg4
        int32_t* var_40 = arg4
        int32_t var_44 = arg3
        sub_6b49d0(sub_59ceb0(sub_6b49d0(eax_7, ecx_7, ebx_3) + ebx_3, arg4, arg3), arg2, 
            ((arg1[1] - arg2) s>> 2) * 4)
        int32_t eax_14 = *arg1
        int32_t edi_3 = edi_2 + ((arg1[1] - eax_14) s>> 2)
        
        if (eax_14 != 0)
            int32_t var_30_3 = eax_14
            sub_6b4d5b()
        
        arg1[2] = eax_7 + (var_18 << 2)
        arg1[1] = eax_7 + (edi_3 << 2)
        *arg1 = eax_7
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    int32_t* var_30_4 = arg4
    int32_t* var_34_3 = arg4
    int32_t var_38_3 = arg3
    sub_59ceb0(eax_4, arg4, arg3)
    eax_3 = arg1[1]
    int32_t* edx_13 = arg2
    void* ecx_19 = &eax_3[edi_2]
    
    if (edx_13 != eax_3 && eax_3 != ecx_19)
        void* var_30_5 = ecx_19
        int32_t* var_34_4 = edx_13
        eax_3 = sub_4dd6c0(eax_3, edx_13, ecx_19)
    
    arg1[1] += edi_2 * 4

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
