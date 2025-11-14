// 函数: sub_5a0bd0
// 地址: 0x5a0bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0)
    int32_t* esi_1 = arg1[7]
    
    if (esi_1 != 0 && arg1[3] != 0 && (*arg1 != 0 || arg1[1] == 0))
        if (*esi_1 == 0xb)
            *esi_1 = 0xc
        
        char* edx = arg1[4]
        uint32_t ebx = esi_1[0xe]
        char* ebp = *arg1
        void* eax = arg1[1]
        void* var_1c = arg1[3]
        int32_t ecx_1 = *esi_1
        int32_t i = esi_1[0xf]
        char* var_24 = edx
        void* var_2c = eax
        void* var_4 = eax
        char* var_14 = edx
        int32_t result = 0
        
        if (ecx_1 u> 0x1e)
            return 0xfffffffe
        
        while (true)
            char var_20
            
            switch (ecx_1)
                case 0
                    if (esi_1[2] == 0)
                        *esi_1 = 0xc
                    label_5a1f3a:
                        ecx_1 = *esi_1
                        
                        if (ecx_1 u> 0x1e)
                            return 0xfffffffe
                        
                        edx = var_24
                        continue
                    
                    while (i u< 0x10)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        edx = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx = &edx[ebx]
                        var_2c = eax
                    
                    if ((esi_1[2].b & 2) != 0 && ebx == 0x8b1f)
                        int32_t eax_2
                        int32_t edx_2
                        eax_2, edx_2 = sub_59e5b0(eax, edx, nullptr, 0, 0)
                        esi_1[6] = eax_2
                        var_20.w = ebx.w
                        esi_1[6] = sub_59e5d0(eax_2, edx_2, &var_20, 2)
                        eax = var_2c
                        ebx = 0
                        i = 0
                        *esi_1 = 1
                        goto label_5a1f3a
                    
                    void* eax_4 = esi_1[8]
                    esi_1[4] = 0
                    
                    if (eax_4 != 0)
                        *(eax_4 + 0x30) = 0xffffffff
                    
                    if ((esi_1[2].b & 1) == 0
                            || modu.dp.d(0:((zx.d(ebx.b) << 8) + (ebx u>> 8)), 0x1f) != 0)
                        eax = var_2c
                        arg1[6] = "incorrect header check"
                        goto label_5a1f34
                    
                    if ((ebx.b & 0xf) != 8)
                        arg1[6] = "unknown compression method"
                        eax = var_2c
                        goto label_5a1f34
                    
                    int32_t eax_10 = esi_1[9]
                    ebx u>>= 4
                    i -= 4
                    
                    if (eax_10 == 0)
                        esi_1[9] = (ebx & 0xf) + 8
                    else if ((ebx & 0xf) + 8 u> eax_10)
                        eax = var_2c
                        arg1[6] = "invalid window size"
                        goto label_5a1f34
                    
                    int32_t edx_6 = 1 << ((ebx & 0xf) + 8).b
                    esi_1[5] = edx_6
                    void* eax_11 = sub_59e350(nullptr, edx_6, 0, 0)
                    esi_1[6] = eax_11
                    arg1[0xc] = eax_11
                    eax = var_2c
                    *esi_1 = (not.d(ebx u>> 8) & 2) | 9
                    ebx = 0
                    i = 0
                    goto label_5a1f3a
                case 1
                    while (i u< 0x10)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        edx = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx = &edx[ebx]
                        var_2c = eax
                    
                    esi_1[4] = ebx
                    
                    if (ebx.b != 8)
                        arg1[6] = "unknown compression method"
                    label_5a1f34:
                        *esi_1 = 0x1d
                        goto label_5a1f3a
                    
                    if ((ebx & 0xe000) != 0)
                        arg1[6] = "unknown header flags set"
                        goto label_5a1f34
                    
                    char** ecx_13 = esi_1[8]
                    
                    if (ecx_13 != 0)
                        edx = ebx u>> 8 & 1
                        *ecx_13 = edx
                    
                    if ((esi_1[4] & 0x200) != 0)
                        int32_t eax_12 = esi_1[6]
                        var_20 = ebx.b
                        uint8_t var_1f_1 = (ebx u>> 8).b
                        esi_1[6] = sub_59e5d0(eax_12, edx, &var_20, 2)
                        eax = var_2c
                    
                    ebx = 0
                    i = 0
                    *esi_1 = 2
                    goto label_5a0e7e
                case 2
                    if (i u< 0x20)
                    label_5a0e7e:
                        
                        do
                            if (eax == 0)
                                goto label_5a1fa0
                            
                            edx = zx.d(*ebp) << i.b
                            eax -= 1
                            i += 8
                            ebp = &ebp[1]
                            ebx = &edx[ebx]
                            var_2c = eax
                        while (i u< 0x20)
                    
                    void* ecx_16 = esi_1[8]
                    
                    if (ecx_16 != 0)
                        *(ecx_16 + 4) = ebx
                    
                    if ((esi_1[4] & 0x200) != 0)
                        var_20 = ebx.b
                        uint8_t var_1f_2 = (ebx u>> 8).b
                        uint8_t var_1e_1 = (ebx u>> 0x10).b
                        uint8_t var_1d_1 = (ebx u>> 0x18).b
                        esi_1[6] = sub_59e5d0(esi_1[6], edx, &var_20, 4)
                        eax = var_2c
                    
                    ebx = 0
                    i = 0
                    *esi_1 = 3
                    goto label_5a0efe
                case 3
                    if (i u< 0x10)
                    label_5a0efe:
                        
                        do
                            if (eax == 0)
                                goto label_5a1fa0
                            
                            edx = zx.d(*ebp) << i.b
                            eax -= 1
                            i += 8
                            ebp = &ebp[1]
                            ebx = &edx[ebx]
                            var_2c = eax
                        while (i u< 0x10)
                    
                    void* ecx_21 = esi_1[8]
                    
                    if (ecx_21 != 0)
                        *(ecx_21 + 8) = zx.d(ebx.b)
                        edx = esi_1[8]
                        *(edx + 0xc) = ebx u>> 8
                    
                    if ((esi_1[4] & 0x200) != 0)
                        int32_t eax_18 = esi_1[6]
                        var_20 = ebx.b
                        uint8_t var_1f_3 = (ebx u>> 8).b
                        int32_t eax_19
                        eax_19, edx = sub_59e5d0(eax_18, edx, &var_20, 2)
                        esi_1[6] = eax_19
                        eax = var_2c
                    
                    ebx = 0
                    i = 0
                    *esi_1 = 4
                    goto label_5a0f5a
                case 4
                label_5a0f5a:
                    
                    if ((esi_1[4] & 0x400) == 0)
                        void* ecx_28 = esi_1[8]
                        
                        if (ecx_28 != 0)
                            *(ecx_28 + 0x10) = 0
                    else
                        while (i u< 0x10)
                            if (eax == 0)
                                goto label_5a1fa0
                            
                            edx = zx.d(*ebp) << i.b
                            eax -= 1
                            i += 8
                            ebp = &ebp[1]
                            ebx = &edx[ebx]
                            var_2c = eax
                        
                        void* ecx_26 = esi_1[8]
                        esi_1[0x10] = ebx
                        
                        if (ecx_26 != 0)
                            *(ecx_26 + 0x14) = ebx
                        
                        if ((esi_1[4] & 0x200) != 0)
                            int32_t eax_20 = esi_1[6]
                            var_20 = ebx.b
                            uint8_t var_1f_4 = (ebx u>> 8).b
                            int32_t eax_21
                            eax_21, edx = sub_59e5d0(eax_20, edx, &var_20, 2)
                            esi_1[6] = eax_21
                            eax = var_2c
                        
                        ebx = 0
                        i = 0
                    
                    *esi_1 = 5
                label_5a0fdb:
                    
                    if ((esi_1[4] & 0x400) != 0)
                        void* ecx_29 = esi_1[0x10]
                        void* var_28_1 = ecx_29
                        
                        if (ecx_29 u> eax)
                            ecx_29 = eax
                            var_28_1 = eax
                        
                        if (ecx_29 != 0)
                            edx = esi_1[8]
                            
                            if (edx != 0)
                                edx = *(edx + 0x10)
                                
                                if (edx != 0)
                                    void* eax_24 = *(esi_1[8] + 0x14) - esi_1[0x10]
                                    int32_t edx_18 = *(esi_1[8] + 0x18)
                                    
                                    if (eax_24 + ecx_29 u> edx_18)
                                        ecx_29 = edx_18 - eax_24
                                    
                                    edx = sub_6c02a0(edx + eax_24, ebp, ecx_29)
                                    ecx_29 = var_28_1
                                    eax = var_2c
                            
                            if ((esi_1[4] & 0x200) != 0)
                                int32_t eax_27
                                eax_27, edx = sub_59e5b0(var_28_1, edx, ebp, esi_1[6], var_28_1)
                                ecx_29 = var_28_1
                                esi_1[6] = eax_27
                                eax = var_2c
                            
                            eax -= ecx_29
                            ebp += ecx_29
                            esi_1[0x10] -= ecx_29
                            var_2c = eax
                    
                    if ((esi_1[4] & 0x400) != 0 && esi_1[0x10] != 0)
                        goto label_5a1fa0
                    
                    esi_1[0x10] = 0
                    *esi_1 = 6
                label_5a108b:
                    
                    if ((esi_1[4] & 0x800) == 0)
                        void* ecx_39 = esi_1[8]
                        
                        if (ecx_39 != 0)
                            *(ecx_39 + 0x1c) = 0
                        
                        goto label_5a1134
                    
                    if (eax == 0)
                        goto label_5a1fa0
                    
                    void* ecx_34 = nullptr
                    char* var_18_2
                    void* ecx_35
                    
                    do
                        edx = zx.d(*(ecx_34 + ebp))
                        ecx_35 = ecx_34 + 1
                        void* ecx_36 = esi_1[8]
                        var_18_2 = edx
                        
                        if (ecx_36 != 0)
                            edx = *(ecx_36 + 0x1c)
                            char* var_8_2 = edx
                            
                            if (edx != 0)
                                edx = esi_1[0x10]
                                
                                if (edx u< *(ecx_36 + 0x20))
                                    ecx_36.b = var_18_2.b
                                    *(var_8_2 + edx) = ecx_36.b
                                    esi_1[0x10] += 1
                                    eax = var_2c
                        
                        if (var_18_2 == 0)
                            break
                        
                        ecx_34 = ecx_35
                    while (ecx_34 u< eax)
                    
                    if ((esi_1[4] & 0x200) != 0)
                        int32_t eax_29 = esi_1[6]
                        int32_t eax_30
                        eax_30, edx = sub_59e5b0(eax_29, ecx_35, ebp, eax_29, ecx_35)
                        esi_1[6] = eax_30
                        eax = var_2c
                    
                    eax -= ecx_35
                    ebp += ecx_35
                    var_2c = eax
                    
                    if (var_18_2 != 0)
                        goto label_5a1fa0
                    
                label_5a1134:
                    esi_1[0x10] = 0
                    *esi_1 = 7
                label_5a1141:
                    
                    if ((esi_1[4] & 0x1000) == 0)
                        void* ecx_46 = esi_1[8]
                        
                        if (ecx_46 != 0)
                            *(ecx_46 + 0x24) = 0
                        
                        goto label_5a11ff
                    
                    if (eax == 0)
                        goto label_5a1fa0
                    
                    void* var_28_3 = nullptr
                    char* var_18_3
                    
                    do
                        edx = zx.d(*(var_28_3 + ebp))
                        var_28_3 += 1
                        void* ecx_42 = esi_1[8]
                        var_18_3 = edx
                        
                        if (ecx_42 != 0)
                            edx = *(ecx_42 + 0x24)
                            char* var_8_3 = edx
                            
                            if (edx != 0)
                                edx = esi_1[0x10]
                                
                                if (edx u< *(ecx_42 + 0x28))
                                    ecx_42.b = var_18_3.b
                                    *(var_8_3 + edx) = ecx_42.b
                                    esi_1[0x10] += 1
                                    eax = var_2c
                        
                        if (var_18_3 == 0)
                            break
                    while (var_28_3 u< eax)
                    
                    if ((esi_1[4] & 0x200) != 0)
                        edx = esi_1[6]
                        int32_t ecx_43
                        
                        if (ebp != 0)
                            int32_t eax_34
                            eax_34, edx = sub_59e5d0(edx, edx, ebp, var_28_3)
                            ecx_43 = eax_34
                            eax = var_2c
                        else
                            ecx_43 = 0
                        
                        esi_1[6] = ecx_43
                    
                    eax -= var_28_3
                    ebp += var_28_3
                    var_2c = eax
                    
                    if (var_18_3 != 0)
                        goto label_5a1fa0
                    
                label_5a11ff:
                    *esi_1 = 8
                label_5a120c:
                    
                    if ((esi_1[4] & 0x200) != 0)
                        while (i u< 0x10)
                            if (eax == 0)
                                goto label_5a1fa0
                            
                            edx = zx.d(*ebp) << i.b
                            eax -= 1
                            i += 8
                            ebp = &ebp[1]
                            ebx = &edx[ebx]
                            var_2c = eax
                        
                        if (ebx != zx.d(esi_1[6].w))
                            arg1[6] = "header crc mismatch"
                            goto label_5a1f34
                        
                        ebx = 0
                        i = 0
                    
                    void* eax_35 = esi_1[8]
                    
                    if (eax_35 != 0)
                        *(eax_35 + 0x2c) = esi_1[4] s>> 9 & 1
                        edx = esi_1[8]
                        *(edx + 0x30) = 1
                    
                    int32_t eax_36 = sub_59e5b0(eax_35, edx, nullptr, 0, 0)
                    esi_1[6] = eax_36
                    arg1[0xc] = eax_36
                    eax = var_2c
                    *esi_1 = 0xb
                    goto label_5a1f3a
                case 5
                    goto label_5a0fdb
                case 6
                    goto label_5a108b
                case 7
                    goto label_5a1141
                case 8
                    goto label_5a120c
                case 9
                    while (i u< 0x20)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_24 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx += edx_24
                        var_2c = eax
                    
                    edx = arg1
                    int32_t ecx_59 = (((ebx & 0xff00) + (ebx << 0x10)) << 8) + (ebx u>> 8 & 0xff00)
                        + (ebx u>> 0x18)
                    esi_1[6] = ecx_59
                    *(edx + 0x30) = ecx_59
                    ebx = 0
                    i = 0
                    *esi_1 = 0xa
                    goto label_5a12f0
                case 0xa
                label_5a12f0:
                    
                    if (esi_1[3] == 0)
                        char** ecx_233 = arg1
                        ecx_233[3] = var_1c
                        *ecx_233 = ebp
                        ecx_233[1] = eax
                        ecx_233[4] = var_24
                        esi_1[0xf] = i
                        esi_1[0xe] = ebx
                        return 2
                    
                    void* eax_37 = sub_59e350(nullptr, edx, 0, 0)
                    esi_1[6] = eax_37
                    arg1[0xc] = eax_37
                    eax = var_2c
                    *esi_1 = 0xb
                label_5a131c:
                    
                    if (esi_1[1] != 0)
                        int32_t ecx_62 = i & 7
                        ebx u>>= ecx_62.b
                        i -= ecx_62
                        *esi_1 = 0x1a
                        goto label_5a1f3a
                    
                    while (i u< 3)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_31 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx += edx_31
                        var_2c = eax
                    
                    uint32_t ebx_10 = ebx u>> 1
                    esi_1[1] = ebx & 1
                    int32_t ecx_67 = ebx_10 & 3
                    
                    if (ecx_67 u> 3)
                        ebx = ebx_10 u>> 2
                        i -= 3
                    else
                        switch (ecx_67)
                            case 0
                                ebx = ebx_10 u>> 2
                                *esi_1 = 0xd
                                i -= 3
                            case 1
                                ebx = ebx_10 u>> 2
                                esi_1[0x13] = 0x747018
                                esi_1[0x15] = 9
                                esi_1[0x14] = 0x747818
                                esi_1[0x16] = 5
                                *esi_1 = 0x13
                                i -= 3
                            case 2
                                ebx = ebx_10 u>> 2
                                *esi_1 = 0x10
                                i -= 3
                            case 3
                                arg1[6] = "invalid block type"
                                *esi_1 = 0x1d
                                ebx = ebx_10 u>> 2
                                i -= 3
                    
                    goto label_5a1f3a
                case 0xb, 0xc
                    goto label_5a131c
                case 0xd
                    int32_t ecx_69 = i & 7
                    i -= ecx_69
                    ebx u>>= ecx_69.b
                    
                    while (i u< 0x20)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_34 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx += edx_34
                        var_2c = eax
                    
                    uint32_t ecx_72 = zx.d(ebx.w)
                    
                    if (ecx_72 != not.d(ebx) u>> 0x10)
                        arg1[6] = "invalid stored block lengths"
                        goto label_5a1f34
                    
                    ebx = 0
                    esi_1[0x10] = ecx_72
                    i = 0
                    *esi_1 = 0xe
                label_5a1444:
                    edx = var_24
                    *esi_1 = 0xf
                label_5a144e:
                    void* ecx_74 = esi_1[0x10]
                    void* var_28_4 = ecx_74
                    
                    if (ecx_74 == 0)
                        goto label_5a1ac9
                    
                    if (ecx_74 u> eax)
                        ecx_74 = eax
                        var_28_4 = eax
                    
                    if (ecx_74 u> edx)
                        ecx_74 = edx
                        var_28_4 = ecx_74
                    
                    if (ecx_74 == 0)
                        goto label_5a1fa0
                    
                    sub_6c02a0(var_1c, ebp, var_28_4)
                    var_2c -= var_28_4
                    var_24 -= var_28_4
                    var_1c += var_28_4
                    ebp += var_28_4
                    esi_1[0x10] -= var_28_4
                    eax = var_2c
                    goto label_5a1f3a
                case 0xe
                    goto label_5a1444
                case 0xf
                    goto label_5a144e
                case 0x10
                    while (i u< 0xe)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_40 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx += edx_40
                        var_2c = eax
                    
                    uint32_t ebx_11 = ebx u>> 5
                    esi_1[0x18] = (ebx & 0x1f) + 0x101
                    uint32_t ebx_12 = ebx_11 u>> 5
                    ebx = ebx_12 u>> 4
                    i -= 0xe
                    bool cond:0_1 = esi_1[0x18] u> 0x11e
                    esi_1[0x19] = (ebx_11 & 0x1f) + 1
                    esi_1[0x17] = (ebx_12 & 0xf) + 4
                    
                    if (cond:0_1 || (ebx_11 & 0x1f) + 1 u> 0x1e)
                        arg1[6] = "too many length or distance symbols"
                        goto label_5a1f34
                    
                    esi_1[0x1a] = 0
                    *esi_1 = 0x11
                label_5a1527:
                    
                    while (esi_1[0x1a] u< esi_1[0x17])
                        while (i u< 3)
                            if (eax == 0)
                                goto label_5a1fa0
                            
                            uint32_t edx_45 = zx.d(*ebp) << i.b
                            eax -= 1
                            i += 8
                            ebp = &ebp[1]
                            ebx += edx_45
                            var_2c = eax
                        
                        *(esi_1 + (zx.d(*((esi_1[0x1a] << 1) + &data_747898)) << 1) + 0x70) =
                            ebx.w & 7
                        esi_1[0x1a] += 1
                        ebx u>>= 3
                        i -= 3
                    
                    while (esi_1[0x1a] u< 0x13)
                        *(esi_1 + (zx.d(*((esi_1[0x1a] << 1) + &data_747898)) << 1) + 0x70) = 0
                        esi_1[0x1a] += 1
                    
                    esi_1[0x1b] = &esi_1[0x14c]
                    esi_1[0x13] = &esi_1[0x14c]
                    esi_1[0x15] = 7
                    int32_t result_1 = sub_5a21b0(&esi_1[0xbc], &esi_1[0x15], &esi_1[0x1c], 0, 
                        0x13, &esi_1[0x1b], &esi_1[0xbc])
                    result = result_1
                    eax = var_2c
                    
                    if (result_1 != 0)
                        arg1[6] = "invalid code lengths set"
                        goto label_5a1f34
                    
                    esi_1[0x1a] = 0
                    *esi_1 = 0x12
                label_5a161a:
                    
                    while (esi_1[0x1a] u< esi_1[0x19] + esi_1[0x18])
                        int32_t ecx_93 =
                            *(esi_1[0x13] + ((((1 << (esi_1[0x15]).b) - 1) & ebx) << 2))
                        int32_t var_28_5 = ecx_93
                        
                        while (zx.d((ecx_93 u>> 8).b) u> i)
                            if (eax == 0)
                                goto label_5a1fa0
                            
                            uint32_t edx_60 = zx.d(*ebp) << i.b
                            eax -= 1
                            i += 8
                            ebx += edx_60
                            ebp = &ebp[1]
                            var_2c = eax
                            ecx_93 = *(esi_1[0x13] + ((((1 << (esi_1[0x15]).b) - 1) & ebx) << 2))
                            var_28_5 = ecx_93
                        
                        uint32_t edx_68 = ecx_93 u>> 0x10
                        uint32_t var_8_4 = edx_68
                        
                        if (edx_68.w u>= 0x10)
                            int16_t var_18_4
                            int32_t i_2
                            
                            if (edx_68.w != 0x10)
                                uint32_t ecx_103 = zx.d(ecx_93:1.b)
                                uint32_t var_10_1 = ecx_103
                                int32_t edx_81
                                
                                if (var_28_5:2.w != 0x11)
                                    while (i u< ecx_103 + 7)
                                        if (eax == 0)
                                            goto label_5a1fa0
                                        
                                        uint32_t edx_84 = zx.d(*ebp) << i.b
                                        ecx_103 = var_10_1
                                        eax -= 1
                                        i += 8
                                        ebx += edx_84
                                        ebp = &ebp[1]
                                        var_2c = eax
                                    
                                    uint32_t ebx_14 = ebx u>> ecx_103.b
                                    edx_81 = 0xfffffff9
                                    i_2 = (ebx_14 & 0x7f) + 0xb
                                    ebx = ebx_14 u>> 7
                                else
                                    while (i u< ecx_103 + 3)
                                        if (eax == 0)
                                            goto label_5a1fa0
                                        
                                        uint32_t edx_79 = zx.d(*ebp) << i.b
                                        ecx_103 = var_10_1
                                        eax -= 1
                                        i += 8
                                        ebx += edx_79
                                        ebp = &ebp[1]
                                        var_2c = eax
                                    
                                    uint32_t ebx_13 = ebx u>> ecx_103.b
                                    edx_81 = 0xfffffffd
                                    i_2 = (ebx_13 & 7) + 3
                                    ebx = ebx_13 u>> 3
                                
                                i += edx_81 - ecx_103
                                var_18_4 = 0
                            else
                                if (i u< zx.d((ecx_93 u>> 8).b) + 2)
                                    do
                                        if (eax == 0)
                                            goto label_5a1fa0
                                        
                                        uint32_t edx_74 = zx.d(*ebp) << i.b
                                        ecx_93 = var_28_5
                                        eax -= 1
                                        i += 8
                                        ebx += edx_74
                                        ebp = &ebp[1]
                                        var_2c = eax
                                    while (i u< zx.d(ecx_93:1.b) + 2)
                                
                                uint32_t ecx_101 = zx.d(ecx_93:1.b)
                                ebx u>>= ecx_101.b
                                i -= ecx_101
                                int32_t ecx_102 = esi_1[0x1a]
                                
                                if (ecx_102 == 0)
                                    arg1[6] = "invalid bit length repeat"
                                    goto label_5a1f34
                                
                                var_18_4 = *(esi_1 + (ecx_102 << 1) + 0x6e)
                                i_2 = (ebx & 3) + 3
                                ebx u>>= 2
                                i -= 2
                            
                            if (esi_1[0x1a] + i_2 u> esi_1[0x19] + esi_1[0x18])
                                arg1[6] = "invalid bit length repeat"
                                eax = var_2c
                                goto label_5a1f34
                            
                            if (i_2 != 0)
                                int32_t i_1
                                
                                do
                                    *(esi_1 + (esi_1[0x1a] << 1) + 0x70) = var_18_4
                                    esi_1[0x1a] += 1
                                    i_1 = i_2
                                    i_2 -= 1
                                while (i_1 != 1)
                            
                            eax = var_2c
                        else
                            uint32_t ecx_98 = zx.d((ecx_93 u>> 8).b)
                            ebx u>>= ecx_98.b
                            i -= ecx_98
                            *(esi_1 + (esi_1[0x1a] << 1) + 0x70) = edx_68.w
                            esi_1[0x1a] += 1
                    
                    if (*esi_1 == 0x1d)
                        goto label_5a1f3a
                    
                    if (esi_1[0x9c].w == 0)
                        arg1[6] = "invalid code -- missing end-of-block"
                        goto label_5a1f34
                    
                    esi_1[0x1b] = &esi_1[0x14c]
                    esi_1[0x13] = &esi_1[0x14c]
                    int32_t eax_52 = esi_1[0x18]
                    esi_1[0x15] = 9
                    int32_t result_2 = sub_5a21b0(eax_52, &esi_1[0x15], &esi_1[0x1c], 1, eax_52, 
                        &esi_1[0x1b], &esi_1[0xbc])
                    result = result_2
                    
                    if (result_2 != 0)
                        eax = var_2c
                        arg1[6] = "invalid literal/lengths set"
                        goto label_5a1f34
                    
                    int32_t ecx_117 = esi_1[0x18]
                    int32_t eax_54 = esi_1[0x19]
                    esi_1[0x14] = esi_1[0x1b]
                    esi_1[0x16] = 6
                    int32_t result_3 = sub_5a21b0(eax_54, &esi_1[0x16], 
                        esi_1 + (ecx_117 << 1) + 0x70, 2, eax_54, &esi_1[0x1b], &esi_1[0xbc])
                    result = result_3
                    eax = var_2c
                    
                    if (result_3 != 0)
                        arg1[6] = "invalid distances set"
                        goto label_5a1f34
                    
                    *esi_1 = 0x13
                label_5a18d5:
                    edx = var_24
                    *esi_1 = 0x14
                label_5a18df:
                    
                    if (eax u>= 6 && edx u>= 0x102)
                        arg1[4] = var_24
                        arg1[3] = var_1c
                        *arg1 = ebp
                        arg1[1] = var_2c
                        esi_1[0xe] = ebx
                        esi_1[0xf] = i
                        sub_5a0530(arg1, var_14)
                        ebp = *arg1
                        eax = arg1[1]
                        ebx = esi_1[0xe]
                        i = esi_1[0xf]
                        var_1c = arg1[3]
                        var_24 = arg1[4]
                        var_2c = eax
                        
                        if (*esi_1 == 0xb)
                            esi_1[0x6f1] = 0xffffffff
                        
                        goto label_5a1f3a
                    
                    int32_t edx_98 = 1 << (esi_1[0x15]).b
                    int32_t ecx_123 = esi_1[0x13]
                    esi_1[0x6f1] = 0
                    int32_t edx_101 = *(ecx_123 + (((edx_98 - 1) & ebx) << 2))
                    int32_t var_28_6 = edx_101
                    
                    while (zx.d((edx_101 u>> 8).b) u> i)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_103 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebx += edx_103
                        ebp = &ebp[1]
                        var_2c = eax
                        edx_101 = *(esi_1[0x13] + ((((1 << (esi_1[0x15]).b) - 1) & ebx) << 2))
                        var_28_6 = edx_101
                    
                    if (edx_101.b != 0 && (edx_101.b & 0xf0) == 0)
                        uint8_t ecx_134 = (edx_101 u>> 8).b
                        int32_t ecx_142 = *(esi_1[0x13] + ((((((1 << (edx_101.b + ecx_134)) - 1)
                            & ebx) u>> ecx_134) + (var_28_6 u>> 0x10)) << 2))
                        int32_t var_28_7 = ecx_142
                        
                        if (zx.d((ecx_142 u>> 8).b) + zx.d(ecx_134) u> i)
                            int32_t ecx_152
                            uint32_t edx_116
                            
                            do
                                if (eax == 0)
                                    goto label_5a1fa0
                                
                                uint32_t edx_115 = zx.d(*ebp) << i.b
                                int16_t ecx_146 = edx_101.w
                                eax -= 1
                                i += 8
                                ebx += edx_115
                                edx_116 = zx.d(ecx_146:1.b)
                                ebp = &ebp[1]
                                var_2c = eax
                                ecx_152 = *(esi_1[0x13] + ((((((1 << (ecx_146.b + edx_116.b)) - 1)
                                    & ebx) u>> edx_116.b) + zx.d(edx_101:2.w)) << 2))
                                var_28_7 = ecx_152
                            while (zx.d((ecx_152 u>> 8).b) + edx_116 u> i)
                        
                        uint32_t ecx_154 = zx.d(edx_101:1.b)
                        edx_101 = var_28_7
                        ebx u>>= ecx_154.b
                        i -= ecx_154
                        esi_1[0x6f1] = ecx_154
                    
                    uint32_t ecx_157 = zx.d((edx_101 u>> 8).b)
                    esi_1[0x6f1] += ecx_157
                    ebx u>>= ecx_157.b
                    i -= ecx_157
                    uint32_t var_18_7 = ecx_157
                    esi_1[0x10] = edx_101 u>> 0x10
                    
                    if (edx_101.b == 0)
                        *esi_1 = 0x19
                        goto label_5a1f3a
                    
                    if ((edx_101.b & 0x20) != 0)
                        esi_1[0x6f1] = 0xffffffff
                    label_5a1ac9:
                        *esi_1 = 0xb
                        goto label_5a1f3a
                    
                    if ((edx_101.b & 0x40) != 0)
                        arg1[6] = "invalid literal/length code"
                        goto label_5a1f34
                    
                    esi_1[0x12] = zx.d(edx_101.b) & 0xf
                    *esi_1 = 0x15
                label_5a1af8:
                    int32_t ecx_162 = esi_1[0x12]
                    
                    if (ecx_162 != 0)
                        if (i u< ecx_162)
                            do
                                if (eax == 0)
                                    goto label_5a1fa0
                                
                                uint32_t edx_126 = zx.d(*ebp) << i.b
                                eax -= 1
                                i += 8
                                ebp = &ebp[1]
                                ebx += edx_126
                                var_2c = eax
                            while (i u< esi_1[0x12])
                        
                        int32_t ecx_164 = esi_1[0x12]
                        i -= ecx_164
                        esi_1[0x10] += ((1 << ecx_164.b) - 1) & ebx
                        ebx u>>= ecx_164.b
                        esi_1[0x6f1] += ecx_164
                    
                    esi_1[0x6f2] = esi_1[0x10]
                    *esi_1 = 0x16
                    goto label_5a1b5c
                case 0x11
                    goto label_5a1527
                case 0x12
                    goto label_5a161a
                case 0x13
                    goto label_5a18d5
                case 0x14
                    goto label_5a18df
                case 0x15
                    goto label_5a1af8
                case 0x16
                label_5a1b5c:
                    int32_t edx_133 = *(esi_1[0x14] + ((((1 << (esi_1[0x16]).b) - 1) & ebx) << 2))
                    int32_t var_28_8 = edx_133
                    
                    while (zx.d((edx_133 u>> 8).b) u> i)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_135 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebx += edx_135
                        ebp = &ebp[1]
                        var_2c = eax
                        edx_133 = *(esi_1[0x14] + ((((1 << (esi_1[0x16]).b) - 1) & ebx) << 2))
                        var_28_8 = edx_133
                    
                    if ((edx_133.b & 0xf0) == 0)
                        uint8_t ecx_178 = (edx_133 u>> 8).b
                        int32_t ecx_186 = *(esi_1[0x14] + ((((((1 << (edx_133.b + ecx_178)) - 1)
                            & ebx) u>> ecx_178) + (var_28_8 u>> 0x10)) << 2))
                        int32_t var_28_9 = ecx_186
                        
                        if (zx.d((ecx_186 u>> 8).b) + zx.d(ecx_178) u> i)
                            int32_t ecx_196
                            uint32_t edx_148
                            
                            do
                                if (eax == 0)
                                    goto label_5a1fa0
                                
                                uint32_t edx_147 = zx.d(*ebp) << i.b
                                int16_t ecx_190 = edx_133.w
                                eax -= 1
                                i += 8
                                ebx += edx_147
                                edx_148 = zx.d(ecx_190:1.b)
                                ebp = &ebp[1]
                                var_2c = eax
                                ecx_196 = *(esi_1[0x14] + ((((((1 << (ecx_190.b + edx_148.b)) - 1)
                                    & ebx) u>> edx_148.b) + zx.d(edx_133:2.w)) << 2))
                                var_28_9 = ecx_196
                            while (zx.d((ecx_196 u>> 8).b) + edx_148 u> i)
                        
                        uint32_t ecx_198 = zx.d(edx_133:1.b)
                        edx_133 = var_28_9
                        ebx u>>= ecx_198.b
                        i -= ecx_198
                        esi_1[0x6f1] += ecx_198
                    
                    uint32_t ecx_201 = zx.d((edx_133 u>> 8).b)
                    esi_1[0x6f1] += ecx_201
                    ebx u>>= ecx_201.b
                    i -= ecx_201
                    uint32_t var_18_10 = ecx_201
                    
                    if ((edx_133.b & 0x40) != 0)
                        arg1[6] = "invalid distance code"
                        goto label_5a1f34
                    
                    esi_1[0x11] = edx_133 u>> 0x10
                    esi_1[0x12] = zx.d(edx_133.b) & 0xf
                    *esi_1 = 0x17
                label_5a1cb5:
                    int32_t ecx_204 = esi_1[0x12]
                    
                    if (ecx_204 != 0)
                        if (i u< ecx_204)
                            do
                                if (eax == 0)
                                    goto label_5a1fa0
                                
                                uint32_t edx_160 = zx.d(*ebp) << i.b
                                eax -= 1
                                i += 8
                                ebp = &ebp[1]
                                ebx += edx_160
                                var_2c = eax
                            while (i u< esi_1[0x12])
                        
                        int32_t ecx_206 = esi_1[0x12]
                        i -= ecx_206
                        esi_1[0x11] += ((1 << ecx_206.b) - 1) & ebx
                        ebx u>>= ecx_206.b
                        esi_1[0x6f1] += ecx_206
                    
                    edx = var_24
                    *esi_1 = 0x18
                    goto label_5a1d04
                case 0x17
                    goto label_5a1cb5
                case 0x18
                label_5a1d04:
                    
                    if (edx == 0)
                        goto label_5a1fa0
                    
                    int32_t edx_165 = var_14 - var_24
                    int32_t ecx_207 = esi_1[0x11]
                    char* var_28_10
                    char* var_10_4
                    void* var_8_7
                    char* ecx_210
                    
                    if (ecx_207 u<= edx_165)
                        ecx_210 = esi_1[0x10]
                        var_8_7 = var_1c - ecx_207
                        var_10_4 = ecx_210
                    label_5a1d86:
                        var_28_10 = ecx_210
                    else
                        char* ecx_208 = ecx_207 - edx_165
                        var_28_10 = ecx_208
                        
                        if (ecx_208 u> esi_1[0xb] && esi_1[0x6f0] != 0)
                            arg1[6] = "invalid distance too far back"
                            goto label_5a1f34
                        
                        int32_t edx_166 = esi_1[0xc]
                        void* edx_169
                        
                        if (ecx_208 u<= edx_166)
                            edx_169 = esi_1[0xd] - ecx_208 + esi_1[0xc]
                            ecx_210 = var_28_10
                        else
                            ecx_210 = ecx_208 - edx_166
                            var_28_10 = ecx_210
                            edx_169 = esi_1[0xd] + esi_1[0xa] - ecx_210
                        
                        var_8_7 = edx_169
                        char* edx_172 = esi_1[0x10]
                        var_10_4 = edx_172
                        
                        if (ecx_210 u> edx_172)
                            ecx_210 = edx_172
                            goto label_5a1d86
                    
                    if (ecx_210 u> var_24)
                        ecx_210 = var_24
                        var_28_10 = ecx_210
                    
                    var_24 -= ecx_210
                    void* ecx_212 = var_8_7 - var_1c
                    esi_1[0x10] = var_10_4 - ecx_210
                    void* var_8_8 = ecx_212
                    
                    while (true)
                        void* edx_179
                        edx_179.b = *(ecx_212 + var_1c)
                        *var_1c = edx_179.b
                        char* temp5_1 = var_28_10
                        var_28_10 -= 1
                        var_1c += 1
                        
                        if (temp5_1 == 1)
                            break
                        
                        ecx_212 = var_8_8
                    
                    if (esi_1[0x10] == 0)
                        *esi_1 = 0x14
                    
                    goto label_5a1f3a
                case 0x19
                    if (edx == 0)
                        goto label_5a1fa0
                    
                    char* ecx_215 = var_1c
                    edx.b = esi_1[0x10].b
                    *ecx_215 = edx.b
                    var_24 -= 1
                    var_1c = &ecx_215[1]
                    *esi_1 = 0x14
                    goto label_5a1f3a
                case 0x1a
                    if (esi_1[2] == 0)
                        goto label_5a1ee5
                    
                    while (i u< 0x20)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_181 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx += edx_181
                        var_2c = eax
                    
                    void* ecx_219 = var_14 - var_24
                    arg1[5] += ecx_219
                    esi_1[7] += ecx_219
                    
                    if (ecx_219 != 0)
                        int32_t eax_59
                        
                        if (esi_1[4] == 0)
                            eax_59 = sub_59e350(var_1c - ecx_219, arg1, esi_1[6], ecx_219)
                        else
                            int32_t eax_58 = esi_1[6]
                            eax_59 = sub_59e5b0(eax_58, arg1, var_1c - ecx_219, eax_58, ecx_219)
                        
                        esi_1[6] = eax_59
                        arg1[0xc] = eax_59
                        eax = var_2c
                    
                    var_14 = var_24
                    uint32_t ecx_225 = ebx
                    
                    if (esi_1[4] == 0)
                        ecx_225 = (((ecx_225 & 0xff00) + (ebx << 0x10)) << 8) + (ebx u>> 8 & 0xff00)
                            + (ebx u>> 0x18)
                    
                    if (ecx_225 != esi_1[6])
                        arg1[6] = "incorrect data check"
                        goto label_5a1f34
                    
                    ebx = 0
                    i = 0
                label_5a1ee5:
                    *esi_1 = 0x1b
                label_5a1eeb:
                    
                    if (esi_1[2] == 0 || esi_1[4] == 0)
                        goto label_5a1f80
                    
                    while (i u< 0x20)
                        if (eax == 0)
                            goto label_5a1fa0
                        
                        uint32_t edx_192 = zx.d(*ebp) << i.b
                        eax -= 1
                        i += 8
                        ebp = &ebp[1]
                        ebx += edx_192
                        var_2c = eax
                    
                    if (ebx != esi_1[7])
                        arg1[6] = "incorrect length check"
                        goto label_5a1f34
                    
                    ebx = 0
                    i = 0
                label_5a1f80:
                    *esi_1 = 0x1c
                label_5a1f86:
                    result = 1
                label_5a1fa0:
                    arg1[3] = var_1c
                    char* edx_196 = var_24
                    arg1[4] = edx_196
                    *arg1 = ebp
                    arg1[1] = eax
                    bool cond:1_1 = esi_1[0xa] != 0
                    esi_1[0xe] = ebx
                    esi_1[0xf] = i
                    
                    if (cond:1_1)
                    label_5a1fdb:
                        int32_t* var_40_12 = arg1
                        int32_t eax_67
                        eax_67, edx_196 = sub_5a0ae0(var_14, edx_196)
                        
                        if (eax_67 == 0)
                            goto label_5a2003
                        
                        *esi_1 = 0x1e
                        break
                    
                    if (var_14 != arg1[4])
                        int32_t eax_65 = *esi_1
                        
                        if (eax_65 s>= 0x1d || (eax_65 s>= 0x1a && arg2 == 4))
                            goto label_5a2003
                        
                        goto label_5a1fdb
                    
                label_5a2003:
                    void* eax_70 = var_4 - arg1[1]
                    void* ebx_16 = var_14 - arg1[4]
                    arg1[2] += eax_70
                    arg1[5] += ebx_16
                    esi_1[7] += ebx_16
                    
                    if (esi_1[2] != 0 && ebx_16 != 0)
                        int32_t eax_72
                        
                        if (esi_1[4] == 0)
                            eax_72 = sub_59e350(arg1[3] - ebx_16, edx_196, esi_1[6], ebx_16)
                        else
                            int32_t ecx_235 = arg1[3]
                            
                            if (ecx_235 != ebx_16)
                                eax_72 = sub_59e5d0(esi_1[6], edx_196, ecx_235 - ebx_16, ebx_16)
                            else
                                eax_72 = 0
                        
                        esi_1[6] = eax_72
                        arg1[0xc] = eax_72
                    
                    int32_t eax_75 = *esi_1
                    int32_t ebp_1
                    
                    if (eax_75 == 0x13 || eax_75 == 0xe)
                        ebp_1 = 0x100
                    else
                        ebp_1 = 0
                    
                    int32_t edx_197 = esi_1[1]
                    int32_t edx_198 = neg.d(edx_197)
                    int32_t ecx_238
                    ecx_238.b = eax_75 != 0xb
                    arg1[0xb] = (sbb.d(edx_198, edx_198, edx_197 != 0) & 0x40)
                        + ((ecx_238 - 1) & 0x80) + esi_1[0xf] + ebp_1
                    
                    if ((eax_70 != 0 || ebx_16 != 0) && arg2 != 4)
                        return result
                    
                    if (result != 0)
                        return result
                    
                    return 0xfffffffb
                case 0x1b
                    goto label_5a1eeb
                case 0x1c
                    goto label_5a1f86
                case 0x1d
                    result = 0xfffffffd
                    goto label_5a1fa0
                case 0x1e
                    break
        
        return 0xfffffffc

return 0xfffffffe
