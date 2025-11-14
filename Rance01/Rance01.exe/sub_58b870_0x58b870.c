// 函数: sub_58b870
// 地址: 0x58b870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_716ab8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg1
void** edi = ebx

if (*(ebx + 0x21) == 0)
    do
        sub_58b870(edi[2])
        edi = *edi
        arg1 = &ebx[4]
        int32_t var_4 = 0
        int32_t* eax_4 = ebx[5]
        void var_10
        sub_4365a0(&ebx[4], &var_10, *eax_4, eax_4)
        int32_t var_4_1 = 0xffffffff
        int32_t var_2c_3 = ebx[5]
        sub_6b4d5b()
        void** var_30_2 = ebx
        result = sub_6b4d5b()
        ebx = edi
    while (*(edi + 0x21) == 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
