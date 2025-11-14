// 函数: sub_5eeaa0
// 地址: 0x5eeaa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_13 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71de3a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_6
int32_t eax_2 = data_78c474 ^ &i_6
int32_t __saved_edi
int32_t var_118 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg3
int32_t eax_10
int32_t edx_2
edx_2:eax_10 = sx.q((arg3 - arg5) s/ 0x6c)
int32_t eax_11 = eax_10 - edx_2
void* i = (eax_11 s>> 1) * 0x6c + arg5
void* var_f4 = esi
sub_5ef390(eax_11, edx_2, arg5, i, esi - 0x6c)
void* i_4 = i + 0x6c

for (; arg5 u< i; i -= 0x6c)
    int32_t eax_12 = *(i - 0x64)
    int32_t ecx_3 = *(i + 8)
    
    if (ecx_3 s> eax_12)
        break
    
    if (ecx_3 s< eax_12)
        break

if (i_4 u< esi)
    int32_t ecx_4 = *(i + 8)
    
    do
        int32_t eax_13 = *(i_4 + 8)
        
        if (ecx_4 s> eax_13)
            break
        
        if (ecx_4 s< eax_13)
            break
        
        i_4 += 0x6c
    while (i_4 u< esi)

void* i_1 = i_4
void* i_2 = i

while (true)
    int32_t var_e8
    int32_t var_e4
    int32_t var_e0
    int32_t var_dc
    void var_d8
    void var_bc
    char var_a0
    void var_9c
    void var_8c
    
    for (; i_1 u< esi; i_1 += 0x6c)
        int32_t eax_14 = *(i_1 + 8)
        int32_t ecx_5 = *(i + 8)
        
        if (eax_14 s<= ecx_5)
            if (eax_14 s< ecx_5)
                break
            
            void* i_8 = i_4
            i_4 += 0x6c
            sub_5ee970(i_8, &var_e8)
            int32_t var_4 = 0
            *i_8 = *i_1
            *(i_8 + 4) = *(i_1 + 4)
            *(i_8 + 8) = *(i_1 + 8)
            *(i_8 + 0xc) = *(i_1 + 0xc)
            sub_401180(i_8 + 0x10, 0xffffffff, i_1 + 0x10, 0)
            sub_401180(i_8 + 0x2c, 0xffffffff, i_1 + 0x2c, 0)
            *(i_8 + 0x48) = *(i_1 + 0x48)
            sub_5ec870(i_8 + 0x4c, i_1 + 0x4c)
            sub_4b55f0(i_8 + 0x5c, i_1 + 0x5c)
            int32_t edx_4 = var_e8
            *(i_1 + 4) = var_e4
            *i_1 = edx_4
            *(i_1 + 8) = var_e0
            *(i_1 + 0xc) = var_dc
            sub_401180(i_1 + 0x10, 0xffffffff, &var_d8, 0)
            sub_401180(i_1 + 0x2c, 0xffffffff, &var_bc, 0)
            *(i_1 + 0x48) = var_a0
            sub_5ec870(i_1 + 0x4c, &var_9c)
            sub_4b55f0(i_1 + 0x5c, &var_8c)
            int32_t var_4_1 = 0xffffffff
            sub_4329b0(&var_e8)
            esi = var_f4
    
    void* i_7 = i_2
    bool cond:2_1 = i_7 != arg5
    
    if (i_7 u> arg5)
        void* i_12 = i_7 - 0x64
        i_6 = i_12
        
        do
            int32_t eax_26 = *i_12
            int32_t ecx_14 = *(i + 8)
            
            if (ecx_14 s<= eax_26)
                if (ecx_14 s< eax_26)
                    break
                
                i -= 0x6c
                sub_5ee970(i, &var_e8)
                int32_t var_4_2 = 1
                *i = *(i_12 - 8)
                *(i + 4) = *(i_12 - 4)
                *(i + 8) = *i_12
                *(i + 0xc) = *(i_12 + 4)
                sub_401180(i + 0x10, 0xffffffff, i_12 + 8, 0)
                sub_401180(i + 0x2c, 0xffffffff, i_12 + 0x24, 0)
                *(i + 0x48) = *(i_12 + 0x40)
                sub_5ec870(i + 0x4c, i_12 + 0x44)
                sub_4b55f0(i + 0x5c, i_12 + 0x54)
                int32_t edx_8 = var_e8
                *(i_12 - 4) = var_e4
                *(i_12 - 8) = edx_8
                *i_12 = var_e0
                *(i_12 + 4) = var_dc
                sub_401180(i_12 + 8, 0xffffffff, &var_d8, 0)
                sub_401180(i_12 + 0x24, 0xffffffff, &var_bc, 0)
                *(i_12 + 0x40) = var_a0
                sub_5ec870(i_12 + 0x44, &var_9c)
                sub_4b55f0(i_12 + 0x54, &var_8c)
                int32_t var_4_3 = 0xffffffff
                sub_4329b0(&var_e8)
                i_12 = i_6
            
            i_7 = i_2 - 0x6c
            i_12 -= 0x6c
            i_2 = i_7
            i_6 = i_12
        while (arg5 u< i_7)
        
        esi = var_f4
        cond:2_1 = i_7 != arg5
    
    int32_t* var_11c_20
    int32_t* i_11
    
    if (cond:2_1)
        i_2 = i_7 - 0x6c
        
        if (i_1 != esi)
            int32_t var_7c
            sub_5ee970(i_1, &var_7c)
            int32_t var_4_11 = 6
            *i_1 = *i_2
            *(i_1 + 4) = *(i_2 + 4)
            *(i_1 + 8) = *(i_2 + 8)
            *(i_1 + 0xc) = *(i_2 + 0xc)
            sub_401180(i_1 + 0x10, 0xffffffff, i_2 + 0x10, 0)
            sub_401180(i_1 + 0x2c, 0xffffffff, i_2 + 0x2c, 0)
            *(i_1 + 0x48) = *(i_2 + 0x48)
            sub_5ec870(i_1 + 0x4c, i_2 + 0x4c)
            sub_4b55f0(i_1 + 0x5c, i_2 + 0x5c)
            *i_2 = var_7c
            int32_t var_78
            *(i_2 + 4) = var_78
            int32_t var_70
            *(i_2 + 0xc) = var_70
            int32_t var_74
            *(i_2 + 8) = var_74
            void var_6c
            sub_401180(i_2 + 0x10, 0xffffffff, &var_6c, 0)
            void var_50
            sub_401180(i_2 + 0x2c, 0xffffffff, &var_50, 0)
            char var_34
            *(i_2 + 0x48) = var_34
            void var_30
            sub_5ec870(i_2 + 0x4c, &var_30)
            void var_20
            sub_4b55f0(i_2 + 0x5c, &var_20)
            int32_t var_4_12 = 0xffffffff
            sub_4329b0(&var_7c)
            esi = var_f4
            i_1 += 0x6c
            continue
        else
            i -= 0x6c
            
            if (i_7 - 0x6c != i)
                sub_5ee970(i_7 - 0x6c, &var_e8)
                int32_t var_4_7 = 4
                *i_2 = *i
                *(i_2 + 4) = *(i + 4)
                *(i_2 + 8) = *(i + 8)
                *(i_2 + 0xc) = *(i + 0xc)
                sub_401180(i_2 + 0x10, 0xffffffff, i + 0x10, 0)
                sub_401180(i_2 + 0x2c, 0xffffffff, i + 0x2c, 0)
                *(i_2 + 0x48) = *(i + 0x48)
                sub_5ec870(i_2 + 0x4c, i + 0x4c)
                sub_4b55f0(i_2 + 0x5c, i + 0x5c)
                *i = var_e8
                *(i + 4) = var_e4
                *(i + 0xc) = var_dc
                *(i + 8) = var_e0
                sub_401180(i + 0x10, 0xffffffff, &var_d8, 0)
                sub_401180(i + 0x2c, 0xffffffff, &var_bc, 0)
                *(i + 0x48) = var_a0
                sub_5ec870(i + 0x4c, &var_9c)
                sub_4b55f0(i + 0x5c, &var_8c)
                int32_t var_4_8 = 0xffffffff
                sub_4329b0(&var_e8)
            
            i_4 -= 0x6c
            sub_5ee970(i, &var_e8)
            int32_t var_4_9 = 5
            *i = *i_4
            *(i + 4) = *(i_4 + 4)
            *(i + 8) = *(i_4 + 8)
            *(i + 0xc) = *(i_4 + 0xc)
            sub_401180(i + 0x10, 0xffffffff, i_4 + 0x10, 0)
            sub_401180(i + 0x2c, 0xffffffff, i_4 + 0x2c, 0)
            *(i + 0x48) = *(i_4 + 0x48)
            sub_5ec870(i + 0x4c, i_4 + 0x4c)
            i_6 = i_4 + 0x5c
            sub_4b55f0(i + 0x5c, i_4 + 0x5c)
            *i_4 = var_e8
            *(i_4 + 4) = var_e4
            *(i_4 + 0xc) = var_dc
            *(i_4 + 8) = var_e0
            sub_401180(i_4 + 0x10, 0xffffffff, &var_d8, 0)
            sub_401180(i_4 + 0x2c, 0xffffffff, &var_bc, 0)
            *(i_4 + 0x48) = var_a0
            sub_5ec870(i_4 + 0x4c, &var_9c)
            i_11 = i_6
            var_11c_20 = &var_8c
    else
        if (i_1 == esi)
            *arg4 = i
            arg4[1] = i_4
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_6b4885(eax_2 ^ &i_6)
            return arg4
        
        if (i_4 != i_1)
            sub_5ee970(i, &var_e8)
            int32_t var_4_4 = 2
            *i = *i_4
            *(i + 4) = *(i_4 + 4)
            *(i + 8) = *(i_4 + 8)
            *(i + 0xc) = *(i_4 + 0xc)
            sub_401180(i + 0x10, 0xffffffff, i_4 + 0x10, 0)
            sub_401180(i + 0x2c, 0xffffffff, i_4 + 0x2c, 0)
            *(i + 0x48) = *(i_4 + 0x48)
            sub_5ec870(i + 0x4c, i_4 + 0x4c)
            sub_4b55f0(i + 0x5c, i_4 + 0x5c)
            int32_t edx_13 = var_e8
            *(i_4 + 4) = var_e4
            *i_4 = edx_13
            *(i_4 + 8) = var_e0
            *(i_4 + 0xc) = var_dc
            sub_401180(i_4 + 0x10, 0xffffffff, &var_d8, 0)
            sub_401180(i_4 + 0x2c, 0xffffffff, &var_bc, 0)
            *(i_4 + 0x48) = var_a0
            sub_5ec870(i_4 + 0x4c, &var_9c)
            sub_4b55f0(i_4 + 0x5c, &var_8c)
            int32_t var_4_5 = 0xffffffff
            sub_4329b0(&var_e8)
        
        void* i_3 = i
        int32_t* i_5 = i_1
        i_4 += 0x6c
        i_6 = i_3
        i += 0x6c
        i_1 += 0x6c
        sub_5ee970(i_3, &var_e8)
        int32_t* i_9 = i_6
        int32_t var_4_6 = 3
        *i_9 = *i_5
        i_9[1] = i_5[1]
        i_9[2] = i_5[2]
        i_9[3] = i_5[3]
        sub_401180(&i_9[4], 0xffffffff, &i_5[4], 0)
        sub_401180(i_6 + 0x2c, 0xffffffff, &i_5[0xb], 0)
        void* i_10 = i_6
        *(i_10 + 0x48) = i_5[0x12].b
        sub_5ec870(i_10 + 0x4c, &i_5[0x13])
        sub_4b55f0(i_6 + 0x5c, &i_5[0x17])
        int32_t edx_18 = var_e8
        i_5[1] = var_e4
        *i_5 = edx_18
        i_5[2] = var_e0
        i_5[3] = var_dc
        sub_401180(&i_5[4], 0xffffffff, &var_d8, 0)
        sub_401180(&i_5[0xb], 0xffffffff, &var_bc, 0)
        i_5[0x12].b = var_a0
        sub_5ec870(&i_5[0x13], &var_9c)
        i_11 = &i_5[0x17]
        var_11c_20 = &var_8c
    
    sub_4b55f0(i_11, var_11c_20)
    int32_t var_4_10 = 0xffffffff
    sub_4329b0(&var_e8)
    esi = var_f4
