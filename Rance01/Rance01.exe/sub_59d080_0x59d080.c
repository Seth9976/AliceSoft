// 函数: sub_59d080
// 地址: 0x59d080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_724740
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_3
int32_t eax_2 = data_78c474 ^ &i_3
int32_t __saved_edi
int32_t var_9c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_74 = arg1
void* result_5 = nullptr
void* var_6c = nullptr
int32_t var_68 = 0
int32_t var_c_1 = 0
int32_t var_28 = 0
char var_38 = 0
char* eax_5 = arg2
int32_t var_24 = 0xf

do
    arg1.b = *eax_5
    eax_5 = &eax_5[1]
while (arg1.b != 0)

sub_401270(&var_38, eax_5 - &eax_5[1], arg2)
void* result_4 = 0xffffffff
int32_t var_7c = 0
int32_t var_78 = 0
int32_t* var_a0_1 = &result_5
var_c_1.b = 2
bool var_85 = sub_601f80(&var_38) == 0
var_c_1.b = 0

if (var_24 u>= 0x10)
    int32_t var_a0_2 = var_38.d
    sub_6b4d5b()

void* result
bool cond:1_1

if (var_85 == 0)
    void* result_7 = result_5
    
    if (result_7 != var_6c)
        result_4 = result_7
        int32_t var_40_1 = 0xf
        int32_t var_44_1 = 0
        char var_54 = 0
        var_c_1.b = 4
        
        if (sub_410070(&result_4, &var_54).b != 0)
            if (sub_402680(0x7465d4, &var_54) != 0)
                int32_t* ecx_3 = &result_4
                
                if (sub_5546f0(ecx_3, var_74 + 4) == 0)
                    goto label_59d299
                
                int32_t* esi_3 = var_74 + 8
                int32_t* var_84_1 = esi_3
                
                if (sub_5546f0(ecx_3, esi_3) == 0)
                    goto label_59d299
                
                if (sub_5546f0(ecx_3, var_74 + 0xc) == 0)
                    goto label_59d299
                
                if (sub_5546f0(ecx_3, var_74 + 0x10) == 0)
                    goto label_59d299
                
                void* ecx_4 = &result_4
                uint32_t var_58
                
                if (sub_5546f0(ecx_4, &var_58) == 0)
                    goto label_59d299
                
                int32_t eax_20 = *esi_3
                
                if (eax_20 s> 0)
                    i_3 = var_74 + 0x14
                    ecx_4 = sub_59ca00(eax_20, var_74 + 0x14)
                    int32_t i = 0
                    
                    if (*esi_3 s> 0)
                        int32_t edi_5 = 0
                        
                        do
                            int32_t eax_21 = *(var_74 + 0xc)
                            
                            if (eax_21 s> 0)
                                sub_65a090(*i_3 + edi_5, eax_21)
                                esi_3 = var_84_1
                            
                            ecx_4 = var_74 + 0x10
                            int32_t eax_23 = *ecx_4
                            
                            if (eax_23 s> 0)
                                void* i_5 = i_3
                                int32_t ecx_5 = *i_5
                                ecx_4 = sub_4bc7e0(eax_23, i_5, ecx_5, ecx_5 + edi_5 + 0x10)
                                esi_3 = var_84_1
                            
                            i += 1
                            edi_5 += 0x20
                        while (i s< *esi_3)
                
                int32_t edi_6 = 0
                i_3 = nullptr
                
                if (*esi_3 s> 0)
                    int32_t* edx_7
                    void* i_1
                    
                    do
                        int32_t j = 0
                        
                        if (*(var_74 + 0xc) s> 0)
                            do
                                if (sub_40ff00(ecx_4, &result_4, 
                                        *(*(var_74 + 0x14) + edi_6) + (j << 2)) == 0)
                                    goto label_59d299
                                
                                ecx_4 = var_74 + 0xc
                                j += 1
                            while (j s< *ecx_4)
                        
                        edx_7 = var_84_1
                        i_1 = i_3 + 1
                        edi_6 += 0x20
                        i_3 = i_1
                    while (i_1 s< *edx_7)
                    esi_3 = edx_7
                
                int32_t ebx_2 = 0
                i_3 = nullptr
                
                if (*esi_3 s<= 0)
                label_59d410:
                    int32_t ebx_3 = 0
                    
                    if (var_58 s> 0)
                        do
                            int32_t var_24_3 = 0xf
                            int32_t var_28_3 = 0
                            var_38 = 0
                            var_c_1.b = 5
                            
                            if (sub_410070(&result_4, &var_38) == 0)
                                if (var_24_3 u>= 0x10)
                                    int32_t var_a0_22 = var_38.d
                                    sub_6b4d5b()
                                
                                int32_t var_24_4 = 0xf
                                int32_t var_28_4 = 0
                                var_38 = 0
                                
                                if (var_40_1 u>= 0x10)
                                    int32_t var_a0_23 = var_54.d
                                    sub_6b4d5b()
                                
                                result = result_5
                                int32_t var_40_5 = 0xf
                                int32_t var_44_5 = 0
                                var_54 = 0
                                cond:1_1 = result == 0
                                goto label_59d1da
                            
                            result = result_4
                            
                            if (result + 4 u> var_6c)
                                if (var_24_3 u>= 0x10)
                                    int32_t var_a0_24 = var_38.d
                                    sub_6b4d5b()
                                
                                int32_t var_24_5 = 0xf
                                int32_t var_28_5 = 0
                                var_38 = 0
                                
                                if (var_40_1 u>= 0x10)
                                    int32_t var_a0_25 = var_54.d
                                    sub_6b4d5b()
                                
                                int32_t var_40_6 = 0xf
                                int32_t var_44_6 = 0
                                var_54 = 0
                                
                                if (result_5 == 0)
                                    goto label_59d1e5_2
                                
                                void* result_6 = result_5
                                sub_6b4d5b()
                                result.b = 0
                                goto label_59d4ff
                            
                            uint32_t eax_37 = zx.d(*result)
                            uint32_t esi_12 = (zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8
                                | zx.d(*(result + 1))
                            result_4 = result + 4
                            *sub_513fa0(var_74 + 0x24, &var_38) = esi_12 << 8 | eax_37
                            var_c_1.b = 4
                            
                            if (var_24_3 u>= 0x10)
                                int32_t var_a0_19 = var_38.d
                                sub_6b4d5b()
                            
                            ebx_3 += 1
                        while (ebx_3 s< var_58)
                    
                    if (var_40_1 u>= 0x10)
                        int32_t var_a0_20 = var_54.d
                        sub_6b4d5b()
                    
                    result = result_5
                    int32_t var_40_3 = 0xf
                    int32_t var_44_3 = 0
                    var_54 = 0
                    
                    if (result == 0)
                        result.b = 1
                    else
                        void* result_2 = result
                        sub_6b4d5b()
                        result.b = 1
                else
                    int32_t edi_7
                    
                    while (true)
                        edi_7 = 0
                        
                        if (*(var_74 + 0x10) s> 0)
                            break
                        
                    label_59d404:
                        void* i_4 = i_3 + 1
                        ebx_2 += 0x20
                        i_3 = i_4
                        
                        if (i_4 s>= *var_84_1)
                            goto label_59d410
                    
                    int32_t esi_7 = 0
                    
                    while (sub_410070(&result_4, *(*(var_74 + 0x14) + ebx_2 + 0x10) + esi_7) != 0)
                        edi_7 += 1
                        esi_7 += 0x1c
                        
                        if (edi_7 s>= *(var_74 + 0x10))
                            goto label_59d404
                    
                    if (var_40_1 u>= 0x10)
                        int32_t var_a0_21 = var_54.d
                        sub_6b4d5b()
                    
                    result = result_5
                    int32_t var_40_4 = 0xf
                    int32_t var_44_4 = 0
                    var_54 = 0
                    
                    if (result == 0)
                    label_59d1e5:
                        result.b = 0
                    else
                        void* result_3 = result
                        sub_6b4d5b()
                        result.b = 0
            else
                int128_t* var_a0_8 = arg2
                sub_40da60(0x74a2d8)
            label_59d299:
                sub_401110(&var_54)
                sub_65ab60(&result_5)
                result.b = 0
        else
            if (var_40_1 u>= 0x10)
                int32_t var_a0_7 = var_54.d
                sub_6b4d5b()
            
            int32_t var_40_2 = 0xf
            int32_t var_44_2 = 0
            var_54 = 0
            
            if (result_7 == 0)
            label_59d1e5_1:
                result.b = 0
            else
                void* result_9 = result_7
                sub_6b4d5b()
                result.b = 0
    else if (result_7 == 0)
        result.b = 1
    else
        void* result_8 = result_7
        sub_6b4d5b()
        result.b = 1
else
    int128_t* eax_8 = arg2
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    var_38 = 0
    void* edx_1 = eax_8 + 1
    char i_2
    
    do
        i_2 = *eax_8
        eax_8 += 1
    while (i_2 != 0)
    sub_401270(&var_38, eax_8 - edx_1, arg2)
    var_c_1.b = 3
    char* eax_10 = var_38.d
    
    if (var_24_1 u< 0x10)
        eax_10 = &var_38
    
    char* var_a0_4 = eax_10
    sub_40da60(0x7464e4)
    
    if (var_24_1 u>= 0x10)
        int32_t var_a0_5 = var_38.d
        sub_6b4d5b()
    
    result = result_5
    int32_t var_24_2 = 0xf
    int32_t var_28_2 = 0
    var_38 = 0
    cond:1_1 = result == 0
label_59d1da:
    
    if (not(cond:1_1))
        void* result_1 = result
        sub_6b4d5b()
    
label_59d1e5_2:
    result.b = 0
label_59d4ff:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &i_3)
return result
