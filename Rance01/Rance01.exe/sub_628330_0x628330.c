// 函数: sub_628330
// 地址: 0x628330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_725ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1b4
int32_t eax_2 = data_78c474 ^ &var_1b4
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg1[0x33]
int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(GetScrollPos(arg1[0x22], SB_VERT) * edi + (arg2 u>> 0x10))
int32_t edi_1 = divs.dp.d(edx:eax_9, edi)
int32_t eax_11 = arg1[0x36]
int32_t var_1a8 = edi_1
void* var_1b0
char var_1a4
int32_t var_c_11

switch (eax_11)
    case 0
        if (edi_1 s>= 0 && edi_1 s< (***(arg1[0x37] + 4))(eax_4))
            int32_t var_190_1 = 0xf
            int32_t var_194_1 = 0
            var_1a4 = 0
            int32_t var_c_1 = 0
            sub_622ca0(arg1[0x37], &var_1a4, edi_1)
            char* edx_3 = var_1a4.d
            
            if (var_190_1 u< 0x10)
                edx_3 = &var_1a4
            
            void var_e0
            sub_402be0(&var_e0, edx_3)
            var_c_1.b = 1
            sub_6298a0(edi_1, arg1[0x3a], &var_e0, 1)
            sub_401110(&var_e0)
            arg1[0x4d] = edi_1
            var_c_11 = 0xffffffff
            sub_401110(&var_1a4)
    case 1
        void* esi_2 = arg1[0x37]
        
        if (edi_1 s>= 0 && edi_1 s< (*(esi_2 + 0x38) - *(esi_2 + 0x34)) s>> 2)
            int32_t eax_21 = sub_6251c0(edi_1, mods.dp.d(edx:eax_9, edi), esi_2)
            void* edx_5 = **(esi_2 + 8)
            var_1a8 = eax_21
            void* eax_24 = (*(edx_5 + 0x18))(eax_21) - 0xa
            arg1[0x4d] = edi_1
            char eax_25
            
            if (eax_24 u<= 0x25)
                eax_25 = sub_629b10(eax_24)
            
            if (eax_24 u<= 0x25 && eax_25 == 0)
                sub_629ac0(arg1[0x3a])
                sub_629b60(arg1[0x3a])
                void var_a8
                int32_t* eax_31 = sub_62a230(arg1, &var_a8)
                int32_t var_c_3 = 4
                sub_401180(arg1[0x39] + 0x48, 0xffffffff, eax_31, 0)
                int32_t var_c_4 = 0xffffffff
                sub_401110(&var_a8)
                sub_61fb20(arg1[0x39])
            else
                int32_t esi_4 = var_1a8
                
                if (sub_622e30(arg1[0x37], esi_4, &var_1a8) != 0)
                    int32_t var_190_2 = 0xf
                    int32_t var_194_2 = 0
                    var_1a4 = 0
                    int32_t var_c_2 = 2
                    sub_623120(arg1[0x37], esi_4, &var_1a4)
                    char* edx_6 = var_1a4.d
                    
                    if (var_190_2 u< 0x10)
                        edx_6 = &var_1a4
                    
                    void var_134
                    sub_402be0(&var_134, edx_6)
                    var_c_2.b = 3
                    sub_6298a0(var_1a8, arg1[0x3a], &var_134, 1)
                    sub_401110(&var_134)
                    var_c_11 = 0xffffffff
                    sub_401110(&var_1a4)
    case 2
        if (edi_1 s>= 0 && edi_1 s< sub_6232a0(arg1[0x37])
                && sub_623530(arg1[0x37], edi_1, &var_1b0) != 0)
            void* eax_37 = var_1b0 - 0xa
            arg1[0x4d] = edi_1
            char eax_38
            
            if (eax_37 u<= 0x25)
                eax_38 = sub_629b10(eax_37)
            
            if (eax_37 u> 0x25 || eax_38 != 0)
                char eax_40
                float ecx_13
                eax_40, ecx_13 = sub_6237d0(arg1[0x37], edi_1, &var_1b0)
                
                if (eax_40 != 0)
                    int32_t var_190_3 = 0xf
                    int32_t var_194_3 = 0
                    var_1a4 = 0
                    int32_t var_c_5 = 5
                    sub_623890(ecx_13, var_1a8, arg1[0x37], &var_1a4)
                    char* edx_7 = var_1a4.d
                    
                    if (var_190_3 u< 0x10)
                        edx_7 = &var_1a4
                    
                    void var_c4
                    sub_402be0(&var_c4, edx_7)
                    var_c_5.b = 6
                    sub_6298a0(var_1b0, arg1[0x3a], &var_c4, 1)
                    sub_401110(&var_c4)
                    var_c_11 = 0xffffffff
                    sub_401110(&var_1a4)
    case 3
        if (sub_624440(arg1[0x37], edi_1, &var_1b0) != 0)
            int32_t var_190_4 = 0xf
            int32_t var_194_4 = 0
            var_1a4 = 0
            int32_t var_c_6 = 7
            int32_t esi_8 = var_1a8
            sub_624480(arg1[0x37], &var_1a4, esi_8)
            sub_402cb0(&var_1a4, 0x733d2c, 2)
            char* edx_10 = var_1a4.d
            
            if (var_190_4 u< 0x10)
                edx_10 = &var_1a4
            
            void var_16c
            sub_402be0(&var_16c, edx_10)
            var_c_6.b = 8
            sub_6298a0(var_1b0, arg1[0x3a], &var_16c, 1)
            sub_401110(&var_16c)
            arg1[0x4d] = esi_8
            var_c_11 = 0xffffffff
            sub_401110(&var_1a4)
    case 4
        int32_t ecx_19 = arg1[0x3b]
        int32_t eax_46 = arg1[0x3c]
        
        if (ecx_19 != eax_46)
            void* esi_9 = *(arg1[0x3b] + (eax_46 - ecx_19) s/ 0x28 * 0x28 - 0x28)
            int32_t eax_54 = *(**(arg1[0x37] + 4) + 0x14)
            var_1b0 = esi_9
            int32_t eax_55
            int32_t ecx_23
            eax_55, ecx_23 = eax_54(esi_9)
            void* var_1ac
            
            if (eax_55 - 1 u<= 4)
                switch (eax_55)
                    case 1
                        if (edi_1 s>= 0 && edi_1 s< sub_6238f0(ecx_23, esi_9, arg1[0x37])
                                && sub_623910(&var_1ac, var_1b0, arg1[0x37], edi_1, &var_1ac) != 0)
                            int32_t eax_60
                            int32_t edx_17
                            edx_17:eax_60 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
                            int32_t edx_18 = edx_17 s>> 4
                            void* esi_11 = arg1[0x3b] + ((edx_18 u>> 0x1f) + edx_18) * 0x28 - 0x28
                            *(esi_11 + 8) = GetScrollPos(arg1[0x22], SB_VERT)
                            void* eax_67 = var_1ac - 0xa
                            *(esi_11 + 4) = edi_1
                            char eax_68
                            
                            if (eax_67 u<= 0x25)
                                eax_68 = sub_629b10(eax_67)
                            
                            if (eax_67 u<= 0x25 && eax_68 == 0)
                                arg1[0x4d] = edi_1
                            else if (sub_6246f0(arg1[0x37], edi_1, var_1b0, &var_1ac) != 0)
                                int32_t var_190_5 = 0xf
                                int32_t var_194_5 = 0
                                var_1a4 = 0
                                int32_t var_c_7 = 9
                                sub_623a90(&var_1a4, var_1b0, arg1[0x37], var_1a8, &var_1a4)
                                var_c_7.b = 0xa
                                void var_54
                                sub_401ef0(&var_1a4, sub_61fce0(&var_54, U".", &var_1a4))
                                var_c_7.b = 9
                                sub_401110(&var_54)
                                char* edx_22 = var_1a4.d
                                
                                if (var_190_5 u< 0x10)
                                    edx_22 = &var_1a4
                                
                                void var_118
                                sub_402be0(&var_118, edx_22)
                                var_c_7.b = 0xb
                                sub_6298a0(var_1ac, arg1[0x3a], &var_118, 0)
                                sub_401110(&var_118)
                                var_c_11 = 0xffffffff
                                sub_401110(&var_1a4)
                    case 3
                        if (edi_1 s>= 0 && edi_1 s< sub_624990(arg1[0x37], esi_9)
                                && sub_6249c0(&var_1ac, arg1[0x37]) != 0)
                            int32_t eax_79
                            int32_t edx_23
                            edx_23:eax_79 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
                            int32_t edx_24 = edx_23 s>> 4
                            void* esi_14 = arg1[0x3b] + ((edx_24 u>> 0x1f) + edx_24) * 0x28 - 0x28
                            int32_t eax_84 = GetScrollPos(arg1[0x22], SB_VERT)
                            edi_1 = var_1a8
                            *(esi_14 + 8) = eax_84
                            void* eax_86 = var_1ac - 0xa
                            *(esi_14 + 4) = edi_1
                            char eax_87
                            
                            if (eax_86 u<= 0x25)
                                eax_87 = sub_629b10(eax_86)
                            
                            if (eax_86 u<= 0x25 && eax_87 == 0)
                                arg1[0x4d] = edi_1
                            else if (sub_6246f0(arg1[0x37], edi_1, var_1b0, &var_1ac) != 0)
                                int32_t var_1c8_20 = edi_1
                                int32_t* eax_91 = sub_4104a0("[%d]")
                                int32_t var_c_8 = 0xc
                                sub_6298a0(var_1ac, arg1[0x3a], eax_91, 0)
                                var_c_11 = 0xffffffff
                                void var_8c
                                sub_401110(&var_8c)
                    case 4
                        int32_t eax_92
                        int32_t ecx_38
                        eax_92, ecx_38 = sub_624620(ecx_23, esi_9, arg1[0x37])
                        
                        if (edi_1 s>= 0 && edi_1 s< eax_92
                                && sub_624640(ecx_38, var_1b0, arg1[0x37], edi_1, &var_1ac) != 0)
                            int32_t eax_95
                            int32_t edx_28
                            edx_28:eax_95 = muls.dp.d(0x66666667, arg1[0x3c] - arg1[0x3b])
                            int32_t edx_29 = edx_28 s>> 4
                            void* esi_16 = arg1[0x3b] + ((edx_29 u>> 0x1f) + edx_29) * 0x28 - 0x28
                            *(esi_16 + 8) = GetScrollPos(arg1[0x22], SB_VERT)
                            void* eax_102 = var_1ac - 0xa
                            *(esi_16 + 4) = edi_1
                            char eax_103
                            
                            if (eax_102 u<= 0x25)
                                eax_103 = sub_629b10(eax_102)
                            
                            if (eax_102 u<= 0x25 && eax_103 == 0)
                                arg1[0x4d] = edi_1
                            else
                                char eax_105
                                int32_t ecx_43
                                eax_105, ecx_43 = sub_6246f0(arg1[0x37], edi_1, var_1b0, &var_1ac)
                                
                                if (eax_105 != 0)
                                    int32_t var_190_6 = 0xf
                                    int32_t var_194_6 = 0
                                    var_1a4 = 0
                                    int32_t var_c_9 = 0xd
                                    sub_6247c0(ecx_43, var_1b0, arg1[0x37], var_1a8, &var_1a4)
                                    var_c_9.b = 0xe
                                    void var_70
                                    sub_401ef0(&var_1a4, sub_61fce0(&var_70, U"..", &var_1a4))
                                    var_c_9.b = 0xd
                                    sub_401110(&var_70)
                                    char* edx_32 = var_1a4.d
                                    
                                    if (var_190_6 u< 0x10)
                                        edx_32 = &var_1a4
                                    
                                    void var_fc
                                    sub_402be0(&var_fc, edx_32)
                                    var_c_9.b = 0xf
                                    sub_6298a0(var_1ac, arg1[0x3a], &var_fc, 0)
                                    sub_401110(&var_fc)
                                    var_c_11 = 0xffffffff
                                    sub_401110(&var_1a4)
                    case 5
                        if (edi_1 s>= 0 && edi_1 s< sub_624c60(arg1[0x37], esi_9)
                                && sub_624e80(edi_1, arg1[0x37], esi_9, &var_1ac) != 0)
                            int32_t var_174_1 = 0xf
                            int32_t var_178_1 = 0
                            char var_188 = 0
                            int32_t var_c_10 = 0x10
                            sub_624ca0(&var_188, arg1[0x37], esi_9, edi_1)
                            var_c_10.b = 0x11
                            void var_38
                            sub_401ef0(&var_188, sub_61fce0(&var_38, U".", &var_188))
                            var_c_10.b = 0x10
                            sub_401110(&var_38)
                            char* edx_33 = var_188.d
                            
                            if (var_174_1 u< 0x10)
                                edx_33 = &var_188
                            
                            void var_150
                            sub_402be0(&var_150, edx_33)
                            var_c_10.b = 0x12
                            sub_6298a0(var_1ac, arg1[0x3a], &var_150, 0)
                            sub_401110(&var_150)
                            var_c_11 = 0xffffffff
                            sub_401110(&var_188)

SetFocus(arg1[0x22])
sub_629b60(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1b4)
return 0
