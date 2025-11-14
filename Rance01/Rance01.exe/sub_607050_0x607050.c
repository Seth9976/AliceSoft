// 函数: sub_607050
// 地址: 0x607050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71daba
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
char result

if (sub_40ff90(arg2, &var_2c, 4) != 0)
    if (sub_402680("JDG2", &var_2c) == 0)
    label_6073f8:
        
        if (var_18 u< 0x10)
        label_6070c5:
            result = 0
        else
            int32_t var_70_31 = var_2c.d
            sub_6b4d5b()
            result = 0
    else
        uint32_t var_34
        
        if (sub_5546f0(arg2, &var_34) == 0)
            goto label_6070b1
        
        sub_513f30(&var_58)
        var_4.b = 1
        sub_609510(arg1, &var_58)
        uint32_t var_40
        
        if (sub_5546f0(arg2, &var_40) == 0)
        label_607449:
            var_4.b = 0
            sub_428520(&var_58, &var_58)
            sub_401110(&var_2c)
            result = 0
        else
            int32_t* var_48
            int32_t ecx_6
            int32_t edx_1
            ecx_6, edx_1 = sub_617cf0(arg1 + 0xabc, &var_48, *(arg1 + 0xabc), *(arg1 + 0xac0))
            uint32_t edi_2 = var_40
            sub_617c50(edi_2, edx_1, ecx_6, arg1 + 0xabc)
            int32_t var_38_1 = 0
            int32_t** var_54
            
            if (edi_2 s> 0)
                int32_t var_44_1 = 0
                uint32_t edi_3 = edi_2
                
                while (true)
                    uint32_t var_3c
                    
                    if (sub_5546f0(arg2, &var_3c) == 0)
                        goto label_607449
                    
                    int32_t ebx_1 = 0
                    
                    if (var_3c s> 0)
                        while (true)
                            int32_t* eax_9 = operator new(0x84)
                            int32_t* esi_3
                            
                            if (eax_9 == 0)
                                esi_3 = nullptr
                            else
                                sub_61b600(eax_9)
                                esi_3 = eax_9
                            
                            char* eax_10 = *arg2
                            
                            if (&eax_10[4] u> arg2[1])
                                if (esi_3 != 0)
                                    sub_6074b0(esi_3)
                                    int32_t* var_70_24 = esi_3
                                    sub_6b4d5b()
                                
                                var_4.b = 2
                                sub_429bc0(&var_58, &var_48, *var_54, var_54)
                                int32_t** var_70_26 = var_54
                                sub_6b4d5b()
                                
                                if (var_18 u< 0x10)
                                    goto label_6070c5_2
                                
                                int32_t var_70_27 = var_2c.d
                                sub_6b4d5b()
                                result = 0
                                goto label_607351
                            
                            *esi_3 = ((zx.d(eax_10[3]) << 8 | zx.d(eax_10[2])) << 8
                                | zx.d(eax_10[1])) << 8 | zx.d(*eax_10)
                            *arg2 += 4
                            
                            if (sub_410070(arg2, &esi_3[1]) == 0)
                                sub_6074b0(esi_3)
                                int32_t* var_70_28 = esi_3
                                sub_6b4d5b()
                                var_4.b = 3
                                sub_429bc0(&var_58, &var_48, *var_54, var_54)
                                int32_t** var_70_30 = var_54
                                sub_6b4d5b()
                                break
                            
                            if (sub_5546f0(arg2, &esi_3[8]) != 0)
                                if (sub_5546f0(arg2, &esi_3[9]) == 0)
                                    sub_607490(esi_3)
                                    goto label_607449
                                
                                if (sub_5546f0(arg2, &esi_3[0xa]) == 0)
                                label_60746f:
                                    var_4.b = 0
                                    sub_428520(sub_607490(esi_3), &var_58)
                                    sub_401110(&var_2c)
                                    result = 0
                                    goto label_607351
                                
                                if (sub_5546f0(arg2, &esi_3[0xb]) != 0)
                                    if (sub_5546f0(arg2, &esi_3[0xc]) == 0)
                                        sub_607490(esi_3)
                                        goto label_607449
                                    
                                    if (sub_5546f0(arg2, &esi_3[0xd]) == 0)
                                        goto label_60746f
                                    
                                    if (sub_5546f0(arg2, &esi_3[0xe]) != 0)
                                        if (sub_410070(arg2, &esi_3[0xf]) == 0)
                                            sub_607490(esi_3)
                                            goto label_607449
                                        
                                        if (sub_5546f0(arg2, &esi_3[0x16]) == 0)
                                            goto label_60746f
                                        
                                        if (var_34 s< 1)
                                        label_6072df:
                                            int32_t* edi_6 = *(arg1 + 0xabc) + var_44_1 + 4
                                            var_48 = esi_3
                                            sub_61b5a0(&var_48, edi_6)
                                            ebx_1 += 1
                                            
                                            if (ebx_1 s< var_3c)
                                                continue
                                            
                                            edi_3 = var_40
                                            goto label_6072fe
                                        else if (sub_5546f0(arg2, &esi_3[0x17]) != 0)
                                            if (sub_5546f0(arg2, &esi_3[0x18]) == 0)
                                                sub_607490(esi_3)
                                                goto label_607449
                                            
                                            if (sub_40ff40(&esi_3[0x19], arg2, &esi_3[0x19]) == 0)
                                                goto label_60746f
                                            
                                            if (sub_410070(arg2, &esi_3[0x1a]) != 0)
                                                goto label_6072df
                            
                            var_4.b = 0
                            sub_428520(sub_607490(esi_3), &var_58)
                            sub_401110(&var_2c)
                            result = 0
                            goto label_607351
                        
                        break
                    
                label_6072fe:
                    var_44_1 += 0x14
                    int32_t eax_33 = var_38_1 + 1
                    var_38_1 = eax_33
                    
                    if (eax_33 s>= edi_3)
                        goto label_607310
                
                goto label_6073f8
            
        label_607310:
            var_4.b = 4
            sub_429bc0(&var_58, &var_48, *var_54, var_54)
            int32_t** var_70_22 = var_54
            sub_6b4d5b()
            
            if (var_18 u>= 0x10)
                int32_t var_70_23 = var_2c.d
                sub_6b4d5b()
            
            result = 1
else
label_6070b1:
    
    if (var_18 u< 0x10)
    label_6070c5_1:
        result = 0
    else
        int32_t var_70_1 = var_2c.d
        sub_6b4d5b()
    label_6070c5_2:
        result = 0

label_607351:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
