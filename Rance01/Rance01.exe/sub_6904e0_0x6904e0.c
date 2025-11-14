// 函数: sub_6904e0
// 地址: 0x6904e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726b58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg4[4]

if (result != 0)
    void* eax_6 = data_797d2c
    *(*(eax_6 + 0x30) + 0x17c) = *arg3
    *(*(eax_6 + 0x30) + 0x180) = arg3[1]
    char var_56_1 = (arg3[4]).b
    char var_57_1 = (arg3[3]).b
    char var_55_1 = 0xff
    *(*(eax_6 + 0x30) + 0x184) = (arg3[2]).b.d
    void* eax_7 = *(eax_6 + 0x30)
    char var_58_1
    var_58_1.d = fconvert.s(fconvert.t(arg3[6]))
    *(eax_7 + 0x188) = fconvert.s(fconvert.t(var_58_1.d))
    var_58_1.d = fconvert.s(fconvert.t(arg3[7]))
    char var_55_2 = 0xff
    *(eax_7 + 0x18c) = fconvert.s(fconvert.t(var_58_1.d))
    char var_57_2 = (arg3[9]).b
    char var_56_2 = (arg3[0xa]).b
    *(eax_7 + 0x190) = (arg3[8]).b.d
    char var_58_2
    var_58_2.d = 0
    int32_t eax_8 = sub_5e01a0(arg3)
    *arg1 = 0
    *arg2 = eax_8
    int32_t ebx_3 = arg4[4]
    int32_t var_54_1 = 0
    int32_t var_40_1 = ebx_3
    int32_t var_24_1 = 0xf
    void* var_28_1 = nullptr
    char var_38 = 0
    sub_401270(&var_38, nullptr, 0x72cf5b)
    int32_t var_c_1 = 0
    
    if (ebx_3 s> 0)
        int32_t eax_19
        
        do
            int32_t* eax_9
            
            if (arg4[5] u< 0x10)
                eax_9 = arg4
            else
                eax_9 = *arg4
            
            ebx_3.b = *(eax_9 + var_54_1)
            
            if (ebx_3.b != 0xa)
                if ((ebx_3.b u< 0x81 || ebx_3.b u> 0x9f) && ebx_3.b u< 0xe0)
                    sub_677d10(&var_38, ebx_3.b)
                else
                    if (var_24_1 u< 1)
                        sub_401470(&var_38, 1, var_28_1)
                    
                    char* eax_13 = var_38.d
                    
                    if (var_24_1 u< 0x10)
                        eax_13 = &var_38
                    
                    *eax_13 = ebx_3.b
                    char* eax_14 = var_38.d
                    var_28_1 = 1
                    
                    if (var_24_1 u< 0x10)
                        eax_14 = &var_38
                    
                    var_54_1 += 1
                    eax_14[1] = 0
                    int32_t* eax_15
                    
                    if (arg4[5] u< 0x10)
                        eax_15 = arg4
                    else
                        eax_15 = *arg4
                    
                    sub_401f60(&var_38, *(eax_15 + var_54_1))
                
                var_58_2.d += sub_6996c0(&var_38)
                sub_401270(&var_38, nullptr, 0x72cf72)
            else
                sub_401270(&var_38, nullptr, 0x72cf71)
                *arg2 += eax_8
                int32_t eax_11 = *arg1
                int32_t ecx_8 = var_58_2.d
                
                if (eax_11 s< ecx_8)
                    eax_11 = ecx_8
                
                *arg1 = eax_11
                var_58_2.d = 0
            
            eax_19 = var_54_1 + 1
            var_54_1 = eax_19
        while (eax_19 s< var_40_1)
    
    result = *arg1
    int32_t result_1 = var_58_2.d
    
    if (result s< result_1)
        result = result_1
    
    *arg1 = result
    
    if (var_24_1 u>= 0x10)
        int32_t var_70_5 = var_38.d
        result = sub_6b4d5b()
else
    *arg1 = result
    *arg2 = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
