// 函数: sub_519330
// 地址: 0x519330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_72671b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_10c
int32_t eax_2 = data_78c474 ^ &var_10c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float result

if (*(arg1 + 0xc) != 0 && *(arg1 + 0x10) != 0 && arg2 == 6 && *(arg1 + 0x14) != 0)
    struct sealengine::CDrawParam::VTable* var_100
    sub_4b97d0(&var_100)
    int32_t var_c_1 = 0
    void var_fc
    __builtin_memcpy(&var_fc, arg1 + 0x18, 0x40)
    int32_t var_bc_1 = 0
    (*(*arg4 + 0x84))(1)
    (*(*arg4 + 0x94))(1)
    (*(*arg4 + 0x98))(0)
    (*(*arg4 + 0x8c))(0, 2)
    (*(*arg4 + 0x90))(0, 2)
    float var_90_1 = fconvert.s(fconvert.t(0.5f))
    
    if (sub_509e40(arg3, &var_100).b != 0)
        if ((*(**(arg1 + 0xc) + 0x20))(eax_4).b == 0)
            result.b = 0
        else if ((*(**(arg1 + 0x10) + 0x28))().b == 0)
            result.b = 0
        else
            void* ebx_1 = **(arg1 + 0xc)
            int32_t* edi_1 = *(arg1 + 0xc)
            int32_t eax_16
            int32_t edx_9
            edx_9:eax_16 = muls.dp.d(0x55555556, (*(**(arg1 + 0x10) + 0x20))())
            int32_t eax_18 = (*(*edi_1 + 0x1c))(0, (edx_9 u>> 0x1f) + edx_9)
            *(arg1 + 0xc)
            result.b = (*(ebx_1 + 0x28))(0, 0, eax_18).b != 0
    else
        result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_10c)
return result
