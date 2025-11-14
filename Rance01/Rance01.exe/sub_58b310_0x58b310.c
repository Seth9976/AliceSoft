// 函数: sub_58b310
// 地址: 0x58b310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* ebx = arg_8
int32_t edx
void** esi = sub_58bb30(arg1, edx, ebx)

if (esi == *(arg1 + 4))
label_58b36d:
    int32_t var_20
    sub_6b05e0(&var_20, ebx)
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    sub_58c760(arg1, &arg_8, esi, sub_58d340(arg1, &var_20))
    int32_t eax_8 = var_20
    esi = arg_8
    
    if (eax_8 != 0)
        int32_t var_38_5 = eax_8
        sub_6b4d5b()
else
    int32_t edx_1 = esi[4]
    
    if (sub_58d3e0(*ebx, edx_1, esi[3], ebx[1], edx_1) != 0)
        goto label_58b36d

fsbase->NtTib.ExceptionList = ExceptionList
return &esi[7]
