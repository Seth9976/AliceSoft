// 函数: sub_6c8ba0
// 地址: 0x6c8ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79a054
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t* var_1c = &result
result = 0
int32_t var_50 = 0
int32_t var_8_1 = 0
int32_t var_48 = 0
arg1[0x16] = arg2
int32_t* var_58 = &result
int32_t result_1 = sub_6c7940(arg1)
result = result_1

if (result_1 == 0)
    int32_t* esi_1 = &arg1[0x16]
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 8 && eax_2 != 0xa)
        if (eax_2 == 0xc && esi_1[0xe09] == 0)
            goto label_6c9579
        
        goto label_6c8c33
    
    if (esi_1[0xe09] != 0)
        goto label_6c8c33
    
label_6c9579:
    HANDLE eax_100 = sub_6ca780(arg1[8], 0xc0000000)
    HANDLE var_50_1 = eax_100
    
    if (eax_100 == 0)
        result = 0xfffffff6
    else
        esi_1 = &arg1[0x16]
        esi_1[0xe09] = eax_100
    label_6c8c33:
        
        if (*arg1 == 0 && esi_1[0xdf8] == 0)
            esi_1[0x13] = arg1[0xb]
            esi_1[0x14] = arg1[0xc]
            esi_1[0x15] = arg1[0xd]
            int32_t edi_14 = arg1[0xe]
            esi_1[0x16] = edi_14
            esi_1[0x17] = arg1[0xf]
            esi_1[0x11] = arg1[9]
            esi_1[0x12] = arg1[0xa]
            esi_1[0x10] = arg1[8]
            esi_1[8] = arg1[1]
            esi_1[9] = arg1[2]
            int32_t ecx_4 = arg1[3]
            esi_1[0xa] = ecx_4
            esi_1[0xb] = arg1[4]
            esi_1[0xc] = arg1[5]
            int32_t eax_74 = arg1[6]
            esi_1[0xd] = eax_74
            int32_t edx_35 = arg1[7]
            esi_1[0xe] = edx_35
            int32_t eax_75 = arg1[2]
            int32_t edi_15 = arg1[4]
            int32_t edi_18
            
            if (edx_35 == 2)
                edi_18 = edi_15 + (eax_75 << 1)
            else
                edi_18 = arg1[5] * eax_75 + edi_15
            
            esi_1[0xf] = edi_18
            
            if (ecx_4 s< 0)
                esi_1[0xf] = neg.d(edi_18)
            
            esi_1[0x1a] = arg1[0x12]
            esi_1[0x1b] = arg1[0x13]
            esi_1[0x1c] = arg1[0x14]
            
            if (edx_35 == 2 && eax_74 == 3 && edi_14 == 3)
                esi_1[0x17] = 2
        
        int32_t* var_58_1 = &result
        sub_6cb3e0(esi_1)
        result = 0
        int32_t* ecx_2 = &arg1[0x16]
        ecx_2[0x1a] = 1
        int32_t eax_8 = ecx_2[0x16]
        int32_t eax_9
        
        if (eax_8 != 1 && eax_8 != 5)
            eax_9 = ecx_2[0xd]
        
        if (eax_8 == 1 || eax_8 == 5 || eax_9 == 4 || eax_9 == 0xff || eax_9 == 3)
            ecx_2[0x1a] = 0
        
        int32_t eax_10 = arg1[0xd]
        int32_t var_20_1 = eax_10
        ecx_2[0xdf0] = eax_10
        int32_t eax_11 = arg1[0xf]
        
        if (eax_11 == 0)
            int32_t edx_43 = 0
            int32_t var_44_3 = 0
            
            if (var_20_1 s> 0)
                int32_t eax_91
                
                do
                    int32_t eax_90 = edx_43 << 4
                    *(eax_90 + ecx_2[0xdf3]) = edx_43
                    *(eax_90 + ecx_2[0xdf3] + 4) = 1
                    *(eax_90 + ecx_2[0xdf3] + 8) = 1
                    edx_43 += 1
                    int32_t var_44_4 = edx_43
                    eax_91 = ecx_2[0xdf0]
                    var_20_1 = eax_91
                while (edx_43 s< eax_91)
            
            if (ecx_2[0xdc5] == 0)
                *(ecx_2[0xdf3] + 0xc) = 0
                
                if (ecx_2[0x1a] == 0)
                    var_20_1 = ecx_2[0xdf0]
                else
                    int32_t eax_94 = ecx_2[0xdf0]
                    var_20_1 = eax_94
                    
                    if (eax_94 s>= 2)
                        int32_t ebx_40 = 1
                        int32_t var_44_5 = 1
                        
                        if (eax_94 s> 1)
                            int32_t esi_16
                            
                            do
                                *((ebx_40 << 4) + ecx_2[0xdf3] + 0xc) = 1
                                ebx_40 += 1
                                int32_t var_44_6 = ebx_40
                                esi_16 = ecx_2[0xdf0]
                                var_20_1 = esi_16
                            while (ebx_40 s< esi_16)
        else if (eax_11 == 1)
            *ecx_2[0xdf3] = 0
            *(ecx_2[0xdf3] + 4) = 2
            *(ecx_2[0xdf3] + 8) = 2
            *(ecx_2[0xdf3] + 0x10) = 1
            *(ecx_2[0xdf3] + 0x14) = 1
            *(ecx_2[0xdf3] + 0x18) = 1
            *(ecx_2[0xdf3] + 0x20) = 2
            *(ecx_2[0xdf3] + 0x24) = 1
            *(ecx_2[0xdf3] + 0x28) = 1
            
            if (ecx_2[0xdc5] != 0)
                var_20_1 = ecx_2[0xdf0]
            else if (arg1[0x12] == 0)
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 0
                *(ecx_2[0xdf3] + 0x2c) = 0
                var_20_1 = ecx_2[0xdf0]
            else
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 1
                *(ecx_2[0xdf3] + 0x2c) = 1
                var_20_1 = ecx_2[0xdf0]
        else if (eax_11 == 2)
            *ecx_2[0xdf3] = 0
            *(ecx_2[0xdf3] + 4) = 2
            *(ecx_2[0xdf3] + 8) = 1
            *(ecx_2[0xdf3] + 0x10) = 1
            *(ecx_2[0xdf3] + 0x14) = 1
            *(ecx_2[0xdf3] + 0x18) = 1
            *(ecx_2[0xdf3] + 0x20) = 2
            *(ecx_2[0xdf3] + 0x24) = 1
            *(ecx_2[0xdf3] + 0x28) = 1
            
            if (ecx_2[0xdc5] != 0)
                var_20_1 = ecx_2[0xdf0]
            else if (arg1[0x12] == 0)
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 0
                *(ecx_2[0xdf3] + 0x2c) = 0
                var_20_1 = ecx_2[0xdf0]
            else
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 1
                *(ecx_2[0xdf3] + 0x2c) = 1
                var_20_1 = ecx_2[0xdf0]
        else if (eax_11 == 3)
            *ecx_2[0xdf3] = 0
            *(ecx_2[0xdf3] + 4) = 2
            *(ecx_2[0xdf3] + 8) = 2
            *(ecx_2[0xdf3] + 0x10) = 1
            *(ecx_2[0xdf3] + 0x14) = 1
            *(ecx_2[0xdf3] + 0x18) = 1
            *(ecx_2[0xdf3] + 0x20) = 2
            *(ecx_2[0xdf3] + 0x24) = 1
            *(ecx_2[0xdf3] + 0x28) = 1
            *(ecx_2[0xdf3] + 0x30) = 3
            *(ecx_2[0xdf3] + 0x34) = 2
            *(ecx_2[0xdf3] + 0x38) = 2
            
            if (ecx_2[0xdc5] != 0)
                var_20_1 = ecx_2[0xdf0]
            else if (arg1[0x12] == 0)
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 0
                *(ecx_2[0xdf3] + 0x2c) = 0
                *(ecx_2[0xdf3] + 0x3c) = 0
                var_20_1 = ecx_2[0xdf0]
            else
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 1
                *(ecx_2[0xdf3] + 0x2c) = 1
                *(ecx_2[0xdf3] + 0x3c) = 0
                var_20_1 = ecx_2[0xdf0]
        else if (eax_11 == 4)
            *ecx_2[0xdf3] = 0
            *(ecx_2[0xdf3] + 4) = 2
            *(ecx_2[0xdf3] + 8) = 1
            *(ecx_2[0xdf3] + 0x10) = 1
            *(ecx_2[0xdf3] + 0x14) = 1
            *(ecx_2[0xdf3] + 0x18) = 1
            *(ecx_2[0xdf3] + 0x20) = 2
            *(ecx_2[0xdf3] + 0x24) = 1
            *(ecx_2[0xdf3] + 0x28) = 1
            *(ecx_2[0xdf3] + 0x30) = 3
            *(ecx_2[0xdf3] + 0x34) = 2
            *(ecx_2[0xdf3] + 0x38) = 1
            
            if (ecx_2[0xdc5] != 0)
                var_20_1 = ecx_2[0xdf0]
            else if (arg1[0x12] == 0)
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 0
                *(ecx_2[0xdf3] + 0x2c) = 0
                *(ecx_2[0xdf3] + 0x3c) = 0
                var_20_1 = ecx_2[0xdf0]
            else
                *(ecx_2[0xdf3] + 0xc) = 0
                *(ecx_2[0xdf3] + 0x1c) = 1
                *(ecx_2[0xdf3] + 0x2c) = 1
                *(ecx_2[0xdf3] + 0x3c) = 0
                var_20_1 = ecx_2[0xdf0]
        
        ecx_2[0xde9] = 8
        ecx_2[0xdea] = arg1[0xb]
        ecx_2[0xdeb] = arg1[0xc]
        ecx_2[0x1b] = 0
        int32_t var_28_1 = 0
        ecx_2[0xdee] = 0
        int32_t var_2c_1 = 0
        ecx_2[0xdef] = 0
        int32_t ebx_28 = 0
        int32_t var_44_1 = 0
        
        if (var_20_1 s> 0)
            int32_t edx_18 = ecx_2[0xdf3]
            
            do
                int32_t eax_35 = ebx_28 << 4
                int32_t edi_10 = *(eax_35 + edx_18 + 4)
                
                if (var_28_1 s< edi_10)
                    var_28_1 = edi_10
                    ecx_2[0xdee] = edi_10
                
                int32_t edi_11 = *(eax_35 + edx_18 + 8)
                
                if (var_2c_1 s< edi_11)
                    var_2c_1 = edi_11
                    ecx_2[0xdef] = edi_11
                
                if (*(eax_35 + edx_18 + 4) != 1 || *(eax_35 + edx_18 + 8) != 1)
                    ecx_2[0x1b] = 1
                
                ebx_28 += 1
                int32_t var_44_2 = ebx_28
            while (ebx_28 s< var_20_1)
        
        int32_t var_2c_2
        int32_t eax_41
        
        if (ecx_2[0x1d] == 1)
            eax_41 = 8
            int32_t var_28_3 = 8
            ecx_2[0xded] = 8
            var_2c_2 = 8
            ecx_2[0xdec] = 8
        else
            eax_41 = var_28_1 * 8
            int32_t var_28_2 = eax_41
            ecx_2[0xded] = eax_41
            int32_t edx_22 = var_2c_1 * 8
            var_2c_2 = edx_22
            ecx_2[0xdec] = edx_22
        
        int32_t temp0_1 = divs.dp.d(sx.q(eax_41 + ecx_2[0x13] - 1), eax_41)
        ecx_2[0x1e] = temp0_1
        int32_t temp0_2 = divs.dp.d(sx.q(var_2c_2 + ecx_2[0x14] - 1), var_2c_2)
        ecx_2[0x1f] = temp0_2
        ecx_2[0xdf1] = temp0_1
        ecx_2[0xdf2] = temp0_2 * temp0_1
        int32_t eax_49
        
        if (ecx_2[0xdf8] == 0)
            ecx_2[0xe01] = 0
            int32_t eax_60 = arg1[3]
            int32_t eax_61
            
            if (eax_60 s< 0)
                eax_61 = (eax_60 + 1) * ecx_2[0xf] + ecx_2[8]
                ecx_2[8] = eax_61
            else
                eax_61 = ecx_2[8]
            
            ecx_2[0xe05] = eax_61
            int32_t* var_58_5 = &result
            int32_t result_3 = sub_6cc1a0(ecx_2)
            result = result_3
            
            if (result_3 == 0)
                ecx_2 = &arg1[0x16]
                eax_49 = *ecx_2
                
                if (eax_49 == 0xa || eax_49 == 0xb)
                    int32_t eax_62 = ecx_2[0xe01]
                    ecx_2[0x12] = eax_62
                    arg1[0xa] = eax_62
                    eax_49 = *ecx_2
                
                goto label_6c9108
        else
            eax_49 = *ecx_2
        label_6c9108:
            int32_t result_2
            
            if (eax_49 == 8 || eax_49 == 9 || eax_49 == 0xc || eax_49 == 0xd)
                ecx_2[0x120d] = (ecx_2 + 0x4857) & 0xffffffe0
                
                if (ecx_2[0x1378] == 0)
                    int32_t* var_58_4 = &result
                    result_2 = sub_6cc4f0(ecx_2)
                    result = result_2
                else
                    int32_t* var_58_3 = &result
                    result_2 = sub_6cdbd0(ecx_2)
                    result = result_2
                
                ecx_2 = &arg1[0x16]
                ecx_2[0xdf7] = 1
                int32_t edx_32 = var_48 + ecx_2[0xe01]
                int32_t var_48_1 = edx_32
                ecx_2[0x12] = edx_32
                arg1[0xa] = edx_32
            else
                result_2 = result
            
            if (result_2 == 1 || result_2 == 2)
                int32_t edx_27 = ((ecx_2[3] << 3) + 8) * ecx_2[0xdee]
                ecx_2[3] = edx_27
                int32_t eax_54 = ecx_2[0x13]
                
                if (edx_27 s> eax_54)
                    ecx_2[3] = eax_54
                
                int32_t edx_29 = ((ecx_2[4] << 3) + 8) * ecx_2[0xdef]
                ecx_2[4] = edx_29
                int32_t eax_56 = ecx_2[0x14]
                
                if (edx_29 s> eax_56)
                    ecx_2[4] = eax_56
            else
                HANDLE eax_50 = ecx_2[0xe09]
                
                if (eax_50 == 0)
                    int32_t var_8_2 = 0xffffffff
                else
                    int32_t* var_58_2 = &result
                    BOOL eax_51 = sub_6ca7c0(eax_50)
                    BOOL var_40_1 = eax_51
                    
                    if (eax_51 != 0)
                        arg1[0xe1f] = 0
                        var_8_2 = 0xffffffff
                    else
                        result = 0xfffffff7

if (result s< 0 && arg1[0xe1f] != 0)
    int32_t* var_58_6 = &result
    sub_6ca7c0(arg1[0xe1f])
    arg1[0xe1f] = 0

int32_t edx_1 = arg1[0xe12]
int32_t var_3c = edx_1
(*(edx_1 + 0x18))()
fsbase->NtTib.ExceptionList = ExceptionList
return result
