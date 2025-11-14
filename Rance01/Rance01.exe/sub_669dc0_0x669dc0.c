// 函数: sub_669dc0
// 地址: 0x669dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c240
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_4c = esi
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** ebp_1 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD** var_48 = nullptr
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_4 = 0
    result = *(esi + 0x1c)
    char var_55_1 = 0
    
    if (result != 0)
        sub_405220(&result[3], &var_48)
        ebp_1 = var_48
    
    int32_t ecx_2 = 0
    int32_t edx_3 = (*(esi + 0x24) - *(esi + 0x20)) s>> 2
    int32_t var_50_1 = edx_3
    int32_t var_54_1 = 0
    
    if (edx_3 s> 0)
        do
            if (ecx_2 s>= 0 && (*(esi + 0x24) - *(esi + 0x20)) s>> 2 s> ecx_2)
                result = *(*(esi + 0x20) + (ecx_2 << 2))
                
                if (result != 0)
                    int32_t* var_30
                    sub_66fc20(&var_30, result)
                    var_4.b = 1
                    int32_t edi_4 = (var_44_1 - ebp_1) s/ 0x1c
                    int32_t ebx_1 = 0
                    int32_t var_1c
                    
                    if (edi_4 s> 0)
                        void* ebp_2 = &ebp_1[4]
                        
                        while (true)
                            int32_t* ecx_5 = var_30
                            
                            if (var_1c u< 0x10)
                                ecx_5 = &var_30
                            
                            int32_t esi_2 = *ebp_2
                            int32_t var_20
                            int32_t eax_9 = var_20
                            
                            if (esi_2 u< eax_9)
                                eax_9 = esi_2
                            
                            void* edx_7
                            
                            if (*(ebp_2 + 4) u< 0x10)
                                edx_7 = ebp_2 - 0x10
                            else
                                edx_7 = *(ebp_2 - 0x10)
                            
                            int32_t eax_10 = sub_402320(eax_9, edx_7, ecx_5, eax_9)
                            bool cond:0_1 = eax_10 == 0
                            
                            if (eax_10 == 0)
                                if (esi_2 u>= var_20)
                                    int32_t ecx_6
                                    ecx_6.b = esi_2 != var_20
                                    eax_10 = ecx_6
                                else
                                    eax_10 = 0xffffffff
                                
                                cond:0_1 = eax_10 == 0
                            
                            eax_10.b = cond:0_1
                            
                            if (eax_10.b != 0)
                                break
                            
                            ebx_1 += 1
                            ebp_2 += 0x1c
                            
                            if (ebx_1 s>= edi_4)
                                goto label_669f23
                    
                    if (edi_4 s<= 0 || ebx_1 s>= edi_4)
                    label_669f23:
                        sub_405220(&var_30, &var_48)
                    else
                        var_55_1 = 1
                    
                    var_55_1 |= sub_669dc0(result).b
                    var_4.b = 0
                    
                    if (var_1c u>= 0x10)
                        int32_t* var_74_4 = var_30
                        sub_6b4d5b()
                    
                    edx_3 = var_50_1
                    ecx_2 = var_54_1
                    esi = var_4c
                    ebp_1 = var_48
            
            ecx_2 += 1
            var_54_1 = ecx_2
        while (ecx_2 s< edx_3)
    
    if (ebp_1 != 0)
        sub_405780(ebp_1, var_44_1)
        struct _EXCEPTION_REGISTRATION_RECORD** var_74_5 = ebp_1
        sub_6b4d5b()
    
    result.b = var_55_1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
