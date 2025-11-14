// 函数: sub_5cd6d0
// 地址: 0x5cd6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b668
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1 + 0x20
void** var_4c = esi
sub_58b820(esi)
sub_50d890(*(*(arg1 + 0x34) + 4))
void* eax_6 = *(arg1 + 0x34)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x34)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x34)
*(eax_8 + 8) = eax_8
*(arg1 + 0x38) = 0
int32_t ecx_2 = arg2[1]
void** result = *arg2
int32_t var_44 = ecx_2

if (result == ecx_2)
label_5cd892:
    result.b = 1
else
    void* ebp_1 = &result[1]
    int32_t var_38_1 = ecx_2
    
    if (ebp_1 u> ecx_2)
    label_5cd8c8:
        result.b = 0
    else
        uint32_t ebx_7 =
            ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
            | zx.d(*result)
        int32_t var_48_1 = 0
        void* var_34
        
        if (ebx_7 s> 0)
            while (true)
                if (ebp_1 + 4 u> ecx_2)
                    goto label_5cd8c8_2
                
                uint32_t edx_5 = zx.d(*ebp_1)
                uint32_t ecx_8 =
                    ((zx.d(*(ebp_1 + 3)) << 8 | zx.d(*(ebp_1 + 2))) << 8 | zx.d(*(ebp_1 + 1))) << 8
                ebp_1 += 4
                uint32_t var_40 = ecx_8 | edx_5
                sub_416b60(&var_34, var_4c, sub_416d20(esi, &var_40))
                ecx_2 = var_44
                int32_t eax_12 = var_48_1 + 1
                var_48_1 = eax_12
                
                if (eax_12 s>= ebx_7)
                    break
                
                esi = var_4c
        
        if (ebp_1 + 4 u> ecx_2)
        label_5cd8c8_1:
            result.b = 0
        else
            uint32_t ebx_15 =
                ((zx.d(*(ebp_1 + 3)) << 8 | zx.d(*(ebp_1 + 2))) << 8 | zx.d(*(ebp_1 + 1))) << 8
                | zx.d(*ebp_1)
            int32_t esi_2 = 0
            void** var_3c = ebp_1 + 4
            
            if (ebx_15 s<= 0)
            label_5cd892_1:
                result.b = 1
            else
                while (true)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    int32_t var_4 = 0
                    
                    if (sub_410070(&var_3c, &var_2c).b == 0)
                        if (var_18_1 u>= 0x10)
                            int32_t var_68_7 = var_2c.d
                            sub_6b4d5b()
                        
                        break
                    
                    char* var_68_4 = &var_2c
                    sub_5cdb70(arg1 + 0x30, &var_34, sub_5cdcd0(arg1 + 0x30))
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_68_6 = var_2c.d
                        sub_6b4d5b()
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= ebx_15)
                        goto label_5cd892_1
                
            label_5cd8c8_2:
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
