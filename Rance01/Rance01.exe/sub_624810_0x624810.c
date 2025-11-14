// 函数: sub_624810
// 地址: 0x624810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7201c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_2
int32_t eax_2 = data_78c474 ^ &result_2
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2
int32_t var_34 = (*(**(arg1 + 4) + 0x1c))(esi)
sub_42e070(arg1 + 0x14, &result_2, &var_34)
int32_t* result_4 = result_2
int32_t* result

if (result_4 == *(arg1 + 0x18))
    int32_t eax_8 = *(**(arg1 + 4) + 0x1c)
    result_2 = nullptr
    int32_t ebx_1 = 0
    
    if ((*(**(arg1 + 8) + 0x20))(eax_8(esi)) s> 0)
        int32_t eax_20
        
        do
            int32_t var_18_1 = 0xf
            int32_t* result_3 = nullptr
            char var_2c = 0
            int32_t var_4 = 0
            int128_t* eax_15 = (*(**(arg1 + 8) + 0x28))((*(**(arg1 + 4) + 0x1c))(esi), ebx_1)
            
            if (eax_15 != 0)
                char* ecx_6 = eax_15
                char i
                
                do
                    i = *ecx_6
                    ecx_6 = &ecx_6[1]
                while (i != 0)
                sub_401270(&var_2c, ecx_6 - &ecx_6[1], eax_15)
                esi = arg2
            
            if (result_2 s< result_3)
                result_2 = result_3
            
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                int32_t var_50_7 = var_2c.d
                sub_6b4d5b()
            
            int32_t eax_17 = *(**(arg1 + 4) + 0x1c)
            int32_t var_18_2 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            ebx_1 += 1
            eax_20 = (*(**(arg1 + 8) + 0x20))(eax_17(esi))
        while (ebx_1 s< eax_20)
    
    void* eax_22 = sub_4ccf80(arg1 + 0x14, &var_34)
    int32_t* result_1 = result_2
    *eax_22 = result_1
    result = result_1
else
    result = result_4[4]

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_2)
return result
