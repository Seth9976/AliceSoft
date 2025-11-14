// 函数: sub_539060
// 地址: 0x539060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *arg2
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&ecx[4] u> arg2[1])
    result.b = 0
else
    result = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *arg2 = &ecx[4]
    int32_t ebp_1
    
    if (result != 0)
        sub_55ae70(arg1 + 0x4c, result)
        ebp_1 = 0
    
    if (result == 0 || (*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2 == 0)
    label_53918c:
        result.b = 1
    else
        while (true)
            int32_t var_18_1 = 0xf
            void* var_1c_1 = nullptr
            var_2c = 0
            int32_t var_4 = 0
            
            if (sub_410070(arg2, &var_2c).b == 0)
                if (var_18_1 u>= 0x10)
                    int32_t var_44_5 = var_2c.d
                    sub_6b4d5b()
                
                break
            
            *(*(arg1 + 0x4c) + (ebp_1 << 2)) = *(arg1 + 0x60) - *(arg1 + 0x5c)
            sub_404f60(*(arg1 + 0x60) - *(arg1 + 0x5c) + var_1c_1 + 1, arg1 + 0x5c)
            char* eax_14 = var_2c.d
            
            if (var_18_1 u< 0x10)
                eax_14 = &var_2c
            
            sub_6c02a0(*(*(arg1 + 0x4c) + (ebp_1 << 2)) + *(arg1 + 0x5c), eax_14, var_1c_1 + 1, 
                eax_4)
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                int32_t var_44_4 = var_2c.d
                sub_6b4d5b()
            
            ebp_1 += 1
            
            if (ebp_1 u>= (*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2)
                goto label_53918c
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
