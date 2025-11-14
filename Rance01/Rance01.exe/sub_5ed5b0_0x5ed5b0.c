// 函数: sub_5ed5b0
// 地址: 0x5ed5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7196b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_80
int32_t eax_2 = data_78c474 ^ &var_80
int32_t __saved_edi
int32_t var_94 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

for (float* i = &arg1[0x1b]; i != arg2; i = &i[0x1b])
    void* i_1 = i
    float var_7c
    int32_t ecx_2
    int32_t edx_1
    ecx_2, edx_1 = sub_5ec740(i, &var_7c)
    int32_t var_4 = 0
    int32_t j_1
    int32_t j = j_1
    int32_t* var_98_4
    void* eax_9
    float var_78
    int32_t var_70
    void var_6c
    void var_50
    char var_34
    void var_30
    void var_20
    
    if (j s>= arg1[2])
        void* i_2 = &i[-0x1b]
        
        if (j s< i[-0x19])
            do
                *i_1 = fconvert.s(fconvert.t(*i_2))
                *(i_1 + 4) = fconvert.s(fconvert.t(*(i_2 + 4)))
                *(i_1 + 8) = *(i_2 + 8)
                *(i_1 + 0xc) = *(i_2 + 0xc)
                sub_401180(i_1 + 0x10, 0xffffffff, i_2 + 0x10, 0)
                sub_401180(i_1 + 0x2c, 0xffffffff, i_2 + 0x2c, 0)
                *(i_1 + 0x48) = *(i_2 + 0x48)
                sub_5ec870(i_1 + 0x4c, i_2 + 0x4c)
                sub_4b55f0(i_1 + 0x5c, i_2 + 0x5c)
                j = j_1
                i_1 = i_2
                i_2 -= 0x6c
            while (j s< *(i_2 + 8))
        
        *i_1 = fconvert.s(fconvert.t(var_7c))
        *(i_1 + 8) = j
        *(i_1 + 4) = fconvert.s(fconvert.t(var_78))
        *(i_1 + 0xc) = var_70
        sub_401180(i_1 + 0x10, 0xffffffff, &var_6c, 0)
        sub_401180(i_1 + 0x2c, 0xffffffff, &var_50, 0)
        *(i_1 + 0x48) = var_34
        sub_5ec870(i_1 + 0x4c, &var_30)
        var_98_4 = &var_20
        eax_9 = i_1 + 0x5c
    else
        int32_t var_98_2 = var_80
        sub_5edb40(i, edx_1, &i[0x1b], arg1)
        *arg1 = fconvert.s(fconvert.t(var_7c))
        arg1[1] = fconvert.s(fconvert.t(var_78))
        arg1[3] = var_70
        arg1[2] = j_1
        sub_401180(&arg1[4], 0xffffffff, &var_6c, 0)
        sub_401180(&arg1[0xb], 0xffffffff, &var_50, 0)
        arg1[0x12].b = var_34
        sub_5ec870(&arg1[0x13], &var_30)
        var_98_4 = &var_20
        eax_9 = &arg1[0x17]
    sub_4b55f0(eax_9, var_98_4)
    int32_t var_4_1 = 0xffffffff
    result = sub_4329b0(&var_7c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_80)
return result
