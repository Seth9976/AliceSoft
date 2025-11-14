// 函数: sub_403ac0
// 地址: 0x403ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ba70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_90
int32_t eax_2 = data_78c474 ^ &var_90
int32_t __saved_edi
int32_t var_a4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg2
int32_t* result

if (ecx s>= arg5)
    result.b = 0
else
    int32_t var_54_1 = 0xf
    int32_t var_58_1 = 0
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t var_78
    __builtin_memset(&var_78, 0, 0x11)
    int32_t var_4 = 0
    void* edx = *arg4
    uint32_t var_88_1
    
    if (arg4[1] - edx s>= ecx + 4)
        uint32_t eax_13 = ((zx.d(*(edx + ecx + 3)) << 8 | zx.d(*(edx + ecx + 2))) << 8
            | zx.d(*(edx + ecx + 1))) << 8 | zx.d(*(edx + ecx))
        *arg2 = ecx + 4
        var_88_1 = eax_13
    else
        var_88_1 = 0
    
    void* ecx_2 = *arg4
    int32_t edx_1 = *arg2
    uint32_t var_8c_1
    
    if (arg4[1] - ecx_2 s>= edx_1 + 4)
        uint32_t eax_22 = ((zx.d(*(ecx_2 + edx_1 + 3)) << 8 | zx.d(*(ecx_2 + edx_1 + 2))) << 8
            | zx.d(*(ecx_2 + edx_1 + 1))) << 8 | zx.d(*(ecx_2 + edx_1))
        *arg2 = edx_1 + 4
        var_8c_1 = eax_22
    else
        var_8c_1 = 0
    
    if (arg3[0x12] + *arg2 + var_8c_1 s<= arg5)
        int32_t ebx_3 = 0
        
        if (var_88_1 s> 0)
            do
                int32_t* eax_25
                eax_25.b = (*arg2 + ebx_3)[*arg4]
                sub_401f60(&var_4c, eax_25.b)
                ebx_3 += 1
            while (ebx_3 s< var_88_1)
        
        *arg2 += var_8c_1
        int32_t ecx_7 = *arg2
        void* edx_5 = *arg4
        uint32_t eax_28
        
        if (arg4[1] - edx_5 s>= ecx_7 + 4)
            eax_28 = ((zx.d(*(edx_5 + ecx_7 + 3)) << 8 | zx.d(*(edx_5 + ecx_7 + 2))) << 8
                | zx.d(*(edx_5 + ecx_7 + 1))) << 8 | zx.d(*(edx_5 + ecx_7))
            *arg2 = ecx_7 + 4
        else
            eax_28 = 0
        
        void* ecx_9 = *arg4
        int32_t edx_6 = *arg2
        uint32_t eax_37
        
        if (arg4[1] - ecx_9 s>= edx_6 + 4)
            eax_37 = ((zx.d(*(ecx_9 + edx_6 + 3)) << 8 | zx.d(*(ecx_9 + edx_6 + 2))) << 8
                | zx.d(*(ecx_9 + edx_6 + 1))) << 8 | zx.d(*(ecx_9 + edx_6))
            *arg2 = edx_6 + 4
        else
            eax_37 = 0
        
        void* ecx_11 = *arg4
        int32_t edx_7 = *arg2
        uint32_t eax_46
        
        if (arg4[1] - ecx_11 s>= edx_7 + 4)
            eax_46 = ((zx.d(*(ecx_11 + edx_7 + 3)) << 8 | zx.d(*(ecx_11 + edx_7 + 2))) << 8
                | zx.d(*(ecx_11 + edx_7 + 1))) << 8 | zx.d(*(ecx_11 + edx_7))
            *arg2 = edx_7 + 4
        else
            eax_46 = 0
        
        void* ecx_13 = *arg4
        int32_t edx_8 = *arg2
        var_78 = eax_46 + arg6
        uint32_t eax_56
        
        if (arg4[1] - ecx_13 s>= edx_8 + 4)
            eax_56 = ((zx.d(*(ecx_13 + edx_8 + 3)) << 8 | zx.d(*(ecx_13 + edx_8 + 2))) << 8
                | zx.d(*(ecx_13 + edx_8 + 1))) << 8 | zx.d(*(ecx_13 + edx_8))
            *arg2 = edx_8 + 4
        else
            eax_56 = 0
        
        char var_68
        sub_401180(&var_68, 0xffffffff, arg1, 0)
        char var_2c
        sub_4042e0(&var_4c, &var_2c)
        var_4.b = 1
        void* eax_63 = sub_404ff0(&arg3[0x1d], &var_2c)
        *eax_63 = var_78
        *(eax_63 + 4) = eax_56
        *(eax_63 + 8) = eax_28
        *(eax_63 + 0xc) = eax_37
        sub_401180(eax_63 + 0x10, 0xffffffff, &var_68, 0)
        sub_401180(eax_63 + 0x2c, 0xffffffff, &var_4c, 0)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_a8_3 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_38_1 u>= 0x10)
            int32_t var_a8_4 = var_4c.d
            sub_6b4d5b()
        
        int32_t var_38_2 = 0xf
        int32_t var_3c_2 = 0
        var_4c = 0
        
        if (var_54_1 u>= 0x10)
            int32_t var_a8_5 = var_68.d
            sub_6b4d5b()
        
        result.b = 1
    else
        sub_403e40(&var_78)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_90)
return result
