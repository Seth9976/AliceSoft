// 函数: sub_66b290
// 地址: 0x66b290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_44 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_4 = 0
sub_66acd0(arg3, &var_44)
int32_t* ebx = var_44
int128_t* result

if (ebx != var_40)
    int32_t var_48 = 0
    
    if (sub_66a180(arg2, &var_48, ebx).b != 0)
        int32_t eax_8 = *arg2
        int32_t ecx = var_48
        void* eax_9
        
        if ((arg2[1] - eax_8) s>> 2 s>= ecx)
            eax_9 = *(eax_8 + (ecx << 2) - 4)
        
        if ((arg2[1] - eax_8) s>> 2 s>= ecx && eax_9 != 0 && *(eax_9 + 8) == 6)
            int32_t* ebp_1 = *(eax_9 + 0x7c)
            sub_66b4d0(&var_44, &var_48, ebx)
            int32_t edi_3 = 0
            result = (ebp_1[9] - ebp_1[8]) s>> 2
            int32_t var_30
            int32_t ecx_1
            int32_t* esi_3
            
            if (result s> 0)
                while (true)
                    esi_3 = var_44
                    ecx_1 = var_40
                    
                    if (esi_3 == ecx_1)
                        break
                    
                    if (edi_3 s>= 0 && result s> edi_3)
                        int32_t* ebx_1 = *(ebp_1[8] + (edi_3 << 2))
                        
                        if (ebx_1 != 0)
                            var_4.b = 1
                            char eax_13 = sub_405d70(sub_66fc20(&var_30, ebx_1), var_44)
                            var_4.b = 0
                            sub_401110(&var_30)
                            
                            if (eax_13 != 0)
                                ebp_1 = ebx_1
                                sub_66b4d0(&var_44, &var_48, var_44)
                                edi_3 = 0xffffffff
                    
                    edi_3 += 1
                    result = (ebp_1[9] - ebp_1[8]) s>> 2
                    
                    if (edi_3 s>= result)
                        goto label_66b3f9
                
                goto label_66b40f
            
        label_66b3f9:
            esi_3 = var_44
            ecx_1 = var_40
            
            if (esi_3 == ecx_1)
            label_66b40f:
                int32_t edi_4 = 0
                int32_t ebx_4 = (ebp_1[9] - ebp_1[8]) s>> 2
                
                if (ebx_4 s> 0)
                    do
                        if (edi_4 s>= 0 && (ebp_1[9] - ebp_1[8]) s>> 2 s> edi_4)
                            result = *(ebp_1[8] + (edi_4 << 2))
                            
                            if (result != 0 && *(result + 0x1c) != 0)
                                var_4.b = 2
                                sub_405150(sub_66fc20(&var_30, result), arg1)
                                var_4.b = 0
                                int32_t var_1c
                                
                                if (var_1c u>= 0x10)
                                    int32_t var_64_9 = var_30
                                    sub_6b4d5b()
                        
                        edi_4 += 1
                    while (edi_4 s< ebx_4)
                    
                    esi_3 = var_44
                    ecx_1 = var_40
                
                if (esi_3 != 0)
                    sub_405780(esi_3, ecx_1)
                    int32_t* var_64_10 = esi_3
                    sub_6b4d5b()
                
                result.b = 1
            else if (esi_3 == 0)
                result.b = 0
            else
                sub_405780(esi_3, ecx_1)
                int32_t* var_64_11 = esi_3
                sub_6b4d5b()
                result.b = 0
        else
            sub_4054e0(&var_44)
            result.b = 0
    else if (ebx == 0)
        result.b = 0
    else
        sub_405780(ebx, var_40)
        int32_t* var_64_3 = ebx
        sub_6b4d5b()
        result.b = 0
else if (ebx == 0)
    result.b = 0
else
    sub_405780(ebx, var_40)
    int32_t* var_64_1 = ebx
    sub_6b4d5b()
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
