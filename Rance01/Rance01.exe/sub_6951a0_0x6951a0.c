// 函数: sub_6951a0
// 地址: 0x6951a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726b28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6 = arg4[4]

if (eax_6 == 0)
    *arg1 = eax_6
    *arg2 = eax_6

void* eax_7 = data_797d2c
*(*(eax_7 + 0x30) + 0x17c) = *arg3
*(*(eax_7 + 0x30) + 0x180) = arg3[1]
char var_52 = (arg3[4]).b
void* ecx_3 = *(eax_7 + 0x30)
char var_53 = (arg3[3]).b
var_54 = (arg3[2]).b
char var_51 = 0xff
*(ecx_3 + 0x184) = var_54.d
void* eax_8 = *(eax_7 + 0x30)
var_54.d = fconvert.s(fconvert.t(arg3[6]))
*(eax_8 + 0x188) = fconvert.s(fconvert.t(var_54.d))
var_54.d = fconvert.s(fconvert.t(arg3[7]))
char var_51_1 = 0xff
*(eax_8 + 0x18c) = fconvert.s(fconvert.t(var_54.d))
char var_53_1 = (arg3[9]).b
char var_52_1 = (arg3[0xa]).b
var_54 = (arg3[8]).b
*(eax_8 + 0x190) = var_54.d
var_54.d = 0
int32_t eax_9 = sub_5e01a0(arg3)
*arg1 = 0
*arg2 = eax_9
int32_t ebx_2 = arg4[4]
int32_t var_50 = 0
int32_t var_3c = ebx_2
int32_t var_24 = 0xf
void* var_28 = nullptr
char var_38 = 0
sub_401270(&var_38, nullptr, 0x72ce2f)
int32_t var_c_1 = 0

if (ebx_2 s> 0)
    int32_t eax_22
    
    do
        char* eax_10
        
        if (arg4[5] u< 0x10)
            eax_10 = arg4
        else
            eax_10 = *arg4
        
        ebx_2.b = eax_10[var_50]
        
        if (ebx_2.b != 0xa)
            if ((ebx_2.b u< 0x81 || ebx_2.b u> 0x9f) && ebx_2.b u< 0xe0)
                if (var_24 u< 1)
                    sub_401470(&var_38, 1, var_28)
                
                char* eax_18 = var_38.d
                
                if (var_24 u< 0x10)
                    eax_18 = &var_38
                
                *eax_18 = ebx_2.b
                char* eax_19 = var_38.d
                var_28 = 1
                
                if (var_24 u< 0x10)
                    eax_19 = &var_38
                
                eax_19[1] = 0
            else
                if (var_24 u< 1)
                    sub_401470(&var_38, 1, var_28)
                
                char* eax_14 = var_38.d
                
                if (var_24 u< 0x10)
                    eax_14 = &var_38
                
                *eax_14 = ebx_2.b
                char* eax_15 = var_38.d
                var_28 = 1
                
                if (var_24 u< 0x10)
                    eax_15 = &var_38
                
                var_50 += 1
                eax_15[1] = 0
                int32_t* eax_16
                
                if (arg4[5] u< 0x10)
                    eax_16 = arg4
                else
                    eax_16 = *arg4
                
                sub_401f60(&var_38, *(eax_16 + var_50))
            
            int32_t eax_20 = sub_6996c0(&var_38)
            var_54.d += eax_20
            sub_401270(&var_38, nullptr, 0x72ce3a)
        else
            sub_401270(&var_38, nullptr, 0x72ce39)
            *arg2 += eax_9
            int32_t eax_12 = *arg1
            int32_t ecx_8 = var_54.d
            
            if (eax_12 s< ecx_8)
                eax_12 = ecx_8
            
            *arg1 = eax_12
            var_54.d = 0
        
        eax_22 = var_50 + 1
        var_50 = eax_22
    while (eax_22 s< var_3c)

int32_t result = *arg1
int32_t result_1 = var_54.d

if (result s< result_1)
    result = result_1

*arg1 = result

if (var_24 u>= 0x10)
    int32_t var_68_5 = var_38.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
