// 函数: sub_623ae0
// 地址: 0x623ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2
int32_t edx = *(**(arg1 + 4) + 0x18)
result_1 = 0
int32_t ebx = 0
int32_t result

if ((*(**(arg1 + 8) + 8))(edx(esi)) s<= 0)
    result = 0
else
    int32_t eax_17
    
    do
        int32_t var_18_1 = 0xf
        int32_t result_2 = 0
        char var_2c = 0
        int32_t var_4 = 0
        int128_t* eax_12 = (*(**(arg1 + 8) + 0x10))((*(**(arg1 + 4) + 0x18))(esi), ebx)
        
        if (eax_12 != 0)
            char* ecx_4 = eax_12
            char i
            
            do
                i = *ecx_4
                ecx_4 = &ecx_4[1]
            while (i != 0)
            sub_401270(&var_2c, ecx_4 - &ecx_4[1], eax_12)
            esi = arg2
        
        if (result_1 s< result_2)
            result_1 = result_2
        
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_48_5 = var_2c.d
            sub_6b4d5b()
        
        int32_t eax_14 = *(**(arg1 + 4) + 0x18)
        int32_t var_18_2 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        ebx += 1
        eax_17 = (*(**(arg1 + 8) + 8))(eax_14(esi))
    while (ebx s< eax_17)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
