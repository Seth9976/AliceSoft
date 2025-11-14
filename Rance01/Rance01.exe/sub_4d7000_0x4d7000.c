// 函数: sub_4d7000
// 地址: 0x4d7000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg3 - arg2) s>> 5)
int32_t* esi_3 = &arg2[((eax_3 - edx) s>> 1) * 8]
sub_4d83a0(arg3 - 0x20, edx, arg2, esi_3, arg3 - 0x20)
int32_t* eax_6 = esi_3
int32_t* edi = &esi_3[8]

if (arg2 u< esi_3)
    do
        int32_t ecx_1 = eax_6[-8]
        int32_t edx_1 = *eax_6
        
        if (edx_1 s> ecx_1)
            break
        
        if (edx_1 s< ecx_1)
            break
        
        eax_6 = &eax_6[-8]
    while (arg2 u< eax_6)

if (edi u< arg3)
    int32_t edx_2 = *eax_6
    
    do
        int32_t ecx_2 = *edi
        
        if (edx_2 s> ecx_2)
            break
        
        if (edx_2 s< ecx_2)
            break
        
        edi = &edi[8]
    while (edi u< arg3)

int32_t* edx_3 = edi
int32_t* ebp_1 = eax_6

while (true)
    int32_t* var_e4_1 = edx_3
    
    while (true)
        if (edx_3 u< arg3)
            void* esi_4 = &edx_3[3]
            
            do
                int32_t ecx_3 = *edx_3
                int32_t ebx_1 = *eax_6
                
                if (ecx_3 s<= ebx_1)
                    if (ecx_3 s< ebx_1)
                        break
                    
                    int32_t ebx_2 = *edi
                    int32_t ebx_3 = edi[1]
                    int32_t ebx_4 = edi[3]
                    int32_t ebx_5 = edi[4]
                    int32_t ebx_6 = edi[5]
                    int32_t ebx_7 = edi[6]
                    char ebx_8 = edi[7].b
                    *edi = *edx_3
                    edi[1] = *(esi_4 - 8)
                    edi[3] = *esi_4
                    edi[4] = *(esi_4 + 4)
                    edi[5] = *(esi_4 + 8)
                    edi[6] = *(esi_4 + 0xc)
                    edi[7].b = *(esi_4 + 0x10)
                    *edx_3 = ebx_2
                    *(esi_4 - 8) = ebx_3
                    *esi_4 = ebx_4
                    *(esi_4 + 4) = ebx_5
                    *(esi_4 + 8) = ebx_6
                    *(esi_4 + 0xc) = ebx_7
                    int32_t ecx_10
                    ecx_10.b = ebx_8
                    edi = &edi[8]
                    *(esi_4 + 0x10) = ecx_10.b
                
                edx_3 = &edx_3[8]
                esi_4 += 0x20
            while (edx_3 u< arg3)
            
            var_e4_1 = edx_3
        
        bool cond:2_1 = ebp_1 != arg2
        
        if (ebp_1 u> arg2)
            void* esi_5 = &eax_6[3]
            void* ecx_11 = &ebp_1[-5]
            
            do
                int32_t edx_4 = *(ecx_11 - 0xc)
                int32_t ebx_16 = *eax_6
                
                if (ebx_16 s<= edx_4)
                    if (ebx_16 s< edx_4)
                        break
                    
                    int32_t ebx_17 = *(esi_5 - 0x28)
                    int32_t edx_5 = eax_6[-8]
                    int32_t ebx_18 = *(esi_5 - 0x20)
                    int32_t ebx_19 = *(esi_5 - 0x1c)
                    eax_6 -= 0x20
                    esi_5 -= 0x20
                    int32_t ebx_20 = *(esi_5 + 8)
                    int32_t ebx_21 = *(esi_5 + 0xc)
                    char ebx_22 = *(esi_5 + 0x10)
                    *eax_6 = *(ecx_11 - 0xc)
                    *(esi_5 - 8) = *(ecx_11 - 8)
                    *esi_5 = *ecx_11
                    *(esi_5 + 4) = *(ecx_11 + 4)
                    *(esi_5 + 8) = *(ecx_11 + 8)
                    *(esi_5 + 0xc) = *(ecx_11 + 0xc)
                    *(esi_5 + 0x10) = *(ecx_11 + 0x10)
                    *(ecx_11 - 0xc) = edx_5
                    *(ecx_11 - 8) = ebx_17
                    *ecx_11 = ebx_18
                    *(ecx_11 + 4) = ebx_19
                    *(ecx_11 + 8) = ebx_20
                    *(ecx_11 + 0xc) = ebx_21
                    int32_t edx_10
                    edx_10.b = ebx_22
                    *(ecx_11 + 0x10) = edx_10.b
                
                ebp_1 -= 0x20
                ecx_11 -= 0x20
            while (arg2 u< ebp_1)
            
            edx_3 = var_e4_1
            cond:2_1 = ebp_1 != arg2
        
        if (cond:2_1)
            ebp_1 -= 0x20
            
            if (edx_3 != arg3)
                int32_t ebx_80 = edx_3[3]
                int32_t esi_10 = *edx_3
                int32_t ecx_34 = edx_3[1]
                int32_t ebx_81 = edx_3[4]
                int32_t ebx_82 = edx_3[5]
                int32_t ebx_83 = edx_3[6]
                char ebx_84 = edx_3[7].b
                *edx_3 = *ebp_1
                edx_3[1] = ebp_1[1]
                edx_3[3] = ebp_1[3]
                edx_3[4] = ebp_1[4]
                edx_3[5] = ebp_1[5]
                edx_3[6] = ebp_1[6]
                edx_3[7].b = ebp_1[7].b
                ebp_1[1] = ecx_34
                *ebp_1 = esi_10
                ebp_1[3] = ebx_80
                ebp_1[4] = ebx_81
                ebp_1[5] = ebx_82
                ebp_1[6] = ebx_83
                int32_t ecx_38
                ecx_38.b = ebx_84
                ebp_1[7].b = ecx_38.b
                edx_3 = &edx_3[8]
                break
            
            eax_6 -= 0x20
            
            if (ebp_1 != eax_6)
                int32_t ebx_56 = ebp_1[3]
                int32_t esi_8 = *ebp_1
                int32_t ecx_24 = ebp_1[1]
                int32_t ebx_57 = ebp_1[4]
                int32_t ebx_58 = ebp_1[5]
                int32_t ebx_59 = ebp_1[6]
                char ebx_60 = ebp_1[7].b
                *ebp_1 = *eax_6
                ebp_1[1] = eax_6[1]
                ebp_1[3] = eax_6[3]
                ebp_1[4] = eax_6[4]
                ebp_1[5] = eax_6[5]
                ebp_1[6] = eax_6[6]
                ebp_1[7].b = eax_6[7].b
                eax_6[1] = ecx_24
                *eax_6 = esi_8
                eax_6[3] = ebx_56
                eax_6[4] = ebx_57
                eax_6[5] = ebx_58
                eax_6[6] = ebx_59
                int32_t ecx_28
                ecx_28.b = ebx_60
                eax_6[7].b = ecx_28.b
            
            int32_t ebx_68 = eax_6[3]
            int32_t esi_9 = *eax_6
            int32_t ecx_29 = eax_6[1]
            int32_t ebx_69 = eax_6[4]
            int32_t ebx_70 = eax_6[5]
            int32_t ebx_71 = eax_6[6]
            edi -= 0x20
            char ebx_72 = eax_6[7].b
            *eax_6 = *edi
            eax_6[1] = edi[1]
            eax_6[3] = edi[3]
            eax_6[4] = edi[4]
            eax_6[5] = edi[5]
            eax_6[6] = edi[6]
            eax_6[7].b = edi[7].b
            edi[1] = ecx_29
            *edi = esi_9
            edi[3] = ebx_68
            edi[4] = ebx_69
            edi[5] = ebx_70
            edi[6] = ebx_71
            int32_t ecx_33
            ecx_33.b = ebx_72
            edi[7].b = ecx_33.b
        else
            if (edx_3 == arg3)
                arg1[1] = edi
                *arg1 = eax_6
                return arg1
            
            if (edi != edx_3)
                int32_t ebx_30 = eax_6[3]
                int32_t esi_6 = *eax_6
                int32_t ecx_12 = eax_6[1]
                int32_t ebx_31 = eax_6[4]
                int32_t ebx_32 = eax_6[5]
                int32_t ebx_33 = eax_6[6]
                char ebx_34 = eax_6[7].b
                *eax_6 = *edi
                eax_6[1] = edi[1]
                eax_6[3] = edi[3]
                eax_6[4] = edi[4]
                eax_6[5] = edi[5]
                eax_6[6] = edi[6]
                eax_6[7].b = edi[7].b
                edi[1] = ecx_12
                *edi = esi_6
                edi[3] = ebx_30
                edi[4] = ebx_31
                edi[5] = ebx_32
                edi[6] = ebx_33
                int32_t ecx_16
                ecx_16.b = ebx_34
                edi[7].b = ecx_16.b
            
            int32_t ebx_42 = *eax_6
            int32_t ebx_43 = eax_6[1]
            int32_t ebx_44 = eax_6[3]
            int32_t ebx_45 = eax_6[4]
            int32_t ebx_46 = eax_6[5]
            int32_t ebx_47 = eax_6[6]
            int32_t* esi_7 = edx_3
            char ebx_48 = eax_6[7].b
            *eax_6 = *esi_7
            eax_6[1] = esi_7[1]
            eax_6[3] = esi_7[3]
            eax_6[4] = esi_7[4]
            eax_6[5] = esi_7[5]
            eax_6[6] = esi_7[6]
            eax_6[7].b = esi_7[7].b
            *esi_7 = ebx_42
            esi_7[1] = ebx_43
            esi_7[3] = ebx_44
            esi_7[4] = ebx_45
            esi_7[5] = ebx_46
            esi_7[6] = ebx_47
            int32_t ecx_23
            ecx_23.b = ebx_48
            edi = &edi[8]
            eax_6 = &eax_6[8]
            edx_3 = &edx_3[8]
            var_e4_1 = edx_3
            esi_7[7].b = ecx_23.b
