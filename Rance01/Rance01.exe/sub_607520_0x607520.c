// 函数: sub_607520
// 地址: 0x607520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7219f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1fc
int32_t eax_2 = data_78c474 ^ &var_1fc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_1f8 = 0
int128_t* result_2 = nullptr
int128_t* var_1d8 = nullptr
int32_t var_1d4 = 0
int32_t var_c_1 = 0
int128_t* result_5 = 0xffffffff
int32_t var_1e8 = 0
int32_t var_1e4 = 0
var_c_1.b = 1
int32_t* var_210 = &result_2
var_1f8 = 1
char eax_5 = sub_601f80(arg1 + 0xac)
int128_t* result_3 = result_2
char ecx_1

if (eax_5 == 0 || result_3 == var_1d8)
    ecx_1 = 1
else
    ecx_1 = 0

int32_t var_c_2 = 0
int128_t* result

if (ecx_1 != 0)
label_60769b:
    
    if (result_3 == 0)
        result.b = 0
    else
        int128_t* result_4 = result_3
        sub_6b4d5b()
        result.b = 0
else
    void* ecx_2 = *(arg1 + 0x10c)
    int32_t* edx_1 = *(arg1 + 0x108)
    result_5 = result_3
    uint32_t var_1cc
    sub_609ae0(arg1 + 0x108, &var_1cc, edx_1, ecx_2)
    void* eax_7 = *(arg1 + 0x11c)
    void* ecx_3 = *(arg1 + 0x118)
    
    if (ecx_3 != eax_7)
        uint32_t edx_2 = var_1cc
        uint32_t var_210_2 = edx_2
        void* eax_8
        int32_t edx_3
        eax_8, edx_3 = sub_61aaa0(eax_7, edx_2, ecx_3, eax_7)
        uint32_t var_218_2 = var_1cc
        int32_t var_21c_2 = *(arg1 + 0x11c)
        sub_60a740(eax_8, edx_3)
        *(arg1 + 0x11c) = eax_8
        result_3 = result_2
    
    int32_t var_180_1 = 0xf
    int32_t var_184_1 = 0
    char var_194 = 0
    var_c_2.b = 2
    
    if (sub_40ff90(&result_5, &var_194, 4).b == 0)
        if (var_180_1 u>= 0x10)
            int32_t var_210_3 = var_194.d
            sub_6b4d5b()
        
        int32_t var_180_2 = 0xf
        int32_t var_184_2 = 0
        var_194 = 0
        goto label_60769b
    
    if (sub_402680("JDBG", &var_194) != 0)
        if (sub_5546f0(&result_5, &var_1f8) == 0 || var_1f8 != 3)
            goto label_607886
        
        int32_t var_164_1 = 0xf
        int32_t var_168_1 = 0
        char var_178 = 0
        var_c_2.b = 3
        
        if (sub_40ff90(&result_5, &var_178, 4) == 0)
            goto label_60787d
        
        if (sub_402680("KEYC", &var_178) == 0 || result_5 + 4 u> var_1d8)
            goto label_60787d
        
        result_5 += 4
        
        if (sub_5546f0(&result_5, &var_1f8) == 0)
            goto label_60787d
        
        uint32_t var_1f0
        
        if (sub_5546f0(&result_5, &var_1f0) == 0 || var_1f8 s<= 0 || var_1f0 s<= 0)
            goto label_60787d
        
        uint32_t edi_3 = var_1f8
        var_c_2.b = 4
        int128_t* var_1b8
        
        if (sub_410150(sub_413150(&var_1b8, edi_3), var_1b8, &result_5, edi_3) == 0)
            goto label_607871
        
        int128_t* result_7
        sub_413150(&result_7, var_1f0)
        int32_t var_1f4_1 = 0
        var_c_2.b = 6
        struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_22 = sub_59e250(0x734838)
        
        if (eax_22 == 0)
            goto label_607868
        
        int128_t* result_6 = result_7
        int32_t var_1c4
        struct IDecompressor::nutria::CZlibDecompressor::VTable* eax_26
        
        if ((*eax_22)->vFunc_2(result_6, var_1c4 - result_6, var_1b8, var_1f8) != 0)
            result_5 = result_6
            int32_t var_1e8_2 = var_1c4
            
            if (sub_5546f0(&result_5, &var_1f8) == 0)
                var_c_2.b = 5
                (*eax_22)->vFunc_1(eax_4)
                goto label_607868
            
            sub_609dd0(arg1 + 0xaac, &var_1cc, *(arg1 + 0xaac), *(arg1 + 0xab0))
            sub_6099c0(var_1f8, arg1 + 0xaac)
            int32_t var_1e0_1 = 0
            
            if (var_1f8 s> 0)
                int32_t ebx_1 = 0
                
                while (sub_5546f0(&result_5, &var_1f0) != 0)
                    if (var_1f0 s> 0)
                        int32_t* esi_7 = *(arg1 + 0xaac) + ebx_1
                        sub_65a090(esi_7, var_1f0)
                        int32_t ecx_20 = esi_7[1]
                        
                        for (int32_t* i = *esi_7; i != ecx_20; i = &i[1])
                            *i = 0xffffffff
                        
                        esi_7[4] = 0xffffffff
                        esi_7[5] = 0
                        int32_t esi_8 = 0
                        
                        if (var_1f0 s> 0)
                            do
                                if (sub_40ff00(&var_1cc, &result_5, &var_1cc) == 0)
                                    goto label_607e77
                                
                                int32_t* eax_34 = *(arg1 + 0xaac)
                                uint32_t ecx_22 = var_1cc
                                void* eax_35 = eax_34 + ebx_1
                                *(*(eax_34 + ebx_1) + (esi_8 << 2)) = ecx_22
                                
                                if (*(eax_35 + 0x10) u> ecx_22)
                                    *(eax_35 + 0x10) = ecx_22
                                
                                if (*(eax_35 + 0x14) u< ecx_22)
                                    *(eax_35 + 0x14) = ecx_22
                                
                                esi_8 += 1
                            while (esi_8 s< var_1f0)
                    
                    int32_t eax_37 = var_1e0_1 + 1
                    ebx_1 += 0x18
                    var_1e0_1 = eax_37
                    
                    if (eax_37 s>= var_1f8)
                        goto label_6079bd
                
                goto label_607e77
            
        label_6079bd:
            
            if (sub_5546f0(&result_5, &var_1f8) == 0)
            label_607e53:
                var_c_2.b = 5
                (*eax_22)->vFunc_1(eax_4)
                goto label_607868
            
            sub_609c90(arg1 + 0xa64, &var_1cc, *(arg1 + 0xa64), *(arg1 + 0xa68))
            uint32_t edi_6 = var_1f8
            int32_t ecx_25
            int32_t edx_13
            ecx_25, edx_13 = sub_6098e0(edi_6, arg1 + 0xa64)
            
            if (sub_61adc0(edi_6, edx_13, ecx_25) == 0)
                goto label_607e53
            
            int32_t var_1e0_2 = 0
            
            if (edi_6 s> 0)
                var_1f0 = 0
                
                while (true)
                    int32_t var_148_1 = 0xf
                    int32_t var_14c_1 = 0
                    char var_15c = 0
                    var_c_2.b = 7
                    char* ecx_26 = &var_15c
                    
                    if (sub_410070(&result_5, &var_15c) != 0)
                        sub_401180(*(arg1 + 0xa64) + var_1f0 + 0x24, 0xffffffff, &var_15c, 0)
                        char* edx_14 = var_15c.d
                        
                        if (var_148_1 u< 0x10)
                            edx_14 = &var_15c
                        
                        void var_bc
                        sub_402be0(&var_bc, edx_14)
                        var_c_2.b = 8
                        sub_61ae90(var_1e0_2, &var_bc)
                        var_c_2.b = 7
                        
                        if (sub_40ff00(sub_401110(&var_bc), &result_5, &var_1cc) != 0)
                            void* edi_7 = var_1cc
                            
                            if (edi_7 == 0)
                                goto label_607b6b
                            
                            var_c_2.b = 9
                            int128_t* var_1a4
                            char eax_49 =
                                sub_410150(sub_413150(&var_1a4, edi_7), var_1a4, &result_5, edi_7)
                            char eax_52
                            
                            if (eax_49 != 0)
                                eax_52 = (*(*(*(arg1 + 0xa64) + var_1f0) + 8))(edi_7 + 1)
                            
                            if (eax_49 == 0 || eax_52 == 0)
                                sub_65ab60(&var_1a4)
                            else
                                char* eax_54 = (*(*(*(arg1 + 0xa64) + var_1f0) + 0x18))(eax_4)
                                sub_6c02a0(eax_54, var_1a4, edi_7)
                                *(eax_54 + edi_7) = 0
                                sub_616cc0(*(arg1 + 0xa64) + var_1f0)
                                sub_65ab60(&var_1a4)
                            label_607b6b:
                                var_c_2.b = 6
                                sub_401110(&var_15c)
                                var_1f0 += 0x50
                                int32_t eax_57 = var_1e0_2 + 1
                                var_1e0_2 = eax_57
                                
                                if (eax_57 s>= var_1f8)
                                    goto label_607b99
                                
                                continue
                        
                        ecx_26 = &var_15c
                    
                    sub_401110(ecx_26)
                    break
                
                goto label_607e53
            
        label_607b99:
            
            if (sub_5546f0(&result_5, &var_1f8) == 0)
                goto label_607e53
            
            int32_t ebx_4 = 0
            char var_140
            
            if (var_1f8 s> 0)
                while (true)
                    sub_607ec0(&var_140)
                    var_c_2.b = 0xa
                    
                    if (sub_607ff0(&result_5, &var_140) == 0)
                        sub_607f00(&var_140)
                        break
                    
                    int32_t var_214_11 = sub_609740(&var_140, arg1 + 0x108)
                    void var_13c
                    sub_60a9f0(sub_60f5b0(&var_13c, arg1 + 0xf8), &var_140)
                    var_c_2.b = 6
                    sub_607f00(&var_140)
                    ebx_4 += 1
                    
                    if (ebx_4 s>= var_1f8)
                        goto label_607c44
                
            label_607e77:
                var_c_2.b = 5
                eax_26 = *eax_22
                goto label_607862
            
        label_607c44:
            
            if (sub_5546f0(&result_5, &var_1f0) == 0)
                goto label_607e53
            
            int32_t var_1e0_3 = 0
            
            if (var_1f0 s> 0)
                while (true)
                    int32_t ebx_5 = 0
                    int32_t var_12c_1 = 0xf
                    int32_t var_130_1 = 0
                    var_140 = 0
                    int32_t var_110_1 = 0xf
                    int32_t var_114_1 = 0
                    char var_124 = 0
                    int32_t var_104 = 0
                    int32_t var_100_1 = 0
                    int32_t var_fc_1 = 0
                    var_c_2.b = 0xb
                    
                    if (sub_410070(&result_5, &var_140) != 0
                            && sub_410070(&result_5, &var_124) != 0)
                        int128_t** ecx_43 = &result_5
                        uint32_t var_108
                        
                        if (sub_5546f0(ecx_43, &var_108) != 0 && sub_5546f0(ecx_43, &var_1f8) != 0)
                            if (var_1f8 s<= 0)
                            label_607d90:
                                sub_609830(&var_140, arg1 + 0x118)
                                var_c_2.b = 6
                                sub_607fa0(&var_140)
                                int32_t eax_71 = var_1e0_3 + 1
                                var_1e0_3 = eax_71
                                
                                if (eax_71 s>= var_1f0)
                                    goto label_607dc6
                                
                                continue
                            else
                                while (true)
                                    void var_a0
                                    sub_607ec0(&var_a0)
                                    var_c_2.b = 0xc
                                    
                                    if (sub_607ff0(&result_5, &var_a0) == 0)
                                        sub_607f00(&var_a0)
                                        break
                                    
                                    sub_609740(&var_a0, &var_104)
                                    var_c_2.b = 0xb
                                    sub_607f00(&var_a0)
                                    ebx_5 += 1
                                    
                                    if (ebx_5 s>= var_1f8)
                                        goto label_607d90
                    
                    sub_607fa0(&var_140)
                    var_c_2.b = 5
                    eax_26 = *eax_22
                    break
                
                goto label_607862
            
        label_607dc6:
            char eax_72 = sub_607050(arg1, &result_5)
            var_c_2.b = 5
            int32_t (__fastcall* const vFunc_1)(void*** arg1) = (*eax_22)->vFunc_1
            
            if (eax_72 == 0)
                vFunc_1(eax_4)
                goto label_607868
            
            vFunc_1(eax_4)
            sub_65ab60(&result_7)
            sub_65ab60(&var_1b8)
            sub_401110(&var_178)
            sub_401110(&var_194)
            sub_65ab60(&result_2)
            result.b = 1
        else
            var_c_2.b = 5
            eax_26 = *eax_22
        label_607862:
            eax_26->vFunc_1(eax_4)
        label_607868:
            sub_65ab60(&result_7)
        label_607871:
            sub_65ab60(&var_1b8)
        label_60787d:
            sub_401110(&var_178)
        label_607886:
            sub_401110(&var_194)
            sub_65ab60(&result_2)
            result.b = 0
    else
        if (var_180_1 u>= 0x10)
            int32_t var_210_4 = var_194.d
            sub_6b4d5b()
        
        result = result_2
        int32_t var_180_3 = 0xf
        int32_t var_184_3 = 0
        var_194 = 0
        
        if (result == 0)
            result.b = 0
        else
            int128_t* result_1 = result
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_1fc)
return result
