// 函数: sub_519f30
// 地址: 0x519f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebp = arg_4
int32_t* ecx = *ebp

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *ebp = 0

ebp[8].b = 0
float* result = (*(*arg1 + 0x30))(eax_2)
*ebp = result

if (result == 0)
    result.b = 0
else
    int32_t var_1c = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    int32_t* edi_1 = &var_1c
    arg_4 = nullptr
    sub_61b5a0(&arg_4, edi_1)
    arg_4 = 4
    sub_61b5a0(&arg_4, edi_1)
    arg_4 = 6
    sub_61b5a0(&arg_4, edi_1)
    int32_t ebx_1 = var_1c
    bool cond:0_1
    
    if ((*(**ebp + 8))(4, ebx_1, (var_18_1 - ebx_1) s>> 2, 0).b != 0)
        if (sub_51a100(arg6, ebp, fconvert.s(fconvert.t(arg2)), fconvert.s(fconvert.t(arg3)), 
                fconvert.s(fconvert.t(arg4)), fconvert.s(fconvert.t(arg5)), 
                fconvert.s(fconvert.t(arg7)), fconvert.s(fconvert.t(arg8))).b == 0)
            cond:0_1 = ebx_1 == 0
            goto label_519fe9
        
        ebp[1] = fconvert.s(fconvert.t(arg2))
        ebp[5] = arg6
        ebp[8].b = 1
        ebp[2] = fconvert.s(fconvert.t(arg3))
        ebp[3] = fconvert.s(fconvert.t(arg4))
        ebp[4] = fconvert.s(fconvert.t(arg5))
        ebp[6] = fconvert.s(fconvert.t(arg7))
        ebp[7] = fconvert.s(fconvert.t(arg8))
        
        if (ebx_1 != 0)
            int32_t var_38_3 = ebx_1
            sub_6b4d5b()
        
        result.b = 1
    else
        cond:0_1 = ebx_1 == 0
    label_519fe9:
        
        if (cond:0_1)
            result.b = 0
        else
            int32_t var_38_1 = ebx_1
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
