// 函数: sub_4e4520
// 地址: 0x4e4520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_720128
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_esi
int32_t var_64 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = arg2 + 8

if (*(arg2 + 0x1c) u>= 0x10)
    eax_5 = *eax_5

int32_t* var_68 = eax_5
char* eax_6 = sub_4104a0(0x755648)
int32_t var_c_1 = 0
int128_t* edx = *(arg1 + 8)
var_58 = *(eax_6 + 0x10)
int32_t ecx_1 = *(eax_6 + 0x14)
char* esi

if (ecx_1 u< 0x10)
    esi = eax_6
else
    esi = *eax_6

if (ecx_1 u>= 0x10)
    eax_6 = *eax_6

float var_68_1 = var_58
sub_4102d0(arg1 + 4, edx, eax_6, &esi[var_58])
int32_t var_c_2 = 0xffffffff
int32_t var_54
int32_t var_40

if (var_40 u>= 0x10)
    int32_t var_68_2 = var_54
    sub_6b4d5b()

bool result

if (sub_4e4f20(arg1, arg2) != 0)
    if (sub_4e5070(arg1, arg2) == 0)
        result = false
    else if (sub_4e5190(arg1, arg2) == 0)
        result = false
    else
        sub_402be0(&var_54, 0x755660)
        int32_t var_c_3 = 1
        sub_4e67d0(*(arg2 + 0x130), arg1, &var_54)
        int32_t var_c_4 = 0xffffffff
        
        if (var_40 u>= 0x10)
            int32_t var_68_7 = var_54
            sub_6b4d5b()
        
        int32_t var_c_5 = 2
        char* var_68_8 = sub_402be0(&var_54, 0x755678)
        var_58 = fconvert.s(fconvert.t(*(arg2 + 0x2c)))
        sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
        int32_t var_c_6 = 0xffffffff
        
        if (var_40 u>= 0x10)
            int32_t var_68_10 = var_54
            sub_6b4d5b()
        
        int32_t var_c_7 = 3
        char* var_68_11 = sub_402be0(&var_54, 0x755684)
        var_58 = fconvert.s(fconvert.t(*(arg2 + 0x74)))
        sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
        int32_t var_c_8 = 0xffffffff
        
        if (var_40 u>= 0x10)
            int32_t var_68_13 = var_54
            sub_6b4d5b()
        
        int32_t var_c_9 = 4
        char* var_68_14 = sub_402be0(&var_54, 0x755690)
        var_58 = fconvert.s(fconvert.t(*(arg2 + 0x78)))
        sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
        int32_t var_c_10 = 0xffffffff
        
        if (var_40 u>= 0x10)
            int32_t var_68_16 = var_54
            sub_6b4d5b()
        
        if (sub_4e52c0(arg1, arg2) == 0)
            result = false
        else if (sub_4e5720(arg1, arg2) == 0)
            result = false
        else if (sub_4e59b0(arg1, arg2) == 0)
            result = false
        else if (sub_4e5c40(arg1, arg2) == 0)
            result = false
        else if (sub_4e6010(arg1, arg2) == 0)
            result = false
        else if (sub_4e6400(arg1, arg2) == 0)
            result = false
        else
            int32_t var_c_11 = 5
            char* var_68_23 = sub_402be0(&var_54, 0x75569c)
            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x38)))
            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
            int32_t var_c_12 = 0xffffffff
            sub_401110(&var_54)
            int32_t var_c_13 = 6
            char* var_68_25 = sub_402be0(&var_54, 0x7556a8)
            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x3c)))
            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
            int32_t var_c_14 = 0xffffffff
            sub_401110(&var_54)
            int32_t var_c_15 = 7
            char* var_68_27 = sub_402be0(&var_54, 0x7556b4)
            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x40)))
            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
            int32_t var_c_16 = 0xffffffff
            sub_401110(&var_54)
            int32_t var_c_17 = 8
            char* var_68_29 = sub_402be0(&var_54, 0x7556c4)
            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x44)))
            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
            int32_t var_c_18 = 0xffffffff
            sub_401110(&var_54)
            char* ecx_24 = sub_402be0(&var_54, 0x7556d4)
            int32_t var_c_19 = 9
            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x48)))
            char* var_68_31 = ecx_24
            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
            int32_t var_c_20 = 0xffffffff
            sub_401110(&var_54)
            int32_t var_c_21 = 0xa
            char* var_68_33 = sub_402be0(&var_54, 0x7556e4)
            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x4c)))
            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
            int32_t var_c_22 = 0xffffffff
            sub_401110(&var_54)
            
            if (sub_4e6960(arg1, arg2) == 0)
                result = false
            else if (sub_4e6c60(arg1, arg2) == 0)
                result = false
            else
                int32_t var_c_23 = 0xb
                char* var_68_37 = sub_402be0(&var_54, 0x7556f4)
                sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(*(arg2 + 0x150))))
                int32_t var_c_24 = 0xffffffff
                sub_401110(&var_54)
                
                if (sub_4e6d80(arg1, arg2) == 0)
                    result = false
                else
                    sub_402be0(&var_54, 0x755710)
                    int32_t var_c_25 = 0xc
                    sub_4e67d0(*(arg2 + 0x154), arg1, &var_54)
                    int32_t var_c_26 = 0xffffffff
                    sub_401110(&var_54)
                    
                    if (sub_4e6e50(arg1, arg2) == 0)
                        result = false
                    else
                        sub_402be0(&var_54, 0x755720)
                        int32_t var_c_27 = 0xd
                        sub_4e67d0(*(arg2 + 0x30), arg1, &var_54)
                        int32_t var_c_28 = 0xffffffff
                        sub_401110(&var_54)
                        int32_t var_c_29 = 0xe
                        char* var_68_43 = sub_402be0(&var_54, 0x755728)
                        var_58 = fconvert.s(fconvert.t(*(arg2 + 0x88)))
                        sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                        int32_t var_c_30 = 0xffffffff
                        sub_401110(&var_54)
                        int32_t var_c_31 = 0xf
                        char* var_68_45 = sub_402be0(&var_54, 0x755748)
                        var_58 = fconvert.s(fconvert.t(*(arg2 + 0x8c)))
                        sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                        int32_t var_c_32 = 0xffffffff
                        sub_401110(&var_54)
                        
                        if (sub_4e70a0(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e7330(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e75c0(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e7850(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e7ae0(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e7d70(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e8000(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e8290(arg1, arg2) == 0)
                            result = false
                        else if (sub_4e8520(arg1, arg2) == 0)
                            result = false
                        else
                            int32_t var_c_33 = 0x10
                            char* var_68_56 = sub_402be0(&var_54, 0x755768)
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(*(arg2 + 0x144))))
                            int32_t var_c_34 = 0xffffffff
                            sub_401110(&var_54)
                            int32_t var_c_35 = 0x11
                            char* var_68_58 = sub_402be0(&var_54, 0x755778)
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(*(arg2 + 0x148))))
                            int32_t var_c_36 = 0xffffffff
                            sub_401110(&var_54)
                            char* var_68_60 = sub_402be0(&var_54, 0x755788)
                            int32_t var_c_37 = 0x12
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(*(arg2 + 0x14c))))
                            int32_t var_c_38 = 0xffffffff
                            sub_401110(&var_54)
                            sub_402be0(&var_54, 0x755798)
                            int32_t var_c_39 = 0x13
                            sub_4e67d0(*(arg2 + 0x34), arg1, &var_54)
                            int32_t var_c_40 = 0xffffffff
                            sub_401110(&var_54)
                            int32_t var_c_41 = 0x14
                            char* var_68_63 = sub_402be0(&var_54, 0x7557a4)
                            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x6c)))
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                            int32_t var_c_42 = 0xffffffff
                            sub_401110(&var_54)
                            int32_t var_c_43 = 0x15
                            char* var_68_65 = sub_402be0(&var_54, 0x7557ac)
                            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x70)))
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                            int32_t var_c_44 = 0xffffffff
                            sub_401110(&var_54)
                            sub_402be0(&var_54, 0x7557b4)
                            int32_t var_c_45 = 0x16
                            int32_t* eax_29
                            eax_29.b = *(arg2 + 0x7c)
                            int32_t ecx_61
                            ecx_61.b = eax_29.b != 0
                            sub_4e67d0(ecx_61, arg1, &var_54)
                            int32_t var_c_46 = 0xffffffff
                            sub_401110(&var_54)
                            int32_t var_c_47 = 0x17
                            char* var_68_68 = sub_402be0(&var_54, 0x7557c0)
                            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x80)))
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                            int32_t var_c_48 = 0xffffffff
                            sub_401110(&var_54)
                            int32_t var_c_49 = 0x18
                            char* var_68_70 = sub_402be0(&var_54, 0x7557c8)
                            var_58 = fconvert.s(fconvert.t(*(arg2 + 0x84)))
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                            int32_t var_c_50 = 0xffffffff
                            sub_401110(&var_54)
                            int32_t var_c_51 = 0x19
                            char* var_68_72 = sub_402be0(&var_54, 0x7557d8)
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(*(arg2 + 0x1fc))))
                            int32_t var_c_52 = 0xffffffff
                            sub_401110(&var_54)
                            int32_t var_c_53 = 0x1a
                            char* var_68_74 = sub_402be0(&var_54, 0x7557e0)
                            sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(*(arg2 + 0x200))))
                            int32_t var_c_54 = 0xffffffff
                            sub_401110(&var_54)
                            sub_402be0(&var_54, 0x7557ec)
                            int32_t var_c_55 = 0x1b
                            sub_4e67d0(*(arg2 + 0x204), arg1, &var_54)
                            int32_t var_c_56 = 0xffffffff
                            sub_401110(&var_54)
                            
                            if (sub_4e8ad0(arg1, arg2) == 0)
                                result = false
                            else if (sub_4e8c20(arg1, arg2) == 0)
                                result = false
                            else if (sub_4e87b0(arg1, arg2) == 0)
                                result = false
                            else if (sub_4e8910(arg1, arg2) == 0)
                                result = false
                            else
                                int32_t var_c_57 = 0x1c
                                char* var_68_81 = sub_402be0(&var_54, 0x755800)
                                var_58 = fconvert.s(fconvert.t(*(arg2 + 0x60)))
                                sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                                int32_t var_c_58 = 0xffffffff
                                sub_401110(&var_54)
                                
                                if (sub_4e8dd0(arg1, arg2) == 0)
                                    result = false
                                else
                                    int32_t var_c_59 = 0x1d
                                    char* var_68_84 = sub_402be0(&var_54, 0x75580c)
                                    var_58 = fconvert.s(fconvert.t(*(arg2 + 0xc0)))
                                    sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                                    int32_t var_c_60 = 0xffffffff
                                    sub_401110(&var_54)
                                    int32_t var_c_61 = 0x1e
                                    char* var_68_86 = sub_402be0(&var_54, 0x75581c)
                                    var_58 = fconvert.s(fconvert.t(*(arg2 + 0xc4)))
                                    sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                                    int32_t var_c_62 = 0xffffffff
                                    sub_401110(&var_54)
                                    int32_t var_c_63 = 0x1f
                                    char* var_68_88 = sub_402be0(&var_54, 0x75582c)
                                    var_58 = fconvert.s(fconvert.t(*(arg2 + 0xc8)))
                                    sub_4e6890(arg1, &var_54, fconvert.s(fconvert.t(var_58)))
                                    int32_t var_c_64 = 0xffffffff
                                    sub_401110(&var_54)
                                    int32_t var_c_65 = 0x20
                                    void var_38
                                    sub_410240(&var_38, sub_402be0(&var_38, "}\r\n\r\n"), arg1)
                                    sub_401110(&var_38)
                                    result = true
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
