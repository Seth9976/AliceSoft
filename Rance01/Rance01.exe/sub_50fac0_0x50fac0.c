// 函数: sub_50fac0
// 地址: 0x50fac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_711690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* ebx_1 = arg4 - arg3

if (arg4 != arg3)
    int32_t edx_1 = *arg1
    char* eax_4 = arg1[1]
    
    if (edx_1 - eax_4 - 1 u< ebx_1)
        sub_6b47bf("vector<T> too long")
        noreturn
    
    void* edi_3 = eax_4 - edx_1 + ebx_1
    int32_t ecx_4 = arg1[2] - edx_1
    
    if (ecx_4 u< edi_3)
        uint32_t eax_6 = ecx_4 u>> 1
        void* var_18
        void* ecx_5
        
        if (0xffffffff - eax_6 u>= ecx_4)
            ecx_5 = ecx_4 + eax_6
            var_18 = ecx_5
        else
            var_18 = nullptr
            ecx_5 = nullptr
        
        if (ecx_5 u< edi_3)
            var_18 = edi_3
            ecx_5 = edi_3
        
        int128_t* eax_7 = sub_4015e0(ecx_5)
        int32_t var_8_1 = 0
        int128_t* ecx_6 = *arg1
        void* edi_5 = arg2 - ecx_6
        char* var_3c = arg4
        char* var_40 = arg4
        int32_t var_44 = arg3
        sub_6b49d0(sub_50fc30(sub_6b49d0(eax_7, ecx_6, edi_5) + edi_5, arg4, arg3), arg2, 
            arg1[1] - arg2)
        int32_t eax_11 = *arg1
        void* ebx_2 = ebx_1 + arg1[1] - eax_11
        
        if (eax_11 != 0)
            int32_t var_30_3 = eax_11
            sub_6b4d5b()
        
        arg1[2] = var_18 + eax_7
        arg1[1] = eax_7 + ebx_2
        *arg1 = eax_7
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    char* var_30_4 = arg4
    char* var_34_3 = arg4
    int32_t var_38_3 = arg3
    int32_t edx_9 = sub_50fc30(eax_4, arg4, arg3)
    eax_3 = arg1[1]
    int32_t edi_6 = eax_3 + ebx_1
    
    if (arg2 != eax_3 && eax_3 != edi_6)
        int128_t* var_30_5 = arg2
        eax_3 = sub_4103e0(eax_3, edi_6, edx_9)
    
    arg1[1] += ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
