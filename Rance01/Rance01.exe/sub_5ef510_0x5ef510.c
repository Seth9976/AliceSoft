// 函数: sub_5ef510
// 地址: 0x5ef510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7196b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = data_78c474 ^ &var_80
int32_t __saved_edi
int32_t var_94 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = (arg3 - arg4) s/ 0x6c

if (i s> 1)
    int32_t* edi_1 = arg3 - 0x64
    var_80 = 0x64 - arg4
    
    do
        void var_7c
        sub_5ee970(&edi_1[-2], &var_7c)
        int32_t var_4 = 0
        edi_1[-2] = *arg4
        edi_1[-1] = arg4[1]
        *edi_1 = arg4[2]
        edi_1[1] = arg4[3]
        sub_401180(&edi_1[2], 0xffffffff, &arg4[4], 0)
        sub_401180(&edi_1[9], 0xffffffff, &arg4[0xb], 0)
        edi_1[0x10].b = arg4[0x12].b
        sub_5ec870(&edi_1[0x11], &arg4[0x13])
        sub_4b55f0(&edi_1[0x15], &arg4[0x17])
        int32_t eax_17
        int32_t edx_4
        edx_4:eax_17 = muls.dp.d(0x4bda12f7, edi_1 + 0xfffffff8 - arg4)
        int32_t eax_20 = (edi_1 + 0xfffffff8 - arg4) s/ 0x6c
        sub_5ef9b0(eax_20, edx_4 s>> 5, 0, arg4, eax_20, &var_7c)
        int32_t var_4_1 = 0xffffffff
        sub_4329b0(&var_7c)
        edi_1 -= 0x6c
        i = (var_80 + edi_1) s/ 0x6c
    while (i s> 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_80)
return i
