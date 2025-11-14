// 函数: sub_646900
// 地址: 0x646900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float i_4
int32_t eax_2 = data_78c474 ^ &i_4
int32_t __saved_edi
int32_t var_80 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg2

if (*(result + 0x18c) != 0)
    void* result_2 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_4 = 0
    int32_t* var_68 = nullptr
    i_4 = 0f
    result = sub_4087b0(&i_4, &var_68)
    
    if (result.b != 0)
        int32_t* esi_2 = var_68
        
        if (esi_2 != 0)
            float i_3 = i_4
            
            if (i_3 s> 0)
                float i
                
                do
                    sub_416780(esi_2, &result_2)
                    esi_2 = &esi_2[1]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                void* var_50 = nullptr
                int32_t var_4c_1 = 0
                int32_t var_48_1 = 0
                var_4.b = 1
                sub_646000(&var_50, &result_2)
                long double x87_r7_1 = float.t(0)
                i_4 = fconvert.s(x87_r7_1)
                var_68 = nullptr
                float var_60_1 = fconvert.s(x87_r7_1)
                void* ebp_1 = var_50
                int32_t i_5 = (var_4c_1 - ebp_1) s/ 0x28
                
                if (i_5 s> 0)
                    void* edi_3 = ebp_1 + 0x10
                    int32_t i_2 = i_5
                    int32_t i_1
                    
                    do
                        if (*(edi_3 + 0xc) != 0)
                            var_68 += 1
                        
                        uint32_t ebp_2 = *(edi_3 - 4)
                        uint32_t esi_3 = *edi_3
                        uint32_t var_58_1
                        
                        if (ebp_2 != 0)
                            var_58_1 = sub_646b40(ebp_2)
                        else
                            var_58_1 = ebp_2
                        
                        int32_t eax_9
                        
                        if (esi_3 != 0)
                            eax_9 = sub_646b40(esi_3)
                        else
                            eax_9 = 0
                        
                        bool cond:0_1 = *(edi_3 + 0x14) != 0
                        i_4 = fconvert.s(float.t(esi_3 * ebp_2 * 4) + fconvert.t(i_4))
                        
                        if (not(cond:0_1) && *(edi_3 + 0xc) == 1
                                && *(*(data_797d2c + 0x30) + 0x2cc) == 1)
                            var_60_1 =
                                fconvert.s(float.t(eax_9 * var_58_1 * 4) + fconvert.t(var_60_1))
                        
                        edi_3 += 0x28
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    ebp_1 = var_50
                
                long double x87_r7_6 = fconvert.t(var_60_1)
                long double x87_r5_1 = float.t(0)
                long double x87_r4_1 = fconvert.t(0.0009765625)
                int32_t* var_88_1
                var_88_1.q = fconvert.d((x87_r7_6 + x87_r5_1) * x87_r4_1)
                double var_90_1 = fconvert.d(x87_r5_1 * x87_r4_1)
                double var_98_1 = fconvert.d(x87_r7_6 * x87_r4_1)
                double var_a0_1 = fconvert.d(x87_r4_1 * fconvert.t(i_4))
                int32_t i_6 = i_5
                int32_t* var_a8_1 = var_68
                var_4.b = 2
                sub_401ef0(arg1, sub_4104a0(0x732ea0))
                int32_t var_1c
                
                if (var_1c u>= 0x10)
                    int32_t var_30
                    int32_t var_84_2 = var_30
                    sub_6b4d5b()
                
                if (ebp_1 != 0)
                    void* var_84_3 = ebp_1
                    sub_6b4d5b()
                
                result = result_2
                
                if (result != 0)
                    void* result_1 = result
                    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &i_4)
return result
