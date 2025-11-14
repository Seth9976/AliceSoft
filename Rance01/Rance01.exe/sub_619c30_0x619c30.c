// 函数: sub_619c30
// 地址: 0x619c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL i = 0
var_54 = arg1
LRESULT var_50 = SendMessageA(arg2, 0x110a, 9, 0)
int32_t* result_1
int32_t edx = sub_591420(arg1 + 4, &result_1, &var_50)
int32_t* result = result_1

if (result != *(arg1 + 8))
    void* ebp_1 = result[4]
    int32_t* var_48
    sub_401a00(&var_48, edx, ebp_1 + 0x20)
    int32_t var_4 = 0
    int32_t var_34
    
    if ((data_797e10 - data_797e0c) s/ 0x1c s> 0)
        do
            int32_t var_2c
            char* eax_9 = sub_61ac30(&var_2c, i)
            int32_t* ecx_7 = var_48
            
            if (var_34 u< 0x10)
                ecx_7 = &var_48
            
            int32_t esi_2 = *(eax_9 + 0x10)
            int32_t edx_4 = esi_2
            int32_t var_38
            
            if (esi_2 u>= var_38)
                edx_4 = var_38
            
            if (*(eax_9 + 0x14) u>= 0x10)
                eax_9 = *eax_9
            
            int32_t eax_10 = sub_402320(eax_9, eax_9, ecx_7, edx_4)
            bool cond:0_1 = eax_10 == 0
            
            if (eax_10 == 0)
                int32_t eax_11
                
                if (esi_2 u>= var_38)
                    eax_11.b = esi_2 != var_38
                else
                    eax_11 = 0xffffffff
                
                cond:0_1 = eax_11 == 0
            
            int32_t ebx_1
            ebx_1.b = cond:0_1
            var_4.b = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_6c_2 = var_2c
                sub_6b4d5b()
            
            if (ebx_1.b != 0)
                sub_613d40(*(var_54 + 0xc4), *(ebp_1 + 0x3c), i)
                
                if (var_34 u>= 0x10)
                    int32_t* var_6c_5 = var_48
                    sub_6b4d5b()
                
                result.b = 1
                goto label_619d9c
            
            i += 1
        while (i s< (data_797e10 - data_797e0c) s/ 0x1c)
    
    if (var_34 u>= 0x10)
        int32_t* var_6c_3 = var_48
        sub_6b4d5b()

result.b = 0
label_619d9c:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
