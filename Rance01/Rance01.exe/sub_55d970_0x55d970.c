// 函数: sub_55d970
// 地址: 0x55d970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ed20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_88
int32_t eax_2 = data_78c474 ^ &var_88
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* esi = arg1
int32_t* var_6c = esi
int32_t* var_70 = ebx
int32_t var_50 = 0xf
int32_t var_54 = 0
char var_64 = 0
int32_t var_4 = 0
void* result

if (sub_5568e0(ebx, &var_64).b != 0)
    if (sub_402680(0x74c6c0, &var_64).b != 0)
        int32_t* ecx_1 = ebx[3]
        result = ebx[1]
        
        if (result s< &ecx_1[1])
            if (var_50 u>= 0x10)
                int32_t var_a0_4 = var_64.d
                sub_6b4d5b()
            
            result.b = 0
        else
            int32_t eax_5
            
            if (result != 0)
                eax_5 = *ebx
            else
                eax_5 = 0
            
            int32_t eax_6 = *(ecx_1 + eax_5)
            ebx[3] = &ecx_1[1]
            
            if (eax_6 != 0)
                sub_401110(&var_64)
                result.b = 0
            else if (sub_556800(ebx, &var_88) == 0)
                sub_401110(&var_64)
                result.b = 0
            else if (*(esi[1] + 0x34) == var_88)
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                char var_48 = 0
                var_4.b = 1
                
                if (sub_5568e0(ebx, &var_48) == 0)
                    goto label_55dd69
                
                int32_t* eax_14 = (*(*esi + 4))(eax_4)
                char* edi_2 = &var_48
                char const* const var_a0_6
                
                if (eax_14 != 0)
                    if (sub_402680(eax_14, edi_2) != 0)
                        goto label_55db38
                    
                    var_a0_6 = "IVMArray2::Load()\n"
                    goto label_55db05
                
                if (sub_402680(0x72d951, edi_2) != 0)
                label_55db38:
                    void* var_74
                    
                    if (sub_556800(ebx, &var_74) == 0)
                        goto label_55dd69
                    
                    void* ebp_1 = var_74
                    int32_t edi_3 = 0
                    void* var_84
                    
                    if (ebp_1 s<= 0)
                        (*(*esi + 0x20))()
                    else
                        int32_t edx_6 = *(*esi + 0x18)
                        var_84 = ebp_1
                        
                        if (edx_6(&var_84, 1) == 0)
                            goto label_55dd69
                    
                    if (var_88 - 0xe u> 0x24)
                    label_55dd5d:
                        sub_604c90("IVMArray2::Save()\n")
                    label_55dd69:
                        sub_401110(&var_48)
                        sub_401110(&var_64)
                        result.b = 0
                    else
                        switch (var_88 + &jump_table_55dda0[0]:2)
                            case &lookup_table_55ddb0, &lookup_table_55ddb0[1], 
                                    &lookup_table_55ddb0[0x10], &lookup_table_55ddb0[0x24]
                                if (ebp_1 s> 0)
                                    do
                                        if ((*(*esi + 0x10))(edi_3) == 0)
                                            goto label_55dd69
                                        
                                        if (sub_556800(ebx, &var_84) == 0)
                                            goto label_55dd69
                                        
                                        if ((*(*esi + 0x14))(edi_3, &var_84) == 0)
                                            goto label_55dd69
                                        
                                        edi_3 += 1
                                    while (edi_3 s< ebp_1)
                            case &lookup_table_55ddb0[2]
                                if (ebp_1 s> 0)
                                    while (true)
                                        int32_t var_18_1 = 0xf
                                        int32_t var_1c_1 = 0
                                        char var_2c = 0
                                        var_4.b = 2
                                        char* ecx_12 = &var_2c
                                        
                                        if (sub_5568e0(ebx, &var_2c) != 0)
                                            char eax_32 = sub_5603e0(ecx_12, edi_3, esi, &var_2c)
                                            ecx_12 = &var_2c
                                            
                                            if (eax_32 != 0)
                                                var_4.b = 1
                                                sub_401110(ecx_12)
                                                edi_3 += 1
                                                
                                                if (edi_3 s>= ebp_1)
                                                    goto label_55dbdb
                                                
                                                continue
                                        
                                        sub_401110(ecx_12)
                                        break
                                    
                                    goto label_55dd69
                            case &lookup_table_55ddb0[3]
                                var_88 = 0
                                
                                if (ebp_1 s> 0)
                                    while (true)
                                        if (sub_556800(ebx, &var_84) == 0)
                                            goto label_55dd69
                                        
                                        int32_t ebx_1 = 0
                                        int32_t ebp_2 = 0
                                        int32_t var_80 = 0
                                        int32_t var_7c_1 = 0
                                        int32_t var_78_1 = 0
                                        var_4.b = 3
                                        void* edi_4 = var_84
                                        
                                        if (edi_4 s<= 0)
                                            goto label_55dcdf
                                        
                                        int32_t* eax_46
                                        
                                        if (sub_427ad0(&var_80, edi_4) == 0)
                                            eax_46 = &var_80
                                        else
                                            ebp_2 = var_7c_1
                                            ebx_1 = var_80
                                            int32_t eax_37 = neg.d(ebp_2)
                                            
                                            if (sub_5567c0(var_70, edi_4, 
                                                    sbb.d(eax_37, eax_37, ebp_2 != 0) & ebx_1) == 0)
                                                eax_46 = &var_80
                                            else
                                                esi = var_6c
                                            label_55dcdf:
                                                int32_t* edi_5 = esi[1]
                                                int32_t edx_12 = var_88
                                                int32_t var_68
                                                
                                                if (sub_54f990(edi_5, edx_12, &var_68) == 0)
                                                    eax_46 = &var_80
                                                else
                                                    void* eax_43 =
                                                        sub_5529f0(edi_5[5], edx_12, var_68)
                                                    
                                                    if (eax_43 == 0)
                                                        eax_46 = &var_80
                                                    else
                                                        int32_t edx_14 = neg.d(ebp_2)
                                                        eax_46 = &var_80
                                                        
                                                        if ((*(*sub_5521d0(eax_43) + 0x28))(
                                                                sbb.d(edx_14, edx_14, ebp_2 != 0)
                                                                    & ebx_1, 
                                                                ebp_2) != 0)
                                                            var_4.b = 1
                                                            sub_560430(eax_46)
                                                            int32_t eax_48 = var_88 + 1
                                                            var_88 = eax_48
                                                            
                                                            if (eax_48 s>= var_74)
                                                                break
                                                            
                                                            esi = var_6c
                                                            ebx = var_70
                                                            continue
                                        
                                        sub_560430(eax_46)
                                        goto label_55dd69
                            case &lookup_table_55ddb0[4], &lookup_table_55ddb0[5], 
                                    &lookup_table_55ddb0[6], &lookup_table_55ddb0[7], 
                                    &lookup_table_55ddb0[8], &lookup_table_55ddb0[9], 
                                    &lookup_table_55ddb0[0xa], &lookup_table_55ddb0[0xb], 
                                    &lookup_table_55ddb0[0xc], &lookup_table_55ddb0[0xd], 
                                    &lookup_table_55ddb0[0xe], &lookup_table_55ddb0[0xf], 
                                    &lookup_table_55ddb0[0x11], &lookup_table_55ddb0[0x12], 
                                    &lookup_table_55ddb0[0x13], &lookup_table_55ddb0[0x14], 
                                    &lookup_table_55ddb0[0x15], &lookup_table_55ddb0[0x16], 
                                    &lookup_table_55ddb0[0x17], &lookup_table_55ddb0[0x18], 
                                    &lookup_table_55ddb0[0x19], &lookup_table_55ddb0[0x1a], 
                                    &lookup_table_55ddb0[0x1b], &lookup_table_55ddb0[0x1c], 
                                    &lookup_table_55ddb0[0x1d], &lookup_table_55ddb0[0x1e], 
                                    &lookup_table_55ddb0[0x1f], &lookup_table_55ddb0[0x20], 
                                    &lookup_table_55ddb0[0x21], &lookup_table_55ddb0[0x22], 
                                    &lookup_table_55ddb0[0x23]
                                goto label_55dd5d
                        
                    label_55dbdb:
                        sub_401110(&var_48)
                        sub_401110(&var_64)
                        result.b = 1
                else
                    var_a0_6 = "IVMArray2::Load()\n"
                label_55db05:
                    ebx.b = sub_604c90(var_a0_6)
                    sub_401110(&var_48)
                    sub_401110(&var_64)
                    result.b = ebx.b
            else
                ebx.b = sub_604c90("IVMArray2::Load()\n")
                sub_401110(&var_64)
                result.b = ebx.b
    else
        if (var_50 u>= 0x10)
            int32_t var_a0_2 = var_64.d
            sub_6b4d5b()
        
        result.b = 0
else
    if (var_50 u>= 0x10)
        int32_t var_a0_1 = var_64.d
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_88)
return result
