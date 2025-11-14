// 函数: sub_691440
// 地址: 0x691440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726b28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
*arg4 = 0
*arg2 = 0

if (result != 0)
    int32_t edx = result[0xb]
    void* ecx_1 = data_797d2c
    *(*(ecx_1 + 0x30) + 0x17c) = result[0xa]
    *(*(ecx_1 + 0x30) + 0x180) = result[0xb]
    char var_4e_1 = (result[0xe]).b
    char var_4f_1 = (result[0xd]).b
    char var_4d_1 = 0xff
    *(*(ecx_1 + 0x30) + 0x184) = (result[0xc]).b.d
    void* ecx_2 = *(ecx_1 + 0x30)
    char var_4d_2 = 0xff
    *(ecx_2 + 0x188) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(result[0x10]))))
    *(ecx_2 + 0x18c) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(result[0x11]))))
    char var_4f_2 = (result[0x13]).b
    char var_4e_2 = (result[0x14]).b
    *(ecx_2 + 0x190) = (result[0x12]).b.d
    int32_t i_1 = arg1[4]
    char var_50_2
    var_50_2.d = 0
    int32_t i = i_1
    int32_t var_24_1 = 0xf
    void* var_28_1 = nullptr
    char var_38 = 0
    result = sub_401270(&var_38, nullptr, 0x72cfa7)
    int32_t var_c_1 = 0
    
    if (i_1 s> 0)
        int32_t ebx_3
        
        do
            int32_t* eax_7
            
            if (arg1[5] u< 0x10)
                eax_7 = arg1
            else
                eax_7 = *arg1
            
            int32_t edx_6 = var_50_2.d
            i_1.b = *(eax_7 + edx_6)
            
            if (i_1.b != 0xa)
                if (var_24_1 u< 1)
                    sub_401470(&var_38, 1, var_28_1)
                
                char* eax_8 = var_38.d
                
                if (var_24_1 u< 0x10)
                    eax_8 = &var_38
                
                *eax_8 = i_1.b
                result = var_38.d
                var_28_1 = 1
                
                if (var_24_1 u< 0x10)
                    result = &var_38
                
                *(result + 1) = 0
                
                if ((i_1.b u< 0x81 || i_1.b u> 0x9f) && i_1.b u< 0xe0)
                    ebx_3 = var_50_2.d
                else
                    ebx_3 = var_50_2.d + 1
                    
                    if (ebx_3 s>= i)
                        break
                    
                    if (arg1[5] u< 0x10)
                        sub_401f60(&var_38, *(arg1 + ebx_3))
                    else
                        sub_401f60(&var_38, (*arg1)[ebx_3])
                
                result = sub_6996c0(&var_38)
                *arg4 += result
            else
                result = arg4
                *result = 0
                *arg2 += edx
                ebx_3 = edx_6
            
            var_50_2.d = ebx_3 + 1
        while (ebx_3 + 1 s< i)
    
    if (var_24_1 u>= 0x10)
        int32_t var_68_5 = var_38.d
        result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
