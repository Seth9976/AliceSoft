// 函数: sub_5b3180
// 地址: 0x5b3180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1[1]
int32_t j_2 = *arg1
void* eax_5 = (ebx & 1) + ebx
char* edx_2 = (j_2 & 1) + j_2
char* result_2 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
sub_404f60(eax_5 * edx_2, &result_2)
int32_t var_4 = 0
char* result_4 = result_2
char* result

if (sub_5b32b0(result_4, var_1c - result_4, arg1[6], arg1[8]).b != 0)
    sub_5b3510(edx_2, &result_2, eax_5)
    void* esi_1 = (*(*arg2 + 8))(0, 0)
    int32_t edi_4 = (*(*arg2 + 0x1c))(eax_2) - (j_2 << 2)
    
    if (ebx s> 0)
        char* result_3 = result_2
        arg2 = ebx
        int32_t* i
        
        do
            char* result_6 = result_3
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    ebx.b = *result_6
                    *(esi_1 + 3) = ebx.b
                    esi_1 += 4
                    result_6 = &result_6[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            result_3 += edx_2
            esi_1 += edi_4
            i = arg2
            arg2 -= 1
        while (i != 1)
    
    result = result_2
    
    if (result != 0)
        char* result_1 = result
        sub_6b4d5b()
    
    result.b = 1
else
    if (result_4 != 0)
        char* result_5 = result_4
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
