// 函数: sub_4fc960
// 地址: 0x4fc960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714b70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_44 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ecx = arg3[1]
void** eax_3 = ecx[1]
void** esi = ecx

while (*(eax_3 + 0x21) == 0)
    if (eax_3[3] s>= *arg2)
        esi = eax_3
        eax_3 = *eax_3
    else
        eax_3 = eax_3[2]

if (esi == arg3[1] || *arg2 s< esi[3])
    int32_t var_30 = 0
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    int32_t var_4 = 0
    int32_t var_20 = *arg2
    int32_t var_1c = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    sub_4fd080(&var_1c)
    var_1c = 0
    int32_t var_18_2 = 0
    int32_t var_14_2 = 0
    var_30 = 0
    int32_t var_2c_2 = 0
    int32_t var_28_2 = 0
    var_4.b = 1
    void** var_34
    sub_4fdf70(arg3, sub_4fea60(&var_20, arg3), &var_34, esi)
    esi = var_34
    var_4.b = 0
    sub_4fd080(&var_1c)
    int32_t var_4_1 = 0xffffffff
    sub_4fd080(&var_30)

fsbase->NtTib.ExceptionList = ExceptionList
return &esi[4]
