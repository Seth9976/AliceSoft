// 函数: sub_513d90
// 地址: 0x513d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f2b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* eax_3 = arg_8
int32_t var_34 = 0

if ((eax_3 & 0x18000000) == 0x8000000)
    int32_t var_14_1 = 0
    int32_t** eax_5 = operator new(0x30)
    
    if (eax_5 == 0)
        int32_t var_2c = 0
        struct std::exception::VTable* var_28
        std::exception::exception(&var_28, &var_2c)
        var_28 = &std::bad_alloc::`vftable'{for `std::exception'}
        sub_6b77db(&var_28, 0x771508)
        noreturn
    
    *eax_5 = eax_5
    eax_5[1] = eax_5
    eax_5[2] = eax_5
    eax_5[0xb].b = 1
    *(eax_5 + 0x2d) = 1
    int32_t var_4 = 1
    void var_1c
    sub_5135f0(&var_1c)
    int32_t* eax_9 = *eax_5
    arg_8 = eax_9
    
    if (eax_9 == eax_5)
    label_513e6a:
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        int32_t var_34_1 = 1
        int32_t var_4_1 = 3
        sub_429bc0(&var_1c, &arg_8, *eax_5, eax_5)
        int32_t** var_50_3 = eax_5
    else
        while (eax_9[0xa] != (eax_3 & 0xf))
            sub_4c1d20(&arg_8)
            eax_9 = arg_8
            
            if (eax_9 == eax_5)
                goto label_513e6a
        
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        sub_401180(arg1, 0xffffffff, &eax_9[3], 0)
        int32_t var_34_2 = 1
        int32_t var_4_2 = 2
        sub_429bc0(&var_1c, &arg_8, *eax_5, eax_5)
        int32_t** var_50_5 = eax_5
    
    sub_6b4d5b()
else
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
