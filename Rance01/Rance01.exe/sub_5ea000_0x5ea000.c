// 函数: sub_5ea000
// 地址: 0x5ea000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725d78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg1
void** var_58 = edi
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_405d70(edi, arg3 + 0x18) == 0 || *(arg3 + 0x34) != arg2 || *(arg3 + 0x38) != arg4
        || *(arg3 + 0x3c) != arg5)
    sub_5e9f90(arg3)
    
    if (edi[5] u>= 0x10)
        edi = *edi
    
    int32_t* var_7c_2 = arg2
    int32_t var_4 = 0
    int32_t eax_8 = sub_5fa0e0(sub_4104a0(edi))
    int32_t var_4_1 = 0xffffffff
    int32_t var_48
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_7c_4 = var_48
        sub_6b4d5b()
    
    char eax_9
    
    if (eax_8 == 4 || eax_8 == 3)
        eax_9 = 1
    else
        eax_9 = 0
    
    *(arg3 + 0x40) = eax_9
    int32_t* var_5c
    
    if (eax_9 == 0)
        void* eax_16 = arg2 + arg4
        var_5c = arg2
        
        if (arg2 s>= eax_16)
            goto label_5ea1a0
        
        int32_t** ebx_3
        
        while (true)
            int32_t** eax_17 = operator new(0x10)
            
            if (eax_17 == 0)
                ebx_3 = nullptr
            else
                int32_t ecx_8 = *(arg3 + 0x58)
                *eax_17 = 0xffffffff
                eax_17[1] = ecx_8
                eax_17[2] = 0
                eax_17[3] = 0
                ebx_3 = eax_17
            
            int32_t* var_7c_9 = var_5c
            int32_t** var_54 = ebx_3
            int32_t var_4_4 = 2
            bool var_5d_2 = sub_5e7890(ebx_3, sub_4104a0(sub_401170(var_58))).b == 0
            int32_t var_4_5 = 0xffffffff
            char var_2c
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_7c_11 = var_2c.d
                sub_6b4d5b()
            
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            
            if (var_5d_2 != 0)
                break
            
            int32_t eax_22 = *(arg3 + 0xc)
            int32_t ecx_9
            
            if (&var_54 u< eax_22)
                ecx_9 = *(arg3 + 8)
            
            if (&var_54 u>= eax_22 || ecx_9 u> &var_54)
                if (eax_22 == *(arg3 + 0x10))
                    sub_4307a0(arg3 + 8)
                
                int32_t*** eax_26 = *(arg3 + 0xc)
                
                if (eax_26 != 0)
                    *eax_26 = ebx_3
            else
                if (eax_22 == *(arg3 + 0x10))
                    sub_4307a0(arg3 + 8)
                
                int32_t* eax_24 = *(arg3 + 0xc)
                
                if (eax_24 != 0)
                    *eax_24 = *(*(arg3 + 8) + ((&var_54 - ecx_9) s>> 2 << 2))
            
            int32_t* eax_27 = var_5c
            *(arg3 + 0xc) += 4
            var_5c = eax_27 + 1
            
            if (eax_27 + 1 s>= eax_16)
                goto label_5ea1a0
        
        if (ebx_3 == 0)
            result.b = 0
        else
            int32_t* edi_3 = *ebx_3
            
            if (edi_3 != 0xffffffff)
                sub_409390(edi_3)
                *ebx_3 = 0xffffffff
            
            int32_t** var_7c_12 = ebx_3
            sub_6b4d5b()
            result.b = 0
    else
        int32_t* eax_10 = operator new(0x10)
        int32_t* ebx_2
        
        if (eax_10 == 0)
            ebx_2 = nullptr
        else
            int32_t ecx_1 = *(arg3 + 0x58)
            *eax_10 = 0xffffffff
            eax_10[1] = ecx_1
            eax_10[2] = 0
            eax_10[3] = 0
            ebx_2 = eax_10
        
        void** eax_11 = var_58
        bool cond:1_1 = eax_11[5] u< 0x10
        var_5c = ebx_2
        
        if (not(cond:1_1))
            eax_11 = *eax_11
        
        int32_t* var_7c_5 = arg2
        int32_t var_4_2 = 1
        bool var_5d_1 = sub_5e7890(ebx_2, sub_4104a0(eax_11)).b == 0
        int32_t var_4_3 = 0xffffffff
        
        if (var_34 u>= 0x10)
            int32_t var_7c_7 = var_48
            sub_6b4d5b()
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48.b = 0
        
        if (var_5d_1 == 0)
            sub_61b5a0(&var_5c, arg3 + 8)
        label_5ea1a0:
            sub_401180(arg3 + 0x18, 0xffffffff, var_58, 0)
            *(arg3 + 0x34) = arg2
            *(arg3 + 0x38) = arg4
            *(arg3 + 0x3c) = arg5
            *(arg3 + 0x44) = 0
            *(arg3 + 0x48) = 1
            *(arg3 + 0x4c) = 0
            *(arg3 + 0x50) = 0
            *(arg3 + 0x6c) = 1
            result.b = 1
        else
            if (ebx_2 != 0)
                int32_t edi_1 = *ebx_2
                
                if (edi_1 != 0xffffffff)
                    sub_409390(edi_1)
                    *ebx_2 = 0xffffffff
                
                int32_t* var_7c_8 = ebx_2
                sub_6b4d5b()
            
            result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
