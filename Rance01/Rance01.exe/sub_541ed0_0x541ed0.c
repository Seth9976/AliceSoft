// 函数: sub_541ed0
// 地址: 0x541ed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723bc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_7 = **(arg1 + 0x2b0)
int32_t ecx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
var_50 = edx
int32_t* result

if (eax_7 u>= ecx_2)
    result = sub_53d1c0(eax_7, edx, arg1, 0x74e33c)
else
    int32_t ecx_3 = *(arg1 + 0x1e4)
    eax_7 = *(ecx_3 + (eax_7 << 2))
    
    if (eax_7 != 0)
        int32_t* ebx_1
        
        if (edx u< (*(arg1 + 0x1e8) - ecx_3) s>> 2)
            ebx_1 = *(ecx_3 + (edx << 2))
        
        if (edx u< (*(arg1 + 0x1e8) - ecx_3) s>> 2 && ebx_1 != 0)
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
                ecx_3.b = *eax_8
                eax_8 = &eax_8[1]
            while (ecx_3.b != 0)
            
            int32_t* ecx_6 = sub_401270(&var_48, eax_8 - &eax_8[1], edx_1)
            int32_t var_4 = 0
            int128_t* ebx_2
            
            if (ebx_1[1] != 0)
                ebx_2 = *ebx_1
            else
                ebx_2 = nullptr
            
            char* var_68_2 = &var_48
            void* var_2c
            sub_402c60(&var_2c, ebx_2, ecx_6)
            var_4.b = 2
            
            if (var_34_1 u>= 0x10)
                int32_t var_68_3 = var_48.d
                sub_6b4d5b()
            
            int32_t var_34_2 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
            int32_t eax_13
            int32_t edx_3
            eax_13, edx_3 = sub_550660(eax_7, &var_2c)
            int32_t var_18
            
            if (eax_13.b != 0)
                **(arg1 + 0x2b0) = var_50
                *(arg1 + 0x2b0) += 4
                
                if (var_18 u>= 0x10)
                    void* var_68_6 = var_2c
                    sub_6b4d5b()
                
                result.b = 1
            else
                sub_53d1c0(eax_13, edx_3, arg1, 0x74e3ac)
                
                if (var_18 u>= 0x10)
                    void* var_68_5 = var_2c
                    sub_6b4d5b()
                
                result.b = 0
        else
            result = sub_53d1c0(eax_7, edx, arg1, 0x74e374)
    else
        result = sub_53d1c0(eax_7, edx, arg1, 0x74e33c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
