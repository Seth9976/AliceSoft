// 函数: sub_663ea0
// 地址: 0x663ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7259f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_4 = nullptr
int32_t ebx = 0
int32_t var_48 = arg2
int32_t* result_3 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_4 = 0
int32_t* ebp = *arg4
int32_t* result

if (ebp == arg4[1])
label_663ff7:
    result.b = 0
else
    while (true)
        int32_t eax_5 = *ebp
        int32_t var_30
        int32_t var_1c
        
        if ((ebp[1] - eax_5) s>> 2 s> arg2)
            void* ecx_4 = *(eax_5 + (arg2 << 2))
            
            if (*(ecx_4 + 8) == 1)
                int32_t i = *(ecx_4 + 0x28)
                int32_t i_2 = i
                int32_t* result_5 = result_4
                
                if (result_4 != ebx)
                    while (*result_5 != i)
                        result_5 = &result_5[1]
                        
                        if (result_5 == ebx)
                            goto label_663fcd
                    
                    if (result_5 != ebx)
                        int32_t i_1 = i
                        var_4.b = 3
                        sub_6685f0(sub_4104a0(0x7308fc), arg3)
                        
                        if (var_1c u>= 0x10)
                            int32_t var_64_4 = var_30
                            sub_6b4d5b()
                        
                        result = result_3
                        
                        if (result != 0)
                            int32_t* result_2 = result
                            sub_6b4d5b()
                        
                        result.b = 1
                        break
                
            label_663fcd:
                sub_416780(&i_2, &result_3)
                ebx = var_40
            else
                void* eax_7 = ecx_4 + 0xc
                
                if (*(ecx_4 + 0x20) u>= 0x10)
                    eax_7 = *eax_7
                
                void* var_64_2 = eax_7
                var_4.b = 2
                sub_6685f0(sub_4104a0(0x7308c4), arg3)
                var_4.b = 0
                
                if (var_1c u>= 0x10)
                    int32_t var_64_3 = var_30
                    sub_6b4d5b()
        else
            var_4.b = 1
            sub_6685f0(sub_4104a0(0x7308a4), arg3)
            var_4.b = 0
            
            if (var_1c u>= 0x10)
                int32_t var_64_1 = var_30
                sub_6b4d5b()
        ebp = &ebp[4]
        
        if (ebp == arg4[1])
            result = result_3
            
            if (result != 0)
                int32_t* result_1 = result
                sub_6b4d5b()
            
            goto label_663ff7
        
        arg2 = var_48
        result_4 = result_3

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
