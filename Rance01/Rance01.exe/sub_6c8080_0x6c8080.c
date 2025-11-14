// 函数: sub_6c8080
// 地址: 0x6c8080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79a03c
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t* var_1c = &result
result = 0
int32_t var_78 = 0
int32_t var_8_1 = 0
arg1[0x16] = arg2
int32_t* ecx = arg1[0xe12]
int32_t* var_80 = &result
int32_t result_1 = sub_6c7940(arg1)
result = result_1

if (result_1 == 0)
    int32_t* var_38_1 = &arg1[0x16]
    int32_t edx_1 = arg1[0x16]
    
    if (edx_1 == 4 || edx_1 == 5 || edx_1 == 0 || edx_1 == 1 || edx_1 == 0x14 || edx_1 == 0x15)
        arg1[0xe0d] = 1
    
    int32_t* edx_2
    
    if (edx_1 == 6 || edx_1 == 7 || edx_1 == 2 || edx_1 == 3 || edx_1 == 0x12 || edx_1 == 0x13
            || edx_1 == 0x10 || edx_1 == 0x11 || edx_1 == 0xe || edx_1 == 0xf)
        if (arg1[0xddb] != 0)
            int32_t i_4 = 0
            int32_t var_70_1 = 0
            
            if (var_38_1[0x21] s> 0)
                int32_t i
                
                do
                    uint32_t* eax_42 = i_4 * 0xb4
                    *(eax_42 + &var_38_1[0x26]) = zx.d(var_38_1[0xdc8 + i_4 * 2].b)
                    *(&var_38_1[0x25] + eax_42) = 0
                    void* j_2 = nullptr
                    int32_t var_6c_1 = 0
                    void* j
                    
                    do
                        *(*(&var_38_1[0x27] + eax_42) + (j_2 << 1)) =
                            zx.w(*(j_2 + var_38_1[0xdc7 + i_4 * 2]))
                        *(*(&var_38_1[0x27] + eax_42) + (j_2 << 1) + 2) =
                            zx.w(*(j_2 + var_38_1[0xdc7 + i_4 * 2] + 1))
                        *(*(&var_38_1[0x27] + eax_42) + (j_2 << 1) + 4) =
                            zx.w(*(j_2 + var_38_1[0xdc7 + i_4 * 2] + 2))
                        *(*(&var_38_1[0x27] + eax_42) + (j_2 << 1) + 6) =
                            zx.w(*(j_2 + var_38_1[0xdc7 + i_4 * 2] + 3))
                        j = j_2 + 4
                        j_2 = j
                        void* j_1 = j
                    while (j s< 0x40)
                    i = i_4 + 1
                    i_4 = i
                    int32_t i_3 = i
                while (i s< var_38_1[0x21])
        
        if (var_38_1[0xdc6] == 0)
            edx_2 = arg1
        else
            int32_t i_1 = 0
            int32_t i_2 = 0
            
            if (var_38_1[0x24] s<= 0)
                edx_2 = arg1
            else
                do
                    uint32_t ecx_27 = zx.d(var_38_1[i_1 * 3 + 0xdd1].b)
                    uint32_t var_68_1 = ecx_27
                    uint32_t edx_34 = zx.d(*(&var_38_1[i_1 * 3] + 0x3745))
                    uint32_t var_64_1 = edx_34
                    int32_t ebx_29 = var_38_1[i_1 * 3 + 0xdcf]
                    int32_t var_60_1 = ebx_29
                    void* eax_47 = var_38_1[i_1 * 3 + 0xdd0]
                    void* var_5c_1 = eax_47
                    
                    if (ecx_27 == 0)
                        int32_t* var_80_7 = &result
                        int32_t result_4 = sub_6cb930(ebx_29, eax_47, ecx_27, edx_34, 
                            &var_38_1[edx_34 * 0x19c + 0x749])
                        result = result_4
                        
                        if (result_4 != 0)
                            result = 0xfffffffa
                            goto label_6c843d
                    else
                        int32_t* var_80_6 = &result
                        int32_t result_3 = sub_6cb930(ebx_29, eax_47, ecx_27, edx_34, 
                            &var_38_1[edx_34 * 0x19c + 0xd9])
                        result = result_3
                        
                        if (result_3 != 0)
                            result = 0xfffffffa
                            goto label_6c843d
                    
                    i_1 = i_2 + 1
                    i_2 = i_1
                    var_38_1 = &arg1[0x16]
                while (i_1 s< arg1[0x3a])
                
                edx_2 = arg1
    else
        edx_2 = arg1
        __builtin_memset(&edx_2[0x36], 0, 0x14)
    
    int32_t eax_4 = *var_38_1
    
    if (eax_4 != 2 && eax_4 != 4 && eax_4 != 6 && eax_4 != 0 && eax_4 != 0x12 && eax_4 != 0x10
            && eax_4 != 0xe)
        if (eax_4 == 0x14 && var_38_1[0xe09] == 0)
            goto label_6c849d
        
        goto label_6c81d5
    
    if (var_38_1[0xe09] != 0)
        goto label_6c81d5
    
label_6c849d:
    HANDLE eax_30 = sub_6ca780(edx_2[8], 0x80000000)
    HANDLE var_58_1 = eax_30
    
    if (eax_30 == 0)
        result = 0xfffffff6
    else
        var_38_1 = &arg1[0x16]
        arg1[0xe1f] = eax_30
        edx_2 = arg1
    label_6c81d5:
        int32_t eax_7
        
        if (*edx_2 != 0)
            eax_7 = var_38_1[8]
        label_6c8264:
            int32_t edx_3 = edx_2[3]
            
            if (edx_3 s< 0)
                eax_7 += (edx_3 + 1) * var_38_1[0xf]
                var_38_1[8] = eax_7
            
            var_38_1[0xe05] = eax_7
            var_38_1[0x120d] = (var_38_1 + 0x4857) & 0xffffffe0
            int32_t result_2 = sub_6ca8f0(var_38_1, &result)
            result = result_2
            
            if (result_2 == 0)
                void* ecx_7 = &arg1[0x16]
                int32_t eax_12
                int32_t edx_7
                
                if (*(ecx_7 + 0x4828) == 0)
                    int32_t edx_8 = *(ecx_7 + 0x54)
                    
                    if (edx_8 == 1)
                        *(ecx_7 + 0x58) = 4
                    
                    if (*(ecx_7 + 0x4df8) == 0)
                        edx_7 = *(ecx_7 + 0x34)
                        eax_12 = *ecx_7
                    else if (edx_8 == 3)
                        *(ecx_7 + 0x58) = 3
                        edx_7 = *(ecx_7 + 0x34)
                        eax_12 = *ecx_7
                    else
                        edx_7 = *(ecx_7 + 0x34)
                        eax_12 = *ecx_7
                else
                    eax_12 = *ecx_7
                    
                    if (eax_12 != 0 && eax_12 != 1)
                        edx_7 = *(ecx_7 + 0x34)
                    else
                        int32_t ebx_4 = *(ecx_7 + 0x54)
                        *(ecx_7 + 0x30) = ebx_4
                        
                        if (ebx_4 == 1)
                            *(ecx_7 + 0x58) = 4
                        
                        if (ebx_4 == 3)
                            int32_t edx_21
                            
                            if (*(ecx_7 + 0x482c) == 0)
                                edx_21 = 1
                            else
                                edx_21 = 3
                            
                            *(ecx_7 + 0x58) = edx_21
                        
                        if (ebx_4 == 4)
                            int32_t edx_19
                            
                            if (*(ecx_7 + 0x482c) == 0)
                                edx_19 = 5
                            else
                                edx_19 = 6
                            
                            *(ecx_7 + 0x58) = edx_19
                            edx_7 = 5
                            *(ecx_7 + 0x34) = 5
                        else
                            edx_7 = *(ecx_7 + 0x34)
                
                if (edx_7 == 3 && *(ecx_7 + 0x58) == 3)
                    *(ecx_7 + 0x38) = 2
                
                if (eax_12 != 4 && eax_12 != 6 && eax_12 != 0 && eax_12 != 0x12 && eax_12 != 0x10
                        && eax_12 != 0xe && eax_12 != 0x14)
                    goto label_6c8392
                
                int32_t* var_80_2 = &result
                int32_t eax_17 =
                    sub_6ca810(*(ecx_7 + 0x3824), neg.d(*(ecx_7 + 0x380c) + *ecx), FILE_CURRENT)
                int32_t var_54_1 = eax_17
                
                if (eax_17 != 0)
                    ecx_7 = &arg1[0x16]
                    eax_12 = *ecx_7
                label_6c8392:
                    
                    if (eax_12 == 1 || eax_12 == 0x15)
                        *(ecx_7 + 0x37fc) = *(ecx_7 + 0x37f8) - *ecx
                    
                    arg1[0xb] = *(ecx_7 + 0x4c)
                    arg1[0xc] = *(ecx_7 + 0x50)
                    arg1[0xd] = *(ecx_7 + 0x54)
                    arg1[0x10] = *(ecx_7 + 0x60)
                    arg1[0x11] = *(ecx_7 + 0x64)
                    arg1[0x12] = *(ecx_7 + 0x68)
                    arg1[0x13] = *(ecx_7 + 0x6c)
                    int32_t eax_23 = 0xff
                    arg1[0xf] = 0xff
                    int32_t ebx_6 = *(ecx_7 + 0x37c0)
                    
                    if (ebx_6 == 1)
                        eax_23 = 0
                        arg1[0xf] = 0
                    else if (ebx_6 == 2)
                        void* ebx_23 = *(ecx_7 + 0x37cc)
                        
                        if (*(ebx_23 + 4) == 1 && *(ebx_23 + 8) == 1 && *(ebx_23 + 0x14) == 1
                                && *(ebx_23 + 0x18) == 1)
                            eax_23 = 0
                            arg1[0xf] = 0
                    else if (ebx_6 == 3)
                        void* esi_13 = *(ecx_7 + 0x37cc)
                        int32_t ebx_17 = *(esi_13 + 4)
                        
                        if (ebx_17 == 1 && *(esi_13 + 8) == 1 && *(esi_13 + 0x14) == 1
                                && *(esi_13 + 0x18) == 1 && *(esi_13 + 0x24) == 1
                                && *(esi_13 + 0x28) == 1)
                            eax_23 = 0
                            arg1[0xf] = 0
                        else if (ebx_17 == 2 && *(esi_13 + 8) == 2 && *(esi_13 + 0x14) == 1
                                && *(esi_13 + 0x18) == 1 && *(esi_13 + 0x24) == 1
                                && *(esi_13 + 0x28) == 1)
                            eax_23 = 1
                            arg1[0xf] = 1
                        else if (ebx_17 == 2 && *(esi_13 + 8) == 1 && *(esi_13 + 0x14) == 1
                                && *(esi_13 + 0x18) == 1 && *(esi_13 + 0x24) == 1
                                && *(esi_13 + 0x28) == 1)
                            eax_23 = 2
                            arg1[0xf] = 2
                    else if (ebx_6 == 4)
                        void* esi_12 = *(ecx_7 + 0x37cc)
                        int32_t ebx_9 = *(esi_12 + 4)
                        
                        if (ebx_9 == 1 && *(esi_12 + 8) == 1 && *(esi_12 + 0x14) == 1
                                && *(esi_12 + 0x18) == 1 && *(esi_12 + 0x24) == 1
                                && *(esi_12 + 0x28) == 1 && *(esi_12 + 0x34) == 1
                                && *(esi_12 + 0x38) == 1)
                            eax_23 = 0
                            arg1[0xf] = 0
                        else if (ebx_9 == 2 && *(esi_12 + 8) == 2 && *(esi_12 + 0x14) == 1
                                && *(esi_12 + 0x18) == 1 && *(esi_12 + 0x24) == 1
                                && *(esi_12 + 0x28) == 1 && *(esi_12 + 0x34) == 2
                                && *(esi_12 + 0x38) == 2)
                            eax_23 = 3
                            arg1[0xf] = 3
                        else if (ebx_9 == 2 && *(esi_12 + 8) == 1 && *(esi_12 + 0x14) == 1
                                && *(esi_12 + 0x18) == 1 && *(esi_12 + 0x24) == 1
                                && *(esi_12 + 0x28) == 1 && *(esi_12 + 0x34) == 2
                                && *(esi_12 + 0x38) == 1)
                            eax_23 = 4
                            arg1[0xf] = 4
                    
                    *(ecx_7 + 0x5c) = eax_23
                    arg1[0xe] = *(ecx_7 + 0x58)
                    arg1[6] = *(ecx_7 + 0x34)
                    arg1[5] = *(ecx_7 + 0x30)
                    int32_t eax_25 = *ecx_7
                    
                    if (eax_25 == 2 || eax_25 == 4 || eax_25 == 6)
                        HANDLE eax_38 = *(ecx_7 + 0x3824)
                        
                        if (eax_38 != 0)
                            int32_t* var_80_5 = &result
                            BOOL eax_39 = sub_6ca7c0(eax_38)
                            BOOL var_54_3 = eax_39
                            
                            if (eax_39 != 0)
                                arg1[0xe1f] = 0
                            else
                                result = 0xfffffff7
                else
                    result = 0xffffffe9
            else if (result_2 == 1)
                int32_t ecx_17 = ((arg1[0x19] << 3) + 8) * arg1[0xe04]
                arg1[0x19] = ecx_17
                int32_t edx_15 = arg1[0x29]
                
                if (ecx_17 s> edx_15)
                    arg1[0x19] = edx_15
                
                int32_t ecx_19 = ((arg1[0x1a] << 3) + 8) * arg1[0xe05]
                arg1[0x1a] = ecx_19
                int32_t edx_17 = arg1[0x2a]
                
                if (ecx_19 s> edx_17)
                    arg1[0x1a] = edx_17
        else
            eax_7 = edx_2[1]
            var_38_1[8] = eax_7
            var_38_1[9] = edx_2[2]
            int32_t ecx_2 = edx_2[3]
            var_38_1[0xa] = ecx_2
            var_38_1[0xb] = edx_2[4]
            var_38_1[0xc] = edx_2[5]
            var_38_1[0xd] = edx_2[6]
            var_38_1[0xe] = edx_2[7]
            int32_t esi_7 = edx_2[2] * edx_2[5] + edx_2[4]
            var_38_1[0xf] = esi_7
            
            if (ecx_2 s< 0)
                var_38_1[0xf] = neg.d(esi_7)
            
            int32_t esi_9 = edx_2[9]
            var_38_1[0x11] = esi_9
            var_38_1[0x10] = edx_2[8]
            int32_t ebx_3 = edx_2[0xa]
            var_38_1[0x12] = ebx_3
            var_38_1[0x16] = edx_2[0xe]
            var_38_1[0x1a] = edx_2[0x12]
            var_38_1[0x1b] = edx_2[0x13]
            var_38_1[0x1c] = edx_2[0x14]
            
            if (var_38_1[0xdf8] != 0)
                goto label_6c8264
            
            var_38_1[0xdfa] = 0
            var_38_1[0xdfb] = 0
            var_38_1[0xdfd] = 0
            var_38_1[0xe06].b = 0
            int32_t ecx_10 = *var_38_1
            
            if (ecx_10 != 2 && ecx_10 != 4 && ecx_10 != 0 && ecx_10 != 6 && ecx_10 != 0x12
                    && ecx_10 != 0x10 && ecx_10 != 0xe && ecx_10 != 0x14)
                var_38_1[0xdff] = esi_9
                var_38_1[0xe00] = esi_9 + ebx_3
                var_38_1[0xdfe] = esi_9
                var_38_1[0xe03] = ebx_3
                var_38_1[0xe02] = ebx_3
            
            if (ecx_10 == 2 || ecx_10 == 4 || ecx_10 == 0 || ecx_10 == 6 || ecx_10 == 0x12
                    || ecx_10 == 0x10 || ecx_10 == 0xe || ecx_10 == 0x14)
                var_38_1[0xdff] = &var_38_1[0xe0a]
                var_38_1[0xe00] = &var_38_1[0x120a]
                var_38_1[0xdfe] = &var_38_1[0xe0a]
                var_38_1[0xe03] = 0x1000
                var_38_1[0xe02] = 0x1000
            
            if (ecx_10 != 0x14)
                goto label_6c8264
            
            int32_t* var_80_3 = &result
            int32_t eax_32 = sub_6ca810(var_38_1[0xe09], 0, FILE_BEGIN)
            int32_t var_54_2 = eax_32
            
            if (eax_32 != 0)
                edx_2 = arg1
                var_38_1 = &arg1[0x16]
                eax_7 = arg1[0x1e]
                goto label_6c8264

label_6c843d:
ecx[6]()
int32_t var_8_2 = 0xffffffff

if (result s< 0 && arg1[0xe1f] != 0)
    int32_t* var_80_4 = &result
    sub_6ca7c0(arg1[0xe1f])
    arg1[0xe1f] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
