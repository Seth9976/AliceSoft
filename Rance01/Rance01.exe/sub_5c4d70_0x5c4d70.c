// 函数: sub_5c4d70
// 地址: 0x5c4d70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = arg9
int32_t* ebx = arg1
int32_t var_38 = 0xffffffff
int32_t var_34 = 0xffffffff
uint32_t eax = ebx[0x72]
int32_t* eax_1 = arg8
uint32_t edi = arg5
uint32_t var_50 = edi
int32_t var_4c = arg6
uint32_t var_58 = edi
int32_t var_54 = arg6
int32_t arg_20
uint32_t arg_28

if (eax_1 != 0 && i != 0)
    do
        uint32_t ebp_1 = arg_28
        i -= 1
        
        if (*eax_1 == ebp_1)
            if (ebp_1 != eax)
                do
                    arg_28 = eax
                    int32_t eax_25
                    int32_t edx_17
                    eax_25, edx_17 = sub_5c44d0(ebx, arg8, arg9, &arg_28, &arg_20)
                    ebx[2] = eax_25
                    ebx[3] = edx_17
                while (arg_28 != eax)
            
            ebx[0xd] = arg10 + 1
            int32_t eax_27 = ebx[0xe]
            
            if (eax_27 != 0)
                __free_base(eax_27)
            
            int32_t eax_28 = ebx[0x10]
            
            if (eax_28 != 0)
                __free_base(eax_28)
            
            int32_t eax_29 = ebx[0xf]
            
            if (eax_29 != 0)
                __free_base(eax_29)
            
            int32_t esi_5 = ebx[0xd]
            int32_t eax_30 = sub_6b5c43((esi_5 << 3) + 8)
            int32_t edx_18 = ebx[0x12]
            ebx[0xe] = eax_30
            int32_t eax_31 = _realloc(edx_18, esi_5 << 5)
            int32_t ecx_17 = ebx[0x13]
            ebx[0x12] = eax_31
            int32_t eax_34 = _realloc(ecx_17, ebx[0xd] << 4)
            int32_t esi_7 = ebx[0xd]
            ebx[0x13] = eax_34
            ebx[0x10] = sub_6b5c43(esi_7 << 2)
            ebx[0xf] = sub_6b5c43(esi_7 << 3)
            ebx[0x11] = sub_6b5c43(esi_7 << 4)
            int32_t eax_39 = ebx[0xe]
            *(eax_39 + (arg10 << 3) + 8) = arg5
            *(eax_39 + (arg10 << 3) + 0xc) = arg6
            int32_t eax_40 = ebx[0xe]
            *(eax_40 + (arg10 << 3)) = arg2
            int32_t ecx_20 = arg_20
            *(eax_40 + (arg10 << 3) + 4) = arg3
            int32_t eax_41 = arg7
            
            if (eax_41 s<= 0 && (eax_41 s< 0 || ecx_20 u< 0))
                ecx_20 = 0
                eax_41 = 0
            
            int32_t ebx_1 = ebx[0x11]
            int32_t ebp_8 = arg10 * 2
            *(ebx_1 + (ebp_8 << 3) + 8) = ecx_20
            *(ebx_1 + (ebp_8 << 3) + 0xc) = eax_41
            return 0
        
        eax_1 = &eax_1[1]
    while (i != 0)

int32_t esi = arg4
arg1 = nullptr
int32_t var_5c = 0
uint32_t arg_10
int32_t result

if (esi s<= arg6)
    uint32_t ebp_2 = arg_10
    
    if (esi s< arg6 || ebp_2 u< edi)
        while (true)
            uint32_t edx_22 = var_50
            int32_t eax_44 = sbb.d(var_4c, esi, edx_22 u< ebp_2)
            int32_t var_3c_2
            
            if (eax_44 s> 0 || (eax_44 s>= 0 && edx_22 - ebp_2 u>= 0x10000))
                uint32_t eax_45
                int32_t edx_24
                eax_45, edx_24 =
                    __alldiv(edx_22 + ebp_2, adc.d(var_4c, esi, edx_22 + ebp_2 u< edx_22), 2, 0)
                ebp_2 = eax_45
                var_3c_2 = edx_24
                esi = edx_24
            else
                var_3c_2 = esi
            
            if (ebp_2 != ebx[2] || esi != ebx[3])
                int32_t ecx_23 = *ebx
                int32_t eax_48
                
                if (ecx_23 == 0)
                    eax_48 = 0xffffff7f
                else
                    int32_t eax_46 = ebx[0xb1]
                    int32_t eax_47
                    
                    if (eax_46 != 0)
                        eax_47 = eax_46(ecx_23, ebp_2, esi, 0)
                    
                    if (eax_46 == 0 || eax_47 == 0xffffffff)
                        eax_48 = 0xffffff80
                    else
                        ebx[2] = ebp_2
                        ebx[3] = esi
                        
                        if (ebx[7] s>= 0)
                            __builtin_memset(&ebx[8], 0, 0x14)
                        
                        eax_48 = 0
                
                int32_t edx_25
                edx_25:result = sx.q(eax_48)
                
                if ((result | edx_25) != 0)
                    return result
            
            void* var_30
            uint32_t eax_49
            int32_t edx_26
            eax_49, edx_26 = sub_5c4290(ebx, &var_30, 0xffffffff, 0xffffffff)
            
            if (eax_49 == 0xffffff80 && edx_26 == 0xffffffff)
                return 0xffffff80
            
            if (edx_26 s< 0 || (edx_26 s<= 0 && eax_49 u< 0))
                goto label_5c5290
            
            void* esi_9 = var_30
            int32_t edi_10 = arg9
            int32_t* esi_11 = arg8
            
            if (esi_11 == 0 || edi_10 == 0)
            label_5c528c:
                esi = var_3c_2
            label_5c5290:
                var_50 = ebp_2
                var_4c = esi
                
                if (edx_26 s>= 0 && (edx_26 s> 0 || eax_49 u>= 0))
                    var_58 = eax_49
                    var_54 = edx_26
            else
                while (true)
                    edi_10 -= 1
                    
                    if (*esi_11 == (((zx.d(*(esi_9 + 0x11)) << 8 | zx.d(*(esi_9 + 0x10))) << 8
                            | zx.d(*(esi_9 + 0xf))) << 8 | zx.d(*(esi_9 + 0xe))))
                        int32_t ecx_33 = ebx[3]
                        arg_10 = ebx[2]
                        arg4 = ecx_33
                        break
                    
                    esi_11 = &esi_11[1]
                    
                    if (edi_10 == 0)
                        goto label_5c528c
            
            if (arg4 s>= var_4c)
                if (arg4 s> var_4c)
                    break
                
                if (arg_10 u>= var_50)
                    break
            
            ebp_2 = arg_10
            esi = arg4
        
        edi = var_58

ebx[2] = edi
ebx[3] = var_54

if (eax + 1 != eax)
    do
        arg_10 = eax
        int32_t eax_4
        int32_t edx_1
        eax_4, edx_1 = sub_5c44d0(ebx, arg8, arg9, &arg_10, &var_38)
        ebx[2] = eax_4
        ebx[3] = edx_1
    while (arg_10 != eax)

if (ebx[2] != edi || ebx[3] != var_54)
    int32_t edx_2
    edx_2:result = sx.q(sub_5c4230(ebx, edi, var_54))
    
    if ((result | edx_2) == 0)
        goto label_5c4e99
else
label_5c4e99:
    void var_20
    int32_t edx_3
    edx_3:result = sx.q(sub_5c4790(ebx, &var_20, &var_50, &arg1, &var_5c, nullptr))
    
    if ((result | edx_3) == 0)
        int32_t eax_7 = ebx[3]
        int32_t esi_3 = ebx[0x72]
        arg_10 = ebx[2]
        int32_t eax_8
        int32_t edx_5
        eax_8, edx_5 = sub_5c4b30(ebx, &var_20)
        int32_t* ecx_5 = arg1
        int32_t var_40 = eax_8
        int32_t edx_10
        edx_10:result = sx.q(sub_5c4d70(ebx, edi, var_54, ebx[2], ebx[3], arg5, arg6, arg_20, arg7, 
            arg_28, ecx_5, var_5c, arg10 + 1))
        
        if ((result | edx_10) == 0)
            int32_t* eax_14 = arg1
            
            if (eax_14 != 0)
                __free_base(eax_14)
            
            int32_t eax_15 = ebx[0xe]
            *(eax_15 + (arg10 << 3) + 8) = edi
            *(eax_15 + (arg10 << 3) + 0xc) = var_54
            uint32_t ecx_10 = arg_10
            *(ebx[0x10] + (arg10 << 2) + 4) = esi_3
            int32_t eax_17 = ebx[0xf]
            *(eax_17 + (arg10 << 3) + 8) = ecx_10
            *(eax_17 + (arg10 << 3) + 0xc) = eax_7
            int32_t ebp_5 = arg10 * 2
            __builtin_memcpy(((arg10 + 1) << 5) + ebx[0x12], &var_20, 0x20)
            int32_t eax_18 = ebx[0x13]
            *(eax_18 + (ebp_5 << 3) + 0x10) = var_50
            *(eax_18 + (ebp_5 << 3) + 0x14) = var_4c
            int32_t var_48
            *(eax_18 + (ebp_5 << 3) + 0x18) = var_48
            int32_t ecx_13 = var_38
            int32_t var_44
            *(eax_18 + (ebp_5 << 3) + 0x1c) = var_44
            int32_t eax_20 = ebx[0x11]
            *(eax_20 + (ebp_5 << 3) + 8) = ecx_13
            int32_t ecx_14 = var_40
            *(eax_20 + (ebp_5 << 3) + 0xc) = var_34
            int32_t eax_21 = ebx[0x11]
            *(eax_21 + (ebp_5 << 3) + 0x10) = ecx_14
            *(eax_21 + (ebp_5 << 3) + 0x14) = edx_5
            int32_t eax_22 = ebx[0x11]
            int32_t temp6_1 = *(eax_22 + (ebp_5 << 3) + 0x18)
            *(eax_22 + (ebp_5 << 3) + 0x18) -= ecx_14
            *(eax_22 + (ebp_5 << 3) + 0x1c) =
                sbb.d(*(eax_22 + (ebp_5 << 3) + 0x1c), edx_5, temp6_1 u< ecx_14)
            int32_t ecx_15 = ebx[0x11]
            int32_t temp7_1 = *(ecx_15 + (ebp_5 << 3) + 0x1c)
            
            if (temp7_1 s<= 0 && (temp7_1 s< 0 || *(ecx_15 + (ebp_5 << 3) + 0x18) u< 0))
                *(ecx_15 + (ebp_5 << 3) + 0x18) = 0
                *(ecx_15 + (ebp_5 << 3) + 0x1c) = 0
            
            return 0

return result
