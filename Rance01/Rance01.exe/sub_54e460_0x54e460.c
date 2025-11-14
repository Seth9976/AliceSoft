// 函数: sub_54e460
// 地址: 0x54e460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721f50
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

void* result

if (esi == ebp[1] || *arg2 s< esi[3])
    int32_t var_4 = 0
    int32_t var_20 = *arg2
    int32_t* var_1c_1 = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    var_4.b = 1
    sub_54e9b0(sub_4fe9c0(ebp, &var_20), &arg_4, ebp, esi)
    void** ebp_1 = arg_4
    
    if (var_1c_1 != 0)
        sub_405780(var_1c_1, var_18_1)
        int32_t* var_48_2 = var_1c_1
        sub_6b4d5b()
    
    result = &ebp_1[4]
else
    result = &esi[4]

fsbase->NtTib.ExceptionList = ExceptionList
return result
