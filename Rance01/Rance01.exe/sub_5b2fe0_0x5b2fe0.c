// 函数: sub_5b2fe0
// 地址: 0x5b2fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7167e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t j_2 = *arg1
int32_t* ebx = arg1[1]
void* eax_5 = (ebx & 1) + ebx
int32_t edi_2 = (j_2 & 1) + j_2
int32_t* eax_7 = eax_5 * edi_2 * 3
int32_t result_2 = 0
int32_t var_18 = 0
int32_t var_14 = 0
sub_404f60(eax_7, &result_2)
int32_t var_4 = 0
int32_t result_3 = result_2
int32_t result

if (sub_5b32b0(result_3, var_18 - result_3, arg1[5], arg1[7]).b != 0)
    void* var_2c = nullptr
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    sub_404f60(eax_7, &var_2c)
    var_4.b = 1
    sub_5b3330(&result_2, edi_2, &var_2c, eax_5)
    sub_5b3400(&var_2c, edi_2, eax_5)
    char* esi_3 = (*(*arg2 + 8))(0, 0)
    int32_t ebp_3 = (*(*arg2 + 0x1c))(eax_2) - (j_2 << 2)
    
    if (ebx s> 0)
        void* edi_3 = var_2c
        arg1 = ebx
        int32_t* i
        
        do
            void* ecx_5 = edi_3
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    *esi_3 = *ecx_5
                    esi_3[1] = *(ecx_5 + 1)
                    esi_3[2] = *(ecx_5 + 2)
                    esi_3[3] = 0xff
                    esi_3 = &esi_3[4]
                    ecx_5 += 3
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            edi_3 += edi_2 * 3
            esi_3 = &esi_3[ebp_3]
            i = arg1
            arg1 -= 1
        while (i != 1)
    
    void* eax_16 = var_2c
    
    if (eax_16 != 0)
        void* var_50_3 = eax_16
        sub_6b4d5b()
    
    result = result_2
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()
    
    result.b = 1
else
    if (result_3 != 0)
        int32_t result_4 = result_3
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
