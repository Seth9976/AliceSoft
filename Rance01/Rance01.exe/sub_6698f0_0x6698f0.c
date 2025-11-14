// 函数: sub_6698f0
// 地址: 0x6698f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7252a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = data_78c474 ^ &var_70
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t* ebp = nullptr
int32_t* var_64 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** var_58 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4 = 0
char result = 0
int32_t edi_2 = (arg1[1] - *arg1) s>> 2
int32_t edx = 0
char result_1 = 0
int32_t var_5c = 0
int32_t var_60 = edi_2

if (edi_2 s> 0)
    while (true)
        char* esi_1 = *(*arg1 + (edx << 2))
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        sub_401180(&var_48, 0xffffffff, &esi_1[0xc], 0)
        var_4.b = 1
        
        if (*esi_1 != 0)
            int32_t edi_5 = (var_54 - ebp) s/ 0x1c
            
            if (edi_5 s> 0)
                void* ebp_1 = &ebp[4]
                
                while (true)
                    int32_t* ecx_4 = var_48.d
                    
                    if (var_34_1 u< 0x10)
                        ecx_4 = &var_48
                    
                    int32_t esi_2 = *ebp_1
                    int32_t eax_7 = var_38_1
                    
                    if (esi_2 u< eax_7)
                        eax_7 = esi_2
                    
                    void* edx_5
                    
                    if (*(ebp_1 + 4) u< 0x10)
                        edx_5 = ebp_1 - 0x10
                    else
                        edx_5 = *(ebp_1 - 0x10)
                    
                    int32_t eax_8 = sub_402320(eax_7, edx_5, ecx_4, eax_7)
                    bool cond:0_1 = eax_8 == 0
                    
                    if (eax_8 == 0)
                        if (esi_2 u>= var_38_1)
                            int32_t ecx_5
                            ecx_5.b = esi_2 != var_38_1
                            eax_8 = ecx_5
                        else
                            eax_8 = 0xffffffff
                        
                        cond:0_1 = eax_8 == 0
                    
                    eax_8.b = cond:0_1
                    
                    if (eax_8.b != 0)
                        break
                    
                    ebx += 1
                    ebp_1 += 0x1c
                    
                    if (ebx s>= edi_5)
                        goto label_669a5a
            
            if (edi_5 s<= 0 || ebx s>= edi_5)
            label_669a5a:
                sub_405220(&var_48, &var_58)
            else
                char* eax_12 = var_48.d
                
                if (var_34_1 u< 0x10)
                    eax_12 = &var_48
                
                char* var_88_8 = eax_12
                char* eax_13 = sub_4104a0(0x7306a4)
                var_4.b = 2
                
                if (*(eax_13 + 0x14) u>= 0x10)
                    eax_13 = *eax_13
                
                sub_40da60(eax_13)
                var_4.b = 1
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_2c
                    int32_t var_88_10 = var_2c
                    sub_6b4d5b()
                
                result_1 = 1
            
            if (*(esi_1 + 8) == 4)
                result_1 |= sub_669ba0(&esi_1[0x4c])
            
            if (*(esi_1 + 8) == 6)
                result_1 |= sub_669dc0(*(esi_1 + 0x7c))
            
            var_4.b = 0
            
            if (var_34_1 u>= 0x10)
                int32_t var_88_5 = var_48.d
                sub_6b4d5b()
            
            edi_2 = var_60
            ebp = var_58
        else
            var_4.b = 0
            
            if (var_34_1 u>= 0x10)
                int32_t var_88_1 = var_48.d
                sub_6b4d5b()
        
        edx = var_5c + 1
        var_5c = edx
        
        if (edx s>= edi_2)
            break
        
        arg1 = var_64
        ebx = 0
    
    if (ebp != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = var_58
        int32_t* esi_3 = ebp
        
        if (ebx_1 != var_54)
            do
                if (esi_3[5] u>= 0x10)
                    int32_t var_88_6 = *esi_3
                    sub_6b4d5b()
                
                esi_3[5] = 0xf
                esi_3[4] = 0
                *esi_3 = 0
                esi_3 = &esi_3[7]
            while (esi_3 != var_54)
        
        struct _EXCEPTION_REGISTRATION_RECORD** var_88_7 = ebx_1
        sub_6b4d5b()
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_70)
return result
