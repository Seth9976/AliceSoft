// 函数: sub_660dd0
// 地址: 0x660dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722f8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_4 = 0
uint32_t var_84 = 0
uint32_t var_88 = 0
int128_t* var_80 = nullptr
int32_t var_7c = 0
int32_t var_78 = 0
int32_t var_70 = 0
int32_t var_6c = 0
int32_t var_68 = 0
var_4.b = 2
char result

if (*arg3 + 8 u<= arg3[1])
    if (sub_40ff90(arg3, &var_30, 4) != 0)
        if (sub_5546f0(arg3, &var_84) != 0)
            if (sub_5546f0(arg3, &var_88) == 0)
                goto label_660f27
            
            void* edi_1 = var_84
            
            if (*arg3 + edi_1 u<= arg3[1])
                if (sub_410150(sub_404f60(edi_1, &var_80), var_80, arg3, edi_1) == 0)
                    goto label_660f27
                
                sub_661230(&var_80)
                sub_404f60(var_88, &var_70)
                var_84 = 0
                var_4.b = 3
                struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_13 =
                    sub_59e250(0x7300a8)
                int32_t esi_6 = var_70
                struct IDecompressor::nutria::CZlibDecompressor::VTable** ebp_1 = eax_13
                var_84 = ebp_1
                
                if (ebp_1 != 0)
                    (*ebp_1)->vFunc_2(esi_6, var_88, var_80, edi_1)
                    (*ebp_1)->vFunc_1(eax_4)
                    ebp_1 = nullptr
                    var_84 = 0
                
                int32_t var_60 = esi_6
                int32_t var_38_1 = 0
                
                if (arg4 s> 0)
                    while (true)
                        var_88 = 0
                        int128_t* var_58 = nullptr
                        int32_t var_54_1 = 0
                        int32_t var_50_1 = 0
                        var_4.b = 4
                        
                        if (var_60 + 8 u> var_6c)
                            sub_604c90(0x73169c)
                        else
                            int32_t* ecx_10 = &var_60
                            uint32_t var_40
                            
                            if (sub_5546f0(ecx_10, &var_40) != 0
                                    && sub_5546f0(ecx_10, &var_88) != 0)
                                uint32_t edi_2 = var_88
                                
                                if (edi_2 != 0)
                                    if (var_60 + edi_2 u> var_6c)
                                        sub_604c90(0x7316d0)
                                    else if (sub_410150(sub_404f60(edi_2, &var_58), var_58, 
                                            &var_60, edi_2) != 0)
                                        int128_t* var_48 = var_58
                                        int32_t var_44_1 = var_54_1
                                        char* eax_22 = sub_6697c0(arg1)
                                        
                                        if (eax_22 != 0)
                                            if (var_40 - 1 u<= 5)
                                                bool cond:0_1
                                                
                                                switch (var_40)
                                                    case 1
                                                        cond:0_1 = sub_661320(&var_48, eax_22) == 0
                                                    case 2
                                                        cond:0_1 = sub_661480(&var_48, eax_22) == 0
                                                    case 3
                                                        cond:0_1 = sub_6615e0(&var_48, eax_22) == 0
                                                    case 4
                                                        cond:0_1 =
                                                            sub_661810(eax_22, arg1, arg2, &var_48)
                                                            == 0
                                                    case 5
                                                        cond:0_1 =
                                                            sub_662590(arg1, &var_48, eax_22) == 0
                                                    case 6
                                                        cond:0_1 =
                                                            sub_6628e0(eax_22, arg1, arg2, &var_48)
                                                            == 0
                                                
                                                if (cond:0_1 != 0)
                                                    sub_668d80(eax_22)
                                                    char* var_a4_18 = eax_22
                                                    sub_6b4d5b()
                                                    uint32_t var_a4_19 = var_40
                                                    sub_604c90(0x731708)
                                                else
                                                    sub_65ab60(&var_58)
                                                    int32_t eax_27 = var_38_1 + 1
                                                    var_38_1 = eax_27
                                                    
                                                    if (eax_27 s>= arg4)
                                                        break
                                                    
                                                    continue
                                            
                                            sub_65ab60(&var_58)
                                            var_4.b = 2
                                            
                                            if (ebp_1 != 0)
                                                (*ebp_1)->vFunc_1(eax_4)
                                            
                                            goto label_660f27
                        
                        sub_65ab60(&var_58)
                        var_4.b = 2
                        
                        if (ebp_1 != 0)
                            (*ebp_1)->vFunc_1(eax_4)
                        
                        goto label_660f27
                
                var_4.b = 2
                
                if (ebp_1 != 0)
                    (*ebp_1)->vFunc_1(eax_4)
                
                sub_65ab60(&var_70)
                sub_65ab60(&var_80)
                sub_401110(&var_30)
                result = 1
            else
                sub_604c90(0x731668)
            label_660f27:
                sub_65ab60(&var_70)
                sub_65ab60(&var_80)
                sub_401110(&var_30)
                result = 0
        else if (var_1c u< 0x10)
            result = 0
        else
            int32_t var_a4_4 = var_30.d
            sub_6b4d5b()
            result = 0
    else if (var_1c u< 0x10)
        result = 0
    else
        int32_t var_a4_2 = var_30.d
        sub_6b4d5b()
        result = 0
else
    sub_604c90(0x731634)
    
    if (var_1c u>= 0x10)
        int32_t var_a4_1 = var_30.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
