// 函数: sub_695460
// 地址: 0x695460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726af8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_5c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
result_1 = result

if (result != 0)
    sub_401270(arg2 + 0x34, nullptr, 0x72ce3b)
    sub_401270(arg2 + 0x50, nullptr, 0x72ce56)
    int32_t* result_2 = result_1
    void* eax_5 = data_797d2c
    *(*(eax_5 + 0x30) + 0x17c) = result_2[0xa]
    *(*(eax_5 + 0x30) + 0x180) = result_2[0xb]
    result_1.b = (result_2[0xc]).b
    result_1:1.b = (result_2[0xd]).b
    result_1:2.b = (result_2[0xe]).b
    result_1:3.b = 0xff
    *(*(eax_5 + 0x30) + 0x184) = result_1
    void* eax_6 = *(eax_5 + 0x30)
    result_1:3.b = 0xff
    *(eax_6 + 0x188) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(result_2[0x10]))))
    *(eax_6 + 0x18c) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(result_2[0x11]))))
    result_1.b = (result_2[0x12]).b
    result_1:1.b = (result_2[0x13]).b
    result_1:2.b = (result_2[0x14]).b
    *(eax_6 + 0x190) = result_1
    int32_t eax_7 = sub_5e01a0(&result_2[0xa])
    int32_t* ecx_6 = arg1
    void* ebx_1 = *(arg2 + 0x6c)
    int32_t edx_10
    edx_10:result = sx.q(eax_7)
    int32_t edi_2 = ((edx_10 & 3) + result) s>> 2
    
    while (ecx_6[4] u> 0)
        if (arg4 s<= ebx_1 + edi_2)
            result = sub_401180(arg2 + 0x50, 0xffffffff, ecx_6, 0)
            break
        
        int32_t var_38
        sub_695e90(ecx_6, &var_38)
        int32_t var_c_1 = 0
        sub_402000(arg2 + 0x34, &var_38, 0, 0xffffffff)
        result = sub_6996c0(&var_38)
        ebx_1 += result
        int32_t var_c_2 = 0xffffffff
        int32_t var_24
        
        if (var_24 u>= 0x10)
            int32_t var_60_3 = var_38
            result = sub_6b4d5b()
        
        ecx_6 = arg1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
