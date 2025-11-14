// 函数: sub_4f97c0
// 地址: 0x4f97c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724ce0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_60 = edi
int32_t ebx_2 = (*(edi + 0xc) - *(edi + 8)) s>> 2
char var_38
char* eax_7
int32_t edx
int32_t edx_1
eax_7, edx_1 = sub_4018a0(&var_38, edx, arg2 + 0x80, &var_38)
int32_t esi = 0
int32_t var_c_1 = 0
int32_t var_54
sub_401d60(&var_54, edx_1, eax_7)
var_c_1.b = 2
int32_t var_24

if (var_24 u>= 0x10)
    int32_t var_80_1 = var_38.d
    sub_6b4d5b()

int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38 = 0
int32_t var_40
int32_t* result

if (ebx_2 s> 0)
    while (true)
        if (esi s>= 0 && esi s< (*(edi + 0xc) - *(edi + 8)) s>> 2)
            result = *(*(edi + 8) + (esi << 2))
        
        if (esi s>= 0 && esi s< (*(edi + 0xc) - *(edi + 8)) s>> 2 && result != 0)
            result = sub_4f9550(result)
            
            if (result != 0)
                if (sub_500090(result, &var_54, *(arg2 + 0xa0)) == 0)
                    sub_4fff40(result)
                    int32_t* result_1 = result
                    sub_6b4d5b()
                    
                    if (var_40 u>= 0x10)
                        int32_t var_80_8 = var_54
                        sub_6b4d5b()
                        result.b = 0
                        goto label_4f9962
                else
                    int32_t var_64 = esi
                    int32_t* var_58
                    sub_42e070(arg2 + 0x2c, &var_58, &var_64)
                    
                    if (var_58 == *(arg2 + 0x30))
                        *sub_5cc1d0(arg2 + 0x2c, &var_64) = result
                    
                    esi += 1
                    
                    if (esi s>= ebx_2)
                        break
                    
                    edi = var_60
                    continue
            else if (var_40 u>= 0x10)
                int32_t var_80_6 = var_54
                sub_6b4d5b()
                result.b = 0
                goto label_4f9962
        else if (var_40 u>= 0x10)
            int32_t var_80_5 = var_54
            sub_6b4d5b()
        
        result.b = 0
        goto label_4f9962

if (var_40 u>= 0x10)
    int32_t var_80_9 = var_54
    sub_6b4d5b()

result.b = 1
label_4f9962:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
