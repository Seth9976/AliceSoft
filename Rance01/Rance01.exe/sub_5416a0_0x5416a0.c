// 函数: sub_5416a0
// 地址: 0x5416a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7266a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_7 = **(arg1 + 0x2b0)
int32_t* var_54 = eax_7
int32_t* result

if (eax_7 u>= (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    sub_53d1c0(eax_7, edx, arg1, 0x74e080)
    result.b = 0
else
    int32_t ecx_3 = *(arg1 + 0x1e4)
    eax_7 = *(ecx_3 + (eax_7 << 2))
    var_58 = eax_7
    
    if (eax_7 != 0)
        int32_t* var_4c_1
        int32_t* ecx_5
        
        if (edx u< (*(arg1 + 0x1e8) - ecx_3) s>> 2)
            ecx_5 = *(ecx_3 + (edx << 2))
            var_4c_1 = ecx_5
        
        if (edx u< (*(arg1 + 0x1e8) - ecx_3) s>> 2 && ecx_5 != 0)
            int128_t* edx_1
            
            if (eax_7[1] != 0)
                edx_1 = *eax_7
            else
                edx_1 = nullptr
            
            char* eax_8 = edx_1
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            
            do
                ecx_5.b = *eax_8
                eax_8 = &eax_8[1]
            while (ecx_5.b != 0)
            
            int32_t* ecx_7 = sub_401270(&var_48, eax_8 - &eax_8[1], edx_1)
            int32_t var_4 = 0
            int128_t* eax_11
            
            if (var_4c_1[1] != 0)
                eax_11 = *var_4c_1
            else
                eax_11 = nullptr
            
            char* var_70_2 = &var_48
            void* var_2c
            sub_402c60(&var_2c, eax_11, ecx_7)
            var_4.b = 2
            
            if (var_34_1 u>= 0x10)
                int32_t var_70_3 = var_48.d
                sub_6b4d5b()
            
            int32_t var_34_2 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
            int32_t eax_14
            int32_t edx_3
            eax_14, edx_3 = sub_552880(arg1 + 0x1dc, edx)
            
            if (eax_14.b != 0)
                int32_t eax_16
                int32_t edx_5
                eax_16, edx_5 = sub_550660(var_58, &var_2c)
                
                if (eax_16.b != 0)
                    **(arg1 + 0x2b0) = var_54
                    *(arg1 + 0x2b0) += 4
                    sub_401110(&var_2c)
                    result.b = 1
                else
                    sub_53d1c0(eax_16, edx_5, arg1, 0x74e130)
                    sub_401110(&var_2c)
                    result.b = 0
            else
                sub_53d1c0(eax_14, edx_3, arg1, 0x74e0e8)
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    void* var_70_5 = var_2c
                    sub_6b4d5b()
                
                result.b = 0
        else
            sub_53d1c0(eax_7, edx, arg1, 0x74e0b4)
            result.b = 0
    else
        sub_53d1c0(eax_7, edx, arg1, 0x74e080)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
