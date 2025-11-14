// 函数: sub_4fc890
// 地址: 0x4fc890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714ba0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** arg_4
void** ebp = arg_4
void** ecx = ebp[1]
void** eax_3 = ecx[1]
void** esi = ecx

while (*(eax_3 + 0x21) == 0)
    if (eax_3[3] s>= *arg2)
        esi = eax_3
        eax_3 = *eax_3
    else
        eax_3 = eax_3[2]

if (esi == ebp[1] || *arg2 s< esi[3])
    int32_t var_4 = 0
    int32_t var_20 = *arg2
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    var_4.b = 1
    sub_4fde40(ebp, &arg_4, esi, sub_4fe9c0(ebp, &var_20))
    esi = arg_4
    
    if (var_1c_1 != 0)
        int32_t var_48_2 = var_1c_1
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return &esi[4]
