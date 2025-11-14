// 函数: sub_5c4790
// 地址: 0x5c4790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg6
int32_t* esi = arg1
int32_t var_38 = 0
int32_t edx

if (ebx == 0)
    void var_34
    int32_t eax_1
    eax_1, edx = sub_5c4290(esi, &var_34, 0x10000, ebx)
    
    if (eax_1 == 0xffffff80 && edx == 0xffffffff)
        return eax_1
    
    if (edx s<= 0 && (edx s< 0 || eax_1 u< 0))
        return 0xffffff7c
    
    ebx = &var_34

int32_t* edi_2 = arg2
__builtin_memset(edi_2, 0, 0x1c)
int32_t ecx
edi_2[7] = _calloc(0, edx, ecx, 1, 0xe50)
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
esi[0x16] = 2

while (true)
    void* eax_4 = *ebx
    
    if ((*(eax_4 + 5) & 2) == 0)
        goto label_5c4a14
    
    if (arg4 != 0)
        int32_t edx_2 = *arg5
        uint32_t esi_7 =
            ((zx.d(*(eax_4 + 0x11)) << 8 | zx.d(*(eax_4 + 0x10))) << 8 | zx.d(*(eax_4 + 0xf))) << 8
            | zx.d(*(eax_4 + 0xe))
        int32_t* eax_6 = *arg4
        int32_t ecx_4 = edx_2
        
        if (eax_6 == 0 || ecx_4 == 0)
        label_5c488e:
            *arg5 = edx_2 + 1
            int32_t ecx_5 = *arg4
            int32_t eax_10
            
            if (ecx_5 == 0)
                eax_10 = sub_6b5c43(4)
            else
                eax_10 = _realloc(ecx_5, (edx_2 + 1) * 4)
            
            *arg4 = eax_10
            *(eax_10 + (*arg5 << 2) - 4) = esi_7
            esi = arg1
            goto label_5c48c2
        
        while (true)
            ecx_4 -= 1
            
            if (*eax_6 == esi_7)
                int32_t eax_23 = *arg4
                
                if (eax_23 != 0)
                    __free_base(eax_23)
                
                *arg4 = 0
                *arg5 = 0
                break
            
            eax_6 = &eax_6[1]
            
            if (ecx_4 == 0)
                goto label_5c488e
        
        goto label_5c4aff
    
label_5c48c2:
    
    if (esi[0x16] s>= 3)
        goto label_5c496c
    
    void* eax_11 = *ebx
    uint32_t edx_11 =
        ((zx.d(*(eax_11 + 0x11)) << 8 | zx.d(*(eax_11 + 0x10))) << 8 | zx.d(*(eax_11 + 0xf))) << 8
        | zx.d(*(eax_11 + 0xe))
    
    if (esi != 0xffffff88 && esi[0x1e] != 0)
        sub_5b9d90(&esi[0x1e])
        esi[0x72] = edx_11
    
    int32_t edx_12 = sub_5b9a70(ebx, &esi[0x1e])
    void var_24
    int32_t ebp_3
    
    if (esi != 0xffffff88 && esi[0x1e] != 0)
        int32_t var_50_3 = 1
        
        if (sub_5b9e20(&esi[0x1e], &var_24, edx_12) s<= 0)
            goto label_5c495e
        
        if (sub_5ba7a0(&var_24) == 0)
            goto label_5c495e
        
        arg1[0x16] = 3
        
        if (sub_5ba860(arg3, &var_24, edi_2, arg3, &var_24) == 0)
            goto label_5c495e
        
    label_5c4aff:
        ebp_3 = 0xffffff7b
        goto label_5c4b05
    
label_5c495e:
    esi = arg1
label_5c496c:
    int32_t eax_20
    int32_t edx_14
    eax_20, edx_14 = sub_5c4290(esi, ebx, 0x10000, 0)
    
    if (eax_20 == 0xffffff80 && edx_14 == 0xffffffff)
        edi_2 = arg2
        ebp_3 = 0xffffff80
        goto label_5c4b05
    
    if (edx_14 s< 0 || (edx_14 s<= 0 && eax_20 u< 0))
        edi_2 = arg2
        ebp_3 = 0xffffff7c
        goto label_5c4b05
    
    if (esi[0x16] == 3)
        void* eax_21 = *ebx
        
        if (esi[0x72] == (((zx.d(*(eax_21 + 0x11)) << 8 | zx.d(*(eax_21 + 0x10))) << 8
                | zx.d(*(eax_21 + 0xf))) << 8 | zx.d(*(eax_21 + 0xe))))
            sub_5b9a70(ebx, &esi[0x1e])
            edi_2 = arg2
            esi = arg1
        label_5c4a14:
            
            if (esi[0x16] != 3)
                ebp_3 = 0xffffff7c
            label_5c4b05:
                sub_5ba0b0(edi_2)
                sub_5ba040(arg3)
                arg1[0x16] = 2
                return ebp_3
            
            arg6 = nullptr
            
            while (arg6 s< 2)
                while (true)
                    int32_t eax_27 = sub_5b9f30(&arg1[0x1e])
                    
                    if (eax_27 == 0)
                        if (arg6 s>= 2)
                            return 0
                        
                        while (true)
                            int32_t eax_33
                            int32_t edx_18
                            eax_33, edx_18 = sub_5c4290(arg1, ebx, 0x10000, 0)
                            
                            if (edx_18 s>= 0 && (edx_18 s> 0 || eax_33 u>= 0))
                                uint32_t eax_35 = sub_5b9660(ebx)
                                
                                if (arg1[0x72] == eax_35)
                                    sub_5b9a70(ebx, &arg1[0x1e])
                                    edi_2 = arg2
                                    break
                                
                                if ((*(*ebx + 5) & 2) == 0)
                                    continue
                                else if (var_38 == 0)
                                    var_38 = 1
                                    continue
                            
                            edi_2 = arg2
                            goto label_5c4aff
                        
                        break
                    
                    if (eax_27 == 0xffffffff)
                        goto label_5c4aff
                    
                    ebp_3 = sub_5ba860(arg3, &var_24, edi_2, arg3, &var_24)
                    
                    if (ebp_3 != 0)
                        goto label_5c4b05
                    
                    void* eax_31 = arg6 + 1
                    arg6 = eax_31
                    
                    if (eax_31 s>= 2)
                        return 0
            
            return 0
    
    edi_2 = arg2
