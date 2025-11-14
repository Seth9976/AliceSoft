// 函数: sub_5fd0b0
// 地址: 0x5fd0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727ea3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* ebx = arg_8
int32_t* ebp = operator new(0x54)
arg_8 = ebp
int32_t var_4 = 0

if (ebp == 0)
    ebp = nullptr
else
    __builtin_memcpy(ebp, arg1 + 8, 0x38)
    ebp[0x12] = 0
    ebp[0x13] = 0xf
    ebp[0xe].b = 0
    sub_401180(&ebp[0xe], 0xffffffff, ebx, 0)

int32_t var_4_1 = 0xffffffff
arg_8 = ebp
void* ebp_1 = arg1
void* esi_3 = *(ebp_1 + 0x40)
int32_t* eax_4 = sub_576850(esi_3, *(esi_3 + 4), &arg_8)
int32_t ecx_3 = *(ebp_1 + 0x44)

if (0x3ffffffe - ecx_3 u< 1)
    sub_6b47bf("list<T> too long")
    noreturn

*(ebp_1 + 0x44) = ecx_3 + 1
*(esi_3 + 4) = eax_4
*eax_4[1] = eax_4
struct _EXCEPTION_REGISTRATION_RECORD** var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4_2 = 1
sub_5fd800(ebx, ebp_1, &var_1c)
struct _EXCEPTION_REGISTRATION_RECORD** esi_4 = var_1c
void* ecx_8 = var_18 - esi_4
int32_t result
void* edx_1
edx_1:result = muls.dp.d(0x92492493, ecx_8)
int32_t ebx_3 = ecx_8 s/ 0x1c
int32_t result_1 = 0

if (ebx_3 s> 0)
    void* ecx_9 = ebp_1 + 8
    void* edi_2 = ebp_1 + 0x6c
    struct _EXCEPTION_REGISTRATION_RECORD** var_28_1 = esi_4
    
    do
        int32_t* eax_5 = operator new(0x84)
        int32_t* ebp_2
        
        if (eax_5 == 0)
            ebp_2 = nullptr
        else
            sub_5fa500(eax_5, *(ebp_1 + 0x7c), *(ebp_1 + 0x80))
            ebp_2 = eax_5
        
        int32_t ecx_10 = *(arg1 + 0x38)
        arg_8 = ebp_2
        sub_5fade0(ecx_9, ebp_2, ecx_10)
        sub_5fa6b0(ebp_2, var_28_1)
        int32_t eax_7 = *(edi_2 + 4)
        int32_t edx_6
        
        if (&arg_8 u< eax_7)
            edx_6 = *edi_2
        
        if (&arg_8 u>= eax_7 || edx_6 u> &arg_8)
            int32_t ecx_18 = *(edi_2 + 8)
            
            if (eax_7 == ecx_18)
                int32_t edx_10 = *edi_2
                int32_t eax_13 = (eax_7 - edx_10) s>> 2
                
                if (eax_13 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_20 = (ecx_18 - edx_10) s>> 2
                
                if (eax_13 + 1 u> ecx_20)
                    uint32_t edx_12 = ecx_20 u>> 1
                    int32_t ecx_21
                    
                    if (0x3fffffff - edx_12 u>= ecx_20)
                        ecx_21 = ecx_20 + edx_12
                    else
                        ecx_21 = 0
                    
                    if (ecx_21 u< eax_13 + 1)
                        ecx_21 = eax_13 + 1
                    
                    sub_6b0560(edi_2, ecx_21)
            
            int32_t** eax_15 = *(edi_2 + 4)
            
            if (eax_15 != 0)
                *eax_15 = ebp_2
        else
            int32_t ecx_13 = *(edi_2 + 8)
            
            if (eax_7 == ecx_13)
                int32_t eax_9 = (eax_7 - edx_6) s>> 2
                
                if (eax_9 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_15 = (ecx_13 - edx_6) s>> 2
                
                if (eax_9 + 1 u> ecx_15)
                    uint32_t edx_8 = ecx_15 u>> 1
                    int32_t ecx_16
                    
                    if (0x3fffffff - edx_8 u>= ecx_15)
                        ecx_16 = ecx_15 + edx_8
                    else
                        ecx_16 = 0
                    
                    if (ecx_16 u< eax_9 + 1)
                        ecx_16 = eax_9 + 1
                    
                    sub_6b0560(edi_2, ecx_16)
            
            int32_t* eax_11 = *(edi_2 + 4)
            
            if (eax_11 != 0)
                *eax_11 = *(*edi_2 + ((&arg_8 - edx_6) s>> 2 << 2))
        
        *(edi_2 + 4) += 4
        var_28_1 = &var_28_1[7]
        ebp_1 = arg1
        result = result_1 + 1
        result_1 = result
    while (result s< ebx_3)
    
    esi_4 = var_1c

*(ebp_1 + 0x95) = 1

if (esi_4 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** ebp_5 = var_1c
    
    if (ebp_5 != var_18)
        do
            if (esi_4[5] u>= 0x10)
                struct _EXCEPTION_REGISTRATION_RECORD* var_40_6 = *esi_4
                sub_6b4d5b()
            
            esi_4[5] = 0xf
            esi_4[4] = 0
            *esi_4 = nullptr
            esi_4 = &esi_4[7]
        while (esi_4 != var_18)
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_40_7 = ebp_5
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
