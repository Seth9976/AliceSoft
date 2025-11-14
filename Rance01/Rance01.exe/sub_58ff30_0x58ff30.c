// 函数: sub_58ff30
// 地址: 0x58ff30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char arg_8
int32_t ebx
ebx.b = arg_8
int32_t eax_3
eax_3.b = ebx.b != 0
int32_t* arg_4
int32_t ecx
ecx.b = arg_4.b != 0
int32_t esi_1 = ((eax_3 | 0x40) * 2) | ecx
arg_8.d = esi_1
int32_t edx = sub_591420(arg1 + 0x50, &arg_4, &arg_8)
int32_t* ecx_2 = arg_4
int32_t result
int32_t* edi_1

if (ecx_2 != *(arg1 + 0x54))
    edi_1 = ecx_2[4]
label_590040:
    result = (*(*edi_1 + 0x10))(eax_2)
    
    if (result.b == 0)
        result.b = 0
    else
        if (ebx.b != 0)
            int32_t eax_18 = *(*edi_1 + 0x1c)
            arg_8.d = fconvert.s(float.t(arg3))
            long double x87_r6_1 = fconvert.t(0.5)
            arg_4 = fconvert.s(float.t(arg2) * x87_r6_1)
            long double x87_r6_3 = fconvert.t(arg_8.d)
            arg_8.d = fconvert.s(x87_r6_1 * x87_r6_3)
            long double x87_r6_6 = fconvert.t(arg_4)
            arg_8.d = fconvert.s(x87_r6_3 * fconvert.t(-0.5))
            result = eax_18(0, fconvert.s(x87_r6_6), fconvert.s(fconvert.t(arg_8.d)), 
                fconvert.s(x87_r6_6), fconvert.s(fconvert.t(arg_8.d)))
        
        if (ebx.b != 0 && result.b == 0)
            result.b = 0
        else
            result.b = 1
else
    int32_t result_2 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    int32_t var_38_1 = esi_1
    char eax_7 = sub_58f220(arg1 + 8, edx, ecx_2, &result_2)
    
    if (eax_7 != 0)
        edi_1 = (*(**(arg1 + 4) + 0x34))(eax_2)
    
    if (eax_7 == 0 || edi_1 == 0)
        result = result_2
        
        if (result != 0)
            int32_t result_1 = result
            sub_6b4d5b()
        
        result.b = 0
    else
        int32_t result_3 = result_2
        
        if ((*(*edi_1 + 8))(result_3, var_18_1 - result_3) != 0)
            *sub_50fa20(arg1 + 0x50, &arg_8) = edi_1
            int32_t var_4_1 = 0xffffffff
            sub_65ab60(&result_2)
            goto label_590040
        
        (*(*edi_1 + 4))()
        sub_65ab60(&result_2)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
