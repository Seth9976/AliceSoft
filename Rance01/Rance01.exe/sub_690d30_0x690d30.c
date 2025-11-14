// 函数: sub_690d30
// 地址: 0x690d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bdd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_10
int32_t esi = arg_10
struct _EXCEPTION_REGISTRATION_RECORD** result = arg2
void* ebx = arg1
var_58 = ebx

if (result != 0)
    int32_t* var_48
    sub_426250(&var_48, ebx + 0x60, ebx + 0x7c)
    int32_t var_4 = 0
    int32_t eax_6 = sub_695c40(&var_48)
    int32_t arg_c
    int32_t ecx_1 = arg_c
    int32_t var_34
    int32_t var_2c
    int32_t var_18
    
    if (ecx_1 != esi && esi s<= eax_6)
        int32_t* eax_7 = &arg_10
        
        if (esi s>= ecx_1)
            eax_7 = &arg_c
        
        int32_t i_2 = *eax_7
        int32_t* eax_8 = &arg_10
        
        if (ecx_1 s>= esi)
            eax_8 = &arg_c
        
        int32_t ecx_2 = *eax_8
        sub_401270(ebx + 0x60, nullptr, 0x72cf95)
        sub_401270(ebx + 0x7c, nullptr, 0x72cf96)
        void* ebp_2 = nullptr
        int32_t i_4 = 0
        
        if (i_2 s> 0)
            int32_t* edx_1 = var_48
            i_4 = i_2
            int32_t i
            
            do
                int32_t* eax_9 = edx_1
                
                if (var_34 u< 0x10)
                    eax_9 = &var_48
                
                int32_t* eax_10
                
                if (*(eax_9 + ebp_2) u>= 0x81)
                    eax_10 = edx_1
                    
                    if (var_34 u< 0x10)
                        eax_10 = &var_48
                
                int32_t* eax_11
                
                if (*(eax_9 + ebp_2) u< 0x81 || *(eax_10 + ebp_2) u> 0x9f)
                    eax_11 = edx_1
                    
                    if (var_34 u< 0x10)
                        eax_11 = &var_48
                
                if ((*(eax_9 + ebp_2) u>= 0x81 && *(eax_10 + ebp_2) u<= 0x9f)
                        || *(eax_11 + ebp_2) u>= 0xe0)
                    ebp_2 += 1
                
                ebp_2 += 1
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        char* eax_12 = sub_401ec0(&var_48, &var_2c, 0, ebp_2)
        var_4.b = 1
        sub_401ef0(var_58 + 0x60, eax_12)
        var_4.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_70_3 = var_2c
            sub_6b4d5b()
        
        if (i_4 s< ecx_2)
            int32_t* edx_3 = var_48
            int32_t i_3 = ecx_2 - i_4
            int32_t i_1
            
            do
                int32_t* eax_15 = edx_3
                
                if (var_34 u< 0x10)
                    eax_15 = &var_48
                
                int32_t** eax_16
                
                if (*(eax_15 + ebp_2) u>= 0x81)
                    eax_16 = edx_3
                    
                    if (var_34 u< 0x10)
                        eax_16 = &var_48
                
                int32_t* eax_17
                
                if (*(eax_15 + ebp_2) u< 0x81 || *(eax_16 + ebp_2) u> 0x9f)
                    eax_17 = edx_3
                    
                    if (var_34 u< 0x10)
                        eax_17 = &var_48
                
                if ((*(eax_15 + ebp_2) u>= 0x81 && *(eax_16 + ebp_2) u<= 0x9f)
                        || *(eax_17 + ebp_2) u>= 0xe0)
                    ebp_2 += 1
                
                ebp_2 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        int32_t var_38
        char* eax_20 = sub_401ec0(&var_48, &var_2c, ebp_2, var_38 - ebp_2)
        var_4.b = 2
        sub_401ef0(var_58 + 0x7c, eax_20)
        var_4.b = 0
        
        if (var_18 u>= 0x10)
            int32_t var_70_5 = var_2c
            sub_6b4d5b()
        
        ebx = var_58
    
    int32_t* eax_23 = sub_426250(&var_2c, ebx + 0x60, ebx + 0x7c)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
    var_4.b = 3
    int32_t edx_4 = eax_23[4]
    int32_t* ecx_9
    
    if (eax_23[5] u< 0x10)
        ecx_9 = eax_23
    else
        ecx_9 = *eax_23
    
    int32_t ebp_3 = result_2[0x1a]
    int32_t eax_24 = ebp_3
    
    if (ebp_3 u>= edx_4)
        eax_24 = edx_4
    
    int32_t* edx_5
    
    if (result_2[0x1b] u< 0x10)
        edx_5 = &result_2[0x16]
    else
        edx_5 = result_2[0x16]
    
    if (sub_402320(eax_24, edx_5, ecx_9, eax_24) != 0)
    label_690f8b:
        sub_401180(&result_2[0x16], 0xffffffff, eax_23, 0)
        result = sub_68d800(result_2, result_2[0x1d])
        result_2[0x3d].b = 1
    else
        int32_t eax_26 = eax_23[4]
        
        if (ebp_3 u< eax_26)
            goto label_690f8b
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        result_1.b = ebp_3 != eax_26
        result = result_1
        
        if (result != 0)
            goto label_690f8b
    
    if (var_18 u>= 0x10)
        int32_t var_70_9 = var_2c
        result = sub_6b4d5b()
    
    *(ebx + 0x50) = 0xffffffff
    
    if (var_34 u>= 0x10)
        int32_t* var_70_10 = var_48
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
