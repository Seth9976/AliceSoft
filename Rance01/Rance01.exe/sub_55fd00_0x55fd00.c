// 函数: sub_55fd00
// 地址: 0x55fd00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ec9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_a4
int32_t eax_2 = data_78c474 ^ &var_a4
int32_t __saved_edi
int32_t var_b8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = arg2[1]
void* result = *(ecx + 0x1c)
void* ecx_2 = *(*(ecx + 0x14) + 4)
int32_t edx_1 = *(ecx_2 + 0x12c) - *(ecx_2 + 0x128)
var_a4 = arg1

if (result u>= edx_1 s>> 4)
    result.b = 0
else
    int32_t eax_6 = result << 4
    
    if (eax_6 == neg.d(*(ecx_2 + 0x128)))
        result.b = 0
    else
        void* ebp_1 = *(eax_6 + *(ecx_2 + 0x128) + 4)
        
        if (ebp_1 == 0)
            result.b = 0
        else
            int32_t var_50_1 = 0xf
            int32_t var_54_1 = 0
            char var_64 = 0
            int32_t var_4 = 0
            
            if (sub_5568e0(arg1, &var_64).b != 0)
                int32_t var_98
                
                if (sub_402680(0x74c3cc, &var_64).b != 0)
                    if (sub_556800(arg1, &var_98) == 0 || var_98 != 0)
                        sub_401110(&var_64)
                        result.b = 0
                    else
                        int32_t var_34_1 = 0xf
                        int32_t var_38_1 = 0
                        char var_48 = 0
                        var_4.b = 1
                        
                        if (sub_5568e0(arg1, &var_48) == 0)
                        label_5601cb:
                            sub_401110(&var_48)
                            sub_401110(&var_64)
                            result.b = 0
                        else
                            char* ecx_4 = var_48.d
                            int32_t* eax_10 = ebp_1 + 0x10
                            
                            if (var_34_1 u< 0x10)
                                ecx_4 = &var_48
                            
                            int32_t esi_1 = eax_10[4]
                            int32_t edx_4 = esi_1
                            
                            if (esi_1 u>= var_38_1)
                                edx_4 = var_38_1
                            
                            if (eax_10[5] u>= 0x10)
                                eax_10 = *eax_10
                            
                            int32_t eax_11 = sub_402320(eax_10, eax_10, ecx_4, edx_4)
                            bool cond:0_1 = eax_11 == 0
                            
                            if (eax_11 == 0)
                                if (esi_1 u>= var_38_1)
                                    eax_11.b = esi_1 != var_38_1
                                else
                                    eax_11 = 0xffffffff
                                
                                cond:0_1 = eax_11 == 0
                            
                            eax_11.b = cond:0_1
                            eax_11.b = eax_11.b == 0
                            char const* const var_bc_7
                            
                            if (eax_11.b == 0)
                                int32_t* edi_3 = var_a4
                                
                                if (sub_556800(edi_3, &var_98) == 0)
                                    goto label_5601cb
                                
                                int32_t eax_15
                                int32_t edx_6
                                edx_6:eax_15 =
                                    muls.dp.d(0x2e8ba2e9, *(ebp_1 + 0x38) - *(ebp_1 + 0x34))
                                int32_t eax_16 = var_98
                                int32_t edx_7 = edx_6 s>> 3
                                
                                if ((edx_7 u>> 0x1f) + edx_7 != eax_16)
                                    var_bc_7 = "IVMStruct3::Load()\n"
                                    goto label_55fea1
                                
                                int32_t esi_2 = 0
                                int32_t var_a0_1 = 0
                                
                                if (eax_16 s> 0)
                                    while (true)
                                        int32_t var_6c
                                        
                                        if (sub_556800(edi_3, &var_6c) == 0)
                                            goto label_5601cb
                                        
                                        int32_t* eax_42
                                        bool cond:1_1
                                        
                                        switch (var_6c)
                                            case 0, 0xa, 0xb, 0x1b, 0x2f
                                                void var_78
                                                
                                                if (sub_556800(edi_3, &var_78) == 0)
                                                    goto label_5601cb
                                                
                                                if ((*(*arg2 + 0x10))(esi_2, &var_78) == 0)
                                                    goto label_5601cb
                                                
                                                goto label_560175
                                            case 0xc
                                                int32_t var_18_1 = 0xf
                                                int32_t var_1c_1 = 0
                                                char var_2c = 0
                                                var_4.b = 2
                                                char eax_24 = sub_5568e0(edi_3, &var_2c)
                                                char* ecx_13 = &var_2c
                                                char eax_26
                                                
                                                if (eax_24 != 0)
                                                    eax_26 =
                                                        sub_5603e0(ecx_13, esi_2, arg2, &var_2c)
                                                    ecx_13 = &var_2c
                                                
                                                if (eax_24 == 0 || eax_26 == 0)
                                                    sub_401110(ecx_13)
                                                    goto label_5601cb
                                                
                                                var_4.b = 1
                                                sub_401110(ecx_13)
                                                goto label_560175
                                            case 0xd
                                                void* var_74
                                                
                                                if (sub_556800(edi_3, &var_74) == 0)
                                                    goto label_5601cb
                                                
                                                int32_t ebx_2 = 0
                                                int32_t ebp_2 = 0
                                                int32_t var_88 = 0
                                                int32_t var_84_1 = 0
                                                int32_t var_80_1 = 0
                                                var_4.b = 3
                                                void* edi_4 = var_74
                                                
                                                if (edi_4 s<= 0)
                                                label_56004c:
                                                    int32_t* esi_5 = arg2[1]
                                                    int32_t var_7c
                                                    
                                                    if (sub_54f990(esi_5, var_a0_1, &var_7c) != 0)
                                                        void* eax_38 =
                                                            sub_5529f0(esi_5[5], var_a0_1, var_7c)
                                                        
                                                        if (eax_38 != 0)
                                                            int32_t ebp_3 = neg.d(ebp_2)
                                                            cond:1_1 = (
                                                                *(*sub_5521d0(eax_38) + 0x28))(
                                                                sbb.d(ebp_3, ebp_3, ebp_2 != 0)
                                                                    & ebx_2, 
                                                                edi_4) == 0
                                                            eax_42 = &var_88
                                                        label_56015a:
                                                            
                                                            if (cond:1_1)
                                                                sub_560430(eax_42)
                                                                goto label_5601cb
                                                            
                                                            var_4.b = 1
                                                            sub_560430(eax_42)
                                                            edi_3 = var_a4
                                                            esi_2 = var_a0_1
                                                        label_560175:
                                                            esi_2 += 1
                                                            var_a0_1 = esi_2
                                                            
                                                            if (esi_2 s>= var_98)
                                                                break
                                                            
                                                            continue
                                                else if (sub_427ad0(&var_88, edi_4) != 0)
                                                    ebp_2 = var_84_1
                                                    ebx_2 = var_88
                                                    int32_t eax_31 = neg.d(ebp_2)
                                                    
                                                    if (sub_5567c0(var_a4, edi_4, 
                                                            sbb.d(eax_31, eax_31, ebp_2 != 0)
                                                                & ebx_2) != 0)
                                                        goto label_56004c
                                                
                                                sub_560430(&var_88)
                                                goto label_5601cb
                                            case 0xe, 0xf, 0x10, 0x11, 0x32, 0x42
                                                void* var_70
                                                
                                                if (sub_556800(edi_3, &var_70) == 0)
                                                    goto label_5601cb
                                                
                                                int32_t ebx_3 = 0
                                                int32_t ebp_6 = 0
                                                int32_t var_94 = 0
                                                int32_t var_90_1 = 0
                                                int32_t var_8c_1 = 0
                                                var_4.b = 4
                                                void* edi_5 = var_70
                                                
                                                if (edi_5 s> 0)
                                                    if (sub_427ad0(&var_94, edi_5) == 0)
                                                        sub_560430(&var_94)
                                                        goto label_5601cb
                                                    
                                                    ebp_6 = var_90_1
                                                    ebx_3 = var_94
                                                    int32_t eax_47 = neg.d(ebp_6)
                                                    
                                                    if (sub_5567c0(var_a4, edi_5, 
                                                            sbb.d(eax_47, eax_47, ebp_6 != 0)
                                                                & ebx_3) == 0)
                                                        sub_560430(&var_94)
                                                        goto label_5601cb
                                                    
                                                    esi_2 = var_a0_1
                                                
                                                int32_t* edi_6 = arg2[1]
                                                int32_t var_68
                                                
                                                if (sub_54f990(edi_6, esi_2, &var_68) == 0)
                                                    sub_560430(&var_94)
                                                    goto label_5601cb
                                                
                                                void* eax_53 = sub_5529f0(edi_6[5], esi_2, var_68)
                                                
                                                if (eax_53 == 0)
                                                    sub_560430(&var_94)
                                                    goto label_5601cb
                                                
                                                int32_t edx_16 = neg.d(ebp_6)
                                                cond:1_1 = (*(*sub_552250(eax_53) + 0x28))(
                                                    sbb.d(edx_16, edx_16, ebp_6 != 0) & ebx_3, 
                                                    ebp_6) == 0
                                                eax_42 = &var_94
                                                goto label_56015a
                                        
                                        sub_604c90("IVMStruct3::Load()\n")
                                        goto label_5601cb
                                
                                sub_401110(&var_48)
                                sub_401110(&var_64)
                                result.b = 1
                            else
                                var_bc_7 = "IVMStruct3::Load()\n"
                            label_55fea1:
                                char eax_12 = sub_604c90(var_bc_7)
                                sub_401110(&var_48)
                                sub_401110(&var_64)
                                result.b = eax_12
                else if (var_50_1 u< 0x10)
                    result.b = 0
                else
                    int32_t var_bc_3 = var_64.d
                    sub_6b4d5b()
                    result.b = 0
            else
                if (var_50_1 u>= 0x10)
                    int32_t var_bc_2 = var_64.d
                    sub_6b4d5b()
                
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a4)
return result
