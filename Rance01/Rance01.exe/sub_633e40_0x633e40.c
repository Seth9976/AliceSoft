// 函数: sub_633e40
// 地址: 0x633e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7212fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_cc
int32_t eax_2 = data_78c474 ^ &var_cc
int32_t __saved_edi
int32_t var_e0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_cc = arg1
int32_t result_3 = 0
int32_t var_c4 = 0
int32_t var_c0 = 0
int32_t var_b8 = 0
int32_t var_b4 = 0
int32_t var_b0 = 0xffffffff
int32_t var_4 = 0
int32_t var_e8_1

if (sub_634d70(&result_3) == 0)
    if (arg2[5] u< 0x10)
        int32_t* var_e4_2 = arg2
        var_e8_1 = 0x7337a8
    else
        int32_t var_e4_1 = *arg2
        var_e8_1 = 0x7337a8
    
label_6347fb:
    sub_604c90(var_e8_1)
    goto label_634803

char var_9c

while (true)
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    var_9c = 0
    var_4.b = 1
    
    if (sub_634ee0(&result_3) == 0)
        break
    
    int32_t eax_9 = var_8c_1
    
    if (var_8c_1 u>= 0xe)
        eax_9 = 0xe
    
    char* ebp_1 = var_9c.d
    char* edx_1 = ebp_1
    
    if (var_88_1 u< 0x10)
        edx_1 = &var_9c
    
    int32_t eax_10 = sub_402320(eax_9, edx_1, "IniFileVersion", eax_9)
    bool cond:0_1 = eax_10 == 0
    
    if (eax_10 == 0)
        if (var_8c_1 u>= 0xe)
            eax_10.b = var_8c_1 != 0xe
        else
            eax_10 = 0xffffffff
        
        cond:0_1 = eax_10 == 0
    
    eax_10.b = cond:0_1
    
    if (eax_10.b == 0)
        int32_t eax_12 = var_8c_1
        
        if (var_8c_1 u>= 9)
            eax_12 = 9
        
        char* edx_2 = ebp_1
        
        if (var_88_1 u< 0x10)
            edx_2 = &var_9c
        
        int32_t eax_13 = sub_402320(eax_12, edx_2, "ViewWidth", eax_12)
        bool cond:1_1 = eax_13 == 0
        
        if (eax_13 == 0)
            if (var_8c_1 u>= 9)
                eax_13.b = var_8c_1 != 9
            else
                eax_13 = 0xffffffff
            
            cond:1_1 = eax_13 == 0
        
        eax_13.b = cond:1_1
        char eax_15
        
        if (eax_13.b == 0)
            int32_t eax_16 = var_8c_1
            
            if (var_8c_1 u>= 0xa)
                eax_16 = 0xa
            
            char* edx_3 = ebp_1
            
            if (var_88_1 u< 0x10)
                edx_3 = &var_9c
            
            int32_t eax_17 = sub_402320(eax_16, edx_3, "ViewHeight", eax_16)
            bool cond:2_1 = eax_17 == 0
            
            if (eax_17 == 0)
                if (var_8c_1 u>= 0xa)
                    eax_17.b = var_8c_1 != 0xa
                else
                    eax_17 = 0xffffffff
                
                cond:2_1 = eax_17 == 0
            
            eax_17.b = cond:2_1
            
            if (eax_17.b != 0)
                if (sub_635140(0x73381c, &result_3) == 0)
                    goto label_6347d9
                
                eax_15 = sub_635210(&result_3)
                goto label_63464f
            
            int32_t* var_e4_9
            
            if (sub_402680("GameName", &var_9c) != 0)
                if (sub_635140(0x73382c, &result_3) == 0)
                    goto label_6347d9
                
            label_634649:
                var_e4_9 = &result_3
                goto label_63464a
            
            if (sub_402680("RegName", &var_9c) != 0)
                if (sub_635140(0x733838, &result_3) == 0)
                    goto label_6347d9
                
                var_e4_9 = &result_3
            label_63464a:
                eax_15 = sub_634ee0(var_e4_9)
                goto label_63464f
            
            if (sub_402680("CodeName", &var_9c) != 0)
                if (sub_635140(0x733848, &result_3) == 0)
                    goto label_6347d9
                
                goto label_634649
            
            if (sub_402680("BootName", &var_9c) != 0)
                if (sub_635140(0x733858, &result_3) == 0)
                    goto label_6347d9
                
                var_e4_9 = &result_3
                goto label_63464a
            
            if (sub_402680(0x73385c, &var_9c) != 0)
                if (sub_635140(0x733860, &result_3) == 0)
                    goto label_6347d9
                
                goto label_634649
            
            int32_t* var_e4_10
            char var_64
            char* ecx_11
            
            if (sub_402680("MainVM", &var_9c) == 0)
                char var_80
                
                if (sub_402680("LoadDLL", &var_9c) == 0)
                    char* ecx_27
                    
                    if (sub_402680("UseCD", &var_9c) == 0)
                        if (sub_402680("VolumeValancer", &var_9c) == 0)
                            if (sub_402680("SaveFolder", &var_9c) != 0)
                                if (sub_635140(0x733908, &result_3) == 0)
                                    goto label_6347d9
                                
                                goto label_634546
                            
                            if (sub_402680("MsgSkipName", &var_9c) != 0)
                                if (sub_635140(0x733918, &result_3) == 0)
                                    goto label_6347d9
                                
                                int32_t var_50_2 = 0xf
                                int32_t var_54_2 = 0
                                var_64 = 0
                                var_4.b = 0xc
                                var_e4_10 = &result_3
                                goto label_6345a8
                            
                            char* edi_18 = &var_9c
                            
                            if (sub_402680("UseJoypad", edi_18) == 0)
                                if (sub_402680("ShowSoundSettingMenu", &var_9c) != 0)
                                    ecx_27 = &var_9c
                                    
                                    if (sub_635140(0x73394c, &result_3) == 0)
                                        goto label_6347dd
                                    
                                    goto label_634649
                                
                                if (sub_402680("MainSurfaceBpp", &var_9c) == 0)
                                    if (sub_402680("DefaultVolumeRate", &var_9c) != 0)
                                        if (sub_635140(0x733978, &result_3) == 0)
                                            goto label_6347d9
                                        
                                        goto label_6346d1
                                    
                                    char* eax_78 = var_9c.d
                                    
                                    if (var_88_1 u< 0x10)
                                        eax_78 = &var_9c
                                    
                                    char* var_e4_29 = eax_78
                                    sub_604c90(0x73397c)
                                else
                                    if (sub_635140(0x733960, &result_3) == 0)
                                        goto label_6347d9
                                    
                                    if (sub_635210(&result_3) == 0)
                                        goto label_6347d9
                            else
                                ecx_27 = &var_9c
                                
                                if (sub_635140(0x733928, &result_3) == 0)
                                    goto label_6347dd
                                
                                if (sub_634ee0(&result_3) == 0)
                                    goto label_6347d9
                                
                                *(var_cc + 0xf4) = sub_402680("true", edi_18) != 0
                        else
                            int32_t var_6c_2 = 0xf
                            int32_t var_70_2 = 0
                            var_80 = 0
                            var_4.b = 0xb
                            
                            if (sub_635140(U"[]=,", &result_3) == 0)
                            label_6347d0:
                                ecx_11 = &var_80
                            label_6347d4:
                                sub_401110(ecx_11)
                            label_6347d9:
                                ecx_27 = &var_9c
                            label_6347dd:
                                var_4.b = 0
                                sub_401110(ecx_27)
                                int32_t* eax_82 = arg2
                                
                                if (eax_82[5] u>= 0x10)
                                    eax_82 = *eax_82
                                
                                int32_t* var_e4_34 = eax_82
                                var_e8_1 = 0x7339b4
                                goto label_6347fb
                            
                            if (sub_635210(&result_3) == 0)
                                goto label_6347d0
                            
                            int32_t* esi_21 = &result_3
                            
                            if (sub_635140(&(*U"[]=,")[1], esi_21) == 0)
                                goto label_6347d0
                            
                            ecx_11 = &var_80
                            
                            if (sub_635140(&(*U"[]=,")[2], esi_21) == 0)
                                goto label_6347d4
                            
                            if (sub_634ee0(&result_3) == 0)
                                goto label_6347d0
                            
                            int32_t var_a8_1 = 0xffffffff
                            char eax_57 = sub_635140(&(*U"[]=,")[3], esi_21)
                            char eax_58
                            
                            if (eax_57 != 0)
                                eax_58 = sub_635210(&result_3)
                            
                            if (eax_57 != 0 && eax_58 == 0)
                                goto label_6347d0
                            
                            int32_t* var_a4
                            sub_634950(var_cc, var_a4, &var_80, var_a8_1)
                        label_634505:
                            sub_401110(&var_80)
                    else
                        ecx_27 = &var_9c
                        
                        if (sub_635140(0x7338d8, &result_3) == 0)
                            goto label_6347dd
                        
                    label_634546:
                        
                        if (sub_634ee0(&result_3) == 0)
                            goto label_6347d9
                else
                    int32_t* esi_17 = &result_3
                    
                    if (sub_635140(0x733878, esi_17) == 0)
                        goto label_6347d9
                    
                    if (sub_635140(0x73387c, esi_17) == 0)
                        goto label_6347d9
                    
                    void* ebp_2 = var_cc
                    
                    while (true)
                        int32_t var_6c_1 = 0xf
                        int32_t var_70_1 = 0
                        var_80 = 0
                        var_4.b = 3
                        
                        if (sub_634ee0(&result_3) == 0)
                            goto label_634505
                        
                        int32_t eax_35 = sub_402680(0x733880, &var_80)
                        ecx_11 = &var_80
                        
                        if (eax_35.b != 0)
                            goto label_6345b9
                        
                        sub_401650(eax_35, &var_64, ecx_11, &var_64)
                        var_4.b = 4
                        char eax_36
                        int32_t edx_5
                        eax_36, edx_5 = sub_402680(0x733884, &var_64)
                        void var_48
                        void var_2c
                        
                        if (eax_36 == 0)
                            int32_t eax_41
                            int32_t edx_7
                            eax_41, edx_7 = sub_402680(0x733888, &var_64)
                            
                            if (eax_41.b == 0)
                                sub_405220(&var_80, ebp_2 + 0xb8)
                            label_6343a4:
                                char eax_46 = sub_634ee0(&result_3)
                                char eax_47
                                char* edi_13
                                
                                if (eax_46 != 0)
                                    edi_13 = &var_80
                                    eax_47 = sub_402680(0x73388c, edi_13)
                                
                                if (eax_46 == 0 || eax_47 != 0)
                                    sub_401110(&var_64)
                                    sub_401110(&var_80)
                                    break
                                
                                if (sub_402680(0x733890, edi_13) == 0)
                                    char* ecx_39 = var_80.d
                                    
                                    if (var_6c_1 u< 0x10)
                                        ecx_39 = &var_80
                                    
                                    if (arg2[5] u< 0x10)
                                        char* var_e4_33 = ecx_39
                                        int32_t* var_e8_4 = arg2
                                        sub_604c90(0x733894)
                                    else
                                        char* var_e4_32 = ecx_39
                                        int32_t var_e8_3 = *arg2
                                        sub_604c90(0x733894)
                                else
                                    sub_401110(&var_64)
                                    sub_401110(&var_80)
                                    continue
                            else
                                var_4.b = 8
                                sub_4c1d70(&var_80, &var_48, 
                                    sub_4018a0(eax_41, edx_7, arg2, &var_2c), &var_48)
                                var_4.b = 0xa
                                sub_401110(&var_2c)
                                uint8_t eax_44 = sub_602830(&var_48)
                                char eax_45
                                
                                if (eax_44 != 0)
                                    eax_45 = sub_633e40(&var_48)
                                
                                if (eax_44 == 0 || eax_45 != 0)
                                    var_4.b = 4
                                    sub_401110(&var_48)
                                    goto label_6343a4
                                
                                sub_401110(&var_48)
                        else
                            var_4.b = 5
                            sub_4c1d70(&var_80, &var_48, sub_4018a0(&var_2c, edx_5, arg2, &var_2c), 
                                &var_48)
                            var_4.b = 7
                            sub_401110(&var_2c)
                            void* ecx_16 = &var_48
                            
                            if (sub_633e40(&var_48) != 0)
                                var_4.b = 4
                                sub_401110(ecx_16)
                                goto label_6343a4
                            
                            sub_401110(ecx_16)
                        sub_401110(&var_64)
                        sub_401110(&var_80)
                        sub_401110(&var_9c)
                        goto label_634803
            else
                if (sub_635140(0x73386c, &result_3) == 0)
                    goto label_6347d9
                
                int32_t var_50_1 = 0xf
                int32_t var_54_1 = 0
                var_64 = 0
                var_4.b = 2
                var_e4_10 = &result_3
            label_6345a8:
                ecx_11 = &var_64
                
                if (sub_634ee0(var_e4_10) == 0)
                    goto label_6347d4
                
            label_6345b9:
                sub_401110(ecx_11)
        else
            if (sub_635140(0x73380c, &result_3) == 0)
                goto label_6347d9
            
            eax_15 = sub_635210(&result_3)
        label_63464f:
            
            if (eax_15 == 0)
                goto label_6347d9
    else
        if (sub_635140(0x7337fc, &result_3) == 0)
            goto label_6347d9
        
    label_6346d1:
        
        if (sub_635210(&result_3) == 0)
            goto label_6347d9
    
    if (var_88_1 u>= 0x10)
        int32_t var_e4_30 = var_9c.d
        sub_6b4d5b()

int32_t result

if (var_b0 != 0)
    int32_t* eax_79 = arg2
    
    if (eax_79[5] u>= 0x10)
        eax_79 = *eax_79
    
    int32_t* var_e4_31 = eax_79
    sub_604c90(0x7337cc)
    sub_401110(&var_9c)
label_634803:
    result = result_3
    
    if (result != 0)
        int32_t result_2 = result
        sub_6b4d5b()
    
    result.b = 0
else
    sub_401110(&var_9c)
    result = result_3
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_cc)
return result
