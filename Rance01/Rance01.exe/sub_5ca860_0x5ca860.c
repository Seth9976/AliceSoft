// 函数: sub_5ca860
// 地址: 0x5ca860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e2b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_esi
int32_t var_34 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_797d7c
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(esi + 0x19) == 0)
    result.b = 0
else
    result = *(esi + 0x14)
    struct _EXCEPTION_REGISTRATION_RECORD* ecx_1 = *result
    struct _EXCEPTION_REGISTRATION_RECORD* edx_1 = &ecx_1->Next + 1
    
    if (edx_1 u> result[1])
        result.b = 0
    else
        ecx_1.b = ecx_1->Next.b
        *result = edx_1
        
        if (ecx_1.b != 3)
            result.b = 0
        else
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            int32_t var_4 = 0
            
            if (sub_410070(*(esi + 0x14), &var_2c).b != 0)
                char* eax_5 = var_2c.d
                
                if (var_18_1 u< 0x10)
                    eax_5 = &var_2c
                
                (*(*arg1 + 4))(eax_5)
                
                if (var_18_1 u>= 0x10)
                    int32_t var_38_4 = var_2c.d
                    sub_6b4d5b()
                
                result.b = 1
            else
                if (var_18_1 u>= 0x10)
                    int32_t var_38_2 = var_2c.d
                    sub_6b4d5b()
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
