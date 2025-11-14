// 函数: sub_611f00
// 地址: 0x611f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72356d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_168
int32_t eax_2 = data_78c474 ^ &var_168
int32_t __saved_edi
int32_t var_17c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_401270(arg1, 5, 0x734d98)
int32_t var_4 = 0
int32_t var_15c
sub_402000(arg1, sub_61b650(arg3, &var_15c), 0, 0xffffffff)
int32_t var_4_1 = 0xffffffff
int32_t var_148

if (var_148 u>= 0x10)
    int32_t var_180_1 = var_15c
    sub_6b4d5b()

sub_402cb0(arg1, 0x734da0, 1)
sub_402000(arg1, &arg3[1], 0, 0xffffffff)
sub_402cb0(arg1, 0x734da4, 3)
float var_164
float var_160
void var_140
int32_t var_110
int32_t* result

switch (arg3[0xd] - 0xa)
    case 0
        char eax_12
        char ecx_2
        eax_12, ecx_2 = sub_612ee0(arg2, arg3, &var_164)
        
        if (eax_12 == 0)
            result = sub_405e30(ecx_2, 0x734dac, arg1)
        else
            float var_180_3 = var_164
            int32_t var_4_2 = 1
            sub_402000(arg1, sub_4104a0(0x734da8), 0, 0xffffffff)
            void var_2c
            result = sub_401110(&var_2c)
    case 1
        char eax_15
        char ecx_4
        eax_15, ecx_4 = sub_612ee0(arg2, arg3, &var_164)
        
        if (eax_15 == 0)
            result = sub_405e30(ecx_4, U"?""??", arg1)
        else
            int32_t* var_184_2
            var_184_2.q = fconvert.d(fconvert.t(var_164))
            int32_t var_4_3 = 2
            sub_402000(arg1, sub_4104a0(0x734db0), 0, 0xffffffff)
            void var_b8
            result = sub_401110(&var_b8)
    case 2
        char eax_18
        char ecx_6
        eax_18, ecx_6 = sub_612ee0(arg2, arg3, &var_164)
        
        if (eax_18 == 0)
            result = sub_405e30(ecx_6, &(*U"?""??")[4], arg1)
        else
            int32_t var_148_1 = 0xf
            int32_t var_14c_1 = 0
            var_15c.b = 0
            int32_t var_4_4 = 3
            char eax_21
            char ecx_7
            eax_21, ecx_7 = sub_612e90(arg2, var_164, &var_15c)
            
            if (eax_21 == 0)
                sub_405e30(ecx_7, &(*U"?""??")[3], arg1)
                result = sub_401110(&var_15c)
            else
                sub_405e30(ecx_7, &(*U"?""??")[1], arg1)
                sub_405e30(sub_402000(arg1, &var_15c, 0, 0xffffffff), &(*U"?""??")[2], arg1)
                result = sub_401110(&var_15c)
    case 3
        char eax_25
        char ecx_12
        eax_25, ecx_12 = sub_612ee0(arg2, arg3, &var_164)
        
        if (eax_25 == 0)
            result = sub_405e30(ecx_12, &(*U"????")[1], arg1)
        else
            result = sub_6133d0(arg2, arg1, var_164)
    case 4, 5, 6, 7
        char eax_29
        char ecx_17
        eax_29, ecx_17 = sub_612ee0(arg2, arg3, &var_164)
        
        if (eax_29 == 0)
            result = sub_405e30(ecx_17, &(*U"????")[3], arg1)
        else
            result = sub_613860(arg2, var_164, arg3[0xd], arg1)
    case 8
        sub_6125b0(arg3, &var_140)
        int32_t var_4_5 = 4
        int32_t var_110_1 = var_110 + 1
        char eax_31
        char ecx_21
        eax_31, ecx_21 = sub_612ee0(arg2, arg3, &var_160)
        char eax_33
        
        if (eax_31 != 0)
            eax_33, ecx_21 = sub_612ee0(arg2, &var_140, &var_164)
        
        if (eax_31 == 0 || eax_33 == 0)
            sub_405e30(ecx_21, 0x734e04, arg1)
            result = sub_6074b0(&var_140)
        else
            float ebp_1 = var_164
            float edi_1 = var_160
            char eax_35
            char ecx_22
            int32_t* esi_1
            eax_35, ecx_22, esi_1 = sub_613060(arg2, edi_1, ebp_1, &var_160)
            
            if (eax_35 == 0)
                sub_405e30(ecx_22, 0x734e00, esi_1)
                result = sub_6074b0(&var_140)
            else
                float var_180_27 = var_160
                float var_184_14 = ebp_1
                float var_188_6 = edi_1
                var_4_5.b = 5
                sub_402000(esi_1, sub_4104a0("Pointer(%d, %d) -> %d"), 0, 0xffffffff)
                void var_80
                sub_401110(&var_80)
                result = sub_6074b0(&var_140)
    case 9
        sub_6125b0(arg3, &var_140)
        int32_t var_4_6 = 6
        int32_t var_110_2 = var_110 + 1
        char eax_38
        char ecx_26
        eax_38, ecx_26 = sub_612ee0(arg2, arg3, &var_164)
        char eax_40
        
        if (eax_38 != 0)
            eax_40, ecx_26 = sub_612ee0(arg2, &var_140, &var_160)
        
        if (eax_38 == 0 || eax_40 == 0)
            sub_405e30(ecx_26, 0x734e24, arg1)
            result = sub_6074b0(&var_140)
        else
            float ebp_2 = var_160
            float edi_2 = var_164
            char eax_42
            char ecx_27
            int32_t* esi_5
            eax_42, ecx_27, esi_5 = sub_613060(arg2, edi_2, ebp_2, &var_160)
            
            if (eax_42 == 0)
                sub_405e30(ecx_27, 0x734e20, esi_5)
                result = sub_6074b0(&var_140)
            else
                float var_184_17
                var_184_17.q = fconvert.d(fconvert.t(var_160))
                float var_188_9 = ebp_2
                float var_18c_1 = edi_2
                var_4_6.b = 7
                sub_402000(esi_5, sub_4104a0("Pointer(%d, %d) -> %f"), 0, 0xffffffff)
                void var_48
                sub_401110(&var_48)
                result = sub_6074b0(&var_140)
    case 0xa
        char eax_45
        char ecx_29
        eax_45, ecx_29 = sub_612ee0(arg2, arg3, &var_160)
        
        if (eax_45 == 0)
            result = sub_405e30(ecx_29, &(*U"""??")[3], arg1)
        else
            float ebp_3 = var_160
            float var_180_37 = ebp_3
            int32_t var_4_7 = 8
            sub_402000(arg1, sub_4104a0("Pointer(%d) -> "), 0, 0xffffffff)
            void var_9c
            sub_401110(&var_9c)
            int32_t var_148_2 = 0xf
            int32_t var_14c_2 = 0
            var_15c.b = 0
            int32_t var_4_8 = 9
            char eax_48
            char ecx_31
            eax_48, ecx_31 = sub_612e90(arg2, ebp_3, &var_15c)
            
            if (eax_48 == 0)
                sub_405e30(ecx_31, &(*U"""??")[2], arg1)
                result = sub_401110(&var_15c)
            else
                sub_405e30(ecx_31, U"""??", arg1)
                sub_405e30(sub_402000(arg1, &var_15c, 0, 0xffffffff), &(*U"""??")[1], arg1)
                result = sub_401110(&var_15c)
    case 0xb
        char eax_50
        char ecx_35
        eax_50, ecx_35 = sub_612ee0(arg2, arg3, &var_160)
        
        if (eax_50 == 0)
            result = sub_405e30(ecx_35, 0x734e58, arg1)
        else
            float ebp_4 = var_160
            float var_180_43 = ebp_4
            int32_t var_4_9 = 0xa
            sub_402000(arg1, sub_4104a0("Pointer(%d) -> "), 0, 0xffffffff)
            int32_t var_4_10 = 0xffffffff
            void var_64
            sub_401110(&var_64)
            result = sub_6133d0(arg2, arg1, ebp_4)
    case 0x25
        char eax_23
        char ecx_11
        eax_23, ecx_11 = sub_612ee0(arg2, arg3, &var_164)
        
        if (eax_23 == 0)
            result = sub_405e30(ecx_11, U"????", arg1)
        else
            int128_t* edx_2 = "true"
            
            if (var_164 == 0)
                edx_2 = "false"
            
            result = sub_405e30(ecx_11, edx_2, arg1)
    case 0x35
        char eax_27
        char ecx_15
        eax_27, ecx_15 = sub_612ee0(arg2, arg3, &var_164)
        
        if (eax_27 == 0)
            result = sub_405e30(ecx_15, &(*U"????")[2], arg1)
        else
            result = sub_613c60(arg1, var_164, arg2)
    default
        result = sub_402cb0(arg1, 0x734e5c, 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_168)
return result
