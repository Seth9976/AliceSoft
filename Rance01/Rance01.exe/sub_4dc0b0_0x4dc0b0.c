// 函数: sub_4dc0b0
// 地址: 0x4dc0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724d8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f8
int32_t eax_2 = data_78c474 ^ &var_f8
int32_t __saved_ebp
int32_t var_100 = data_78c474 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg3 + 0x44)

if (result s< 0 || result s>= (*(arg3 + 0x28) - *(arg3 + 0x24)) s>> 2)
    result.b = 1
else
    struct sealengine::CDrawParam::VTable* var_f4
    sub_4b97d0(&var_f4)
    int32_t var_4 = 0
    result = *(arg3 + 8)
    int32_t var_104_1
    int32_t edx
    
    if (result == 0)
        edx = *(*arg2 + 0x84)
        
        if (*(*(*(arg3 + 0x24) + (*(arg3 + 0x44) << 2)) + 0x10) == 0)
            var_104_1 = 0
        else
            var_104_1 = 1
        
        goto label_4dc158
    
    if (result != 1)
        result.b = 0
    else
        edx = *(*arg2 + 0x84)
        var_104_1 = 3
    label_4dc158:
        edx(var_104_1)
        result = *(arg3 + 0x44)
        
        if (result s< 0)
            result.b = 1
        else
            int32_t ecx_6 = *(arg3 + 0x34)
            
            if (result s>= (*(arg3 + 0x38) - ecx_6) s>> 2)
                result.b = 1
            else
                float var_20_1 = fconvert.s(fconvert.t(*(arg3 + 0x50)))
                int32_t var_7c_1 = *(ecx_6 + (result << 2))
                char var_24_1 = 0
                
                if (sub_509e40(arg4, &var_f4).b == 0)
                    result.b = 0
                else
                    result.b = (*(*arg5 + 0x24))(arg6, arg7).b != 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_f8)
return result
