// 函数: sub_5a4280
// 地址: 0x5a4280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0 || arg2 == 0)
    return 

if ((*(arg2 + 0xb8) & arg3 & 0x4000) != 0)
    if (arg4 == 0xffffffff)
        int32_t i = 0
        
        if (*(arg2 + 0x30) s> 0)
            do
                sub_5a4280(arg1, arg2, 0x4000, i)
                i += 1
            while (i s< *(arg2 + 0x30))
        
        int32_t ecx_4 = *(arg2 + 0x38)
        
        if (ecx_4 != 0)
            int32_t eax_4 = *(arg1 + 0x268)
            
            if (eax_4 == 0)
                __free_base(ecx_4)
            else
                eax_4(arg1, ecx_4)
        
        *(arg2 + 0x38) = 0
        *(arg2 + 0x30) = 0
    else
        int32_t eax_3 = *(arg2 + 0x38)
        
        if (eax_3 != 0)
            int32_t ebp_4 = arg4 * 0x1c
            int32_t edx_1 = *(eax_3 + ebp_4 + 4)
            
            if (edx_1 != 0)
                sub_5a6340(arg1, edx_1)
                *(*(arg2 + 0x38) + ebp_4 + 4) = 0

if ((*(arg2 + 0xb8) & arg3 & 0x2000) != 0)
    int32_t ecx_5 = *(arg2 + 0x4c)
    
    if (ecx_5 != 0)
        int32_t eax_5 = *(arg1 + 0x268)
        
        if (eax_5 == 0)
            __free_base(ecx_5)
        else
            eax_5(arg1, ecx_5)
    
    *(arg2 + 8) &= 0xffffffef
    *(arg2 + 0x4c) = 0

if ((*(arg2 + 0xb8) & arg3 & 0x100) != 0)
    int32_t ecx_6 = *(arg2 + 0xe0)
    
    if (ecx_6 != 0)
        int32_t eax_8 = *(arg1 + 0x268)
        
        if (eax_8 == 0)
            __free_base(ecx_6)
        else
            eax_8(arg1, ecx_6)
    
    int32_t ecx_7 = *(arg2 + 0xe4)
    
    if (ecx_7 != 0)
        int32_t eax_9 = *(arg1 + 0x268)
        
        if (eax_9 == 0)
            __free_base(ecx_7)
        else
            eax_9(arg1, ecx_7)
    
    *(arg2 + 8) &= 0xffffbfff
    *(arg2 + 0xe0) = 0
    *(arg2 + 0xe4) = 0

if (((*(arg2 + 0xb8)).b & arg3.b) s< 0)
    int32_t ecx_10 = *(arg2 + 0xa0)
    
    if (ecx_10 != 0)
        int32_t eax_10 = *(arg1 + 0x268)
        
        if (eax_10 == 0)
            __free_base(ecx_10)
        else
            eax_10(arg1, ecx_10)
    
    int32_t ecx_11 = *(arg2 + 0xac)
    
    if (ecx_11 != 0)
        int32_t eax_11 = *(arg1 + 0x268)
        
        if (eax_11 == 0)
            __free_base(ecx_11)
        else
            eax_11(arg1, ecx_11)
    
    *(arg2 + 0xa0) = 0
    *(arg2 + 0xac) = 0
    
    if (*(arg2 + 0xb0) != 0)
        int32_t i_1 = 0
        
        if (*(arg2 + 0xb5) u> 0)
            do
                int32_t eax_12 = *(*(arg2 + 0xb0) + (i_1 << 2))
                
                if (eax_12 != 0)
                    int32_t ecx_12 = *(arg1 + 0x268)
                    
                    if (ecx_12 == 0)
                        __free_base(eax_12)
                    else
                        ecx_12(arg1, eax_12)
                
                *(*(arg2 + 0xb0) + (i_1 << 2)) = 0
                i_1 += 1
            while (i_1 s< zx.d(*(arg2 + 0xb5)))
        
        int32_t ecx_14 = *(arg2 + 0xb0)
        
        if (ecx_14 != 0)
            int32_t eax_14 = *(arg1 + 0x268)
            
            if (eax_14 == 0)
                __free_base(ecx_14)
            else
                eax_14(arg1, ecx_14)
        
        *(arg2 + 0xb0) = 0
    
    *(arg2 + 8) &= 0xfffffbff

if (((*(arg2 + 0xb8)).b & arg3.b & 0x10) != 0)
    int32_t ecx_15 = *(arg2 + 0xc4)
    
    if (ecx_15 != 0)
        int32_t eax_15 = *(arg1 + 0x268)
        
        if (eax_15 == 0)
            __free_base(ecx_15)
        else
            eax_15(arg1, ecx_15)
    
    int32_t ecx_16 = *(arg2 + 0xc8)
    
    if (ecx_16 != 0)
        int32_t eax_16 = *(arg1 + 0x268)
        
        if (eax_16 == 0)
            __free_base(ecx_16)
        else
            eax_16(arg1, ecx_16)
    
    *(arg2 + 8) &= 0xffffefff
    *(arg2 + 0xc4) = 0
    *(arg2 + 0xc8) = 0

if (((*(arg2 + 0xb8)).b & arg3.b & 0x20) != 0)
    if (arg4 == 0xffffffff)
        int32_t eax_23 = *(arg2 + 0xd8)
        
        if (eax_23 != 0)
            int32_t i_2 = 0
            
            if (eax_23 s> 0)
                do
                    sub_5a4280(arg1, arg2, 0x20, i_2)
                    i_2 += 1
                while (i_2 s< *(arg2 + 0xd8))
            
            int32_t ecx_20 = *(arg2 + 0xd4)
            
            if (ecx_20 != 0)
                int32_t eax_24 = *(arg1 + 0x268)
                
                if (eax_24 == 0)
                    __free_base(ecx_20)
                else
                    eax_24(arg1, ecx_20)
            
            *(arg2 + 0xd4) = 0
            *(arg2 + 0xd8) = 0
        
        *(arg2 + 8) &= 0xffffdfff
    else
        int32_t eax_19 = *(arg2 + 0xd4)
        
        if (eax_19 != 0)
            int32_t ebp_6 = arg4 * 2
            int32_t eax_20 = *(eax_19 + (ebp_6 << 3))
            
            if (eax_20 != 0)
                int32_t ecx_17 = *(arg1 + 0x268)
                
                if (ecx_17 == 0)
                    __free_base(eax_20)
                else
                    ecx_17(arg1, eax_20)
            
            int32_t eax_21 = *(*(arg2 + 0xd4) + (ebp_6 << 3) + 8)
            
            if (eax_21 != 0)
                int32_t ecx_19 = *(arg1 + 0x268)
                
                if (ecx_19 == 0)
                    __free_base(eax_21)
                else
                    ecx_19(arg1, eax_21)
            
            *(*(arg2 + 0xd4) + (ebp_6 << 3)) = 0
            *(*(arg2 + 0xd4) + (ebp_6 << 3) + 8) = 0

int32_t ecx_21 = *(arg1 + 0x298)

if (ecx_21 != 0)
    int32_t eax_25 = *(arg1 + 0x268)
    
    if (eax_25 == 0)
        __free_base(ecx_21)
    else
        eax_25(arg1, ecx_21)
    
    *(arg1 + 0x298) = 0

int32_t ebp_7 = arg3

if ((*(arg2 + 0xb8) & ebp_7 & 0x200) != 0)
    if (arg4 == 0xffffffff)
        int32_t eax_28 = *(arg2 + 0xc0)
        
        if (eax_28 != 0)
            int32_t i_3 = 0
            
            if (eax_28 s> 0)
                do
                    sub_5a4280(arg1, arg2, 0x200, i_3)
                    i_3 += 1
                while (i_3 s< *(arg2 + 0xc0))
            
            int32_t ecx_25 = *(arg2 + 0xbc)
            
            if (ecx_25 != 0)
                int32_t eax_29 = *(arg1 + 0x268)
                
                if (eax_29 == 0)
                    __free_base(ecx_25)
                else
                    eax_29(arg1, ecx_25)
            
            *(arg2 + 0xbc) = 0
            *(arg2 + 0xc0) = 0
            ebp_7 = arg3
    else
        int32_t eax_26 = *(arg2 + 0xbc)
        
        if (eax_26 != 0)
            int32_t ebp_11 = arg4 * 0x14
            int32_t eax_27 = *(eax_26 + ebp_11 + 8)
            
            if (eax_27 == 0)
                *(*(arg2 + 0xbc) + ebp_11 + 8) = 0
            else
                int32_t ecx_24 = *(arg1 + 0x268)
                
                if (ecx_24 == 0)
                    __free_base(eax_27)
                    *(*(arg2 + 0xbc) + ebp_11 + 8) = 0
                else
                    ecx_24(arg1, eax_27)
                    *(*(arg2 + 0xbc) + ebp_11 + 8) = 0
            
            ebp_7 = arg3

if (((*(arg2 + 0xb8)).b & ebp_7.b & 8) != 0)
    int32_t ecx_26 = *(arg2 + 0x7c)
    
    if (ecx_26 != 0)
        int32_t eax_32 = *(arg1 + 0x268)
        
        if (eax_32 == 0)
            __free_base(ecx_26)
        else
            eax_32(arg1, ecx_26)
    
    *(arg2 + 8) &= 0xffffffbf
    *(arg2 + 0x7c) = 0

if ((*(arg2 + 0xb8) & ebp_7 & 0x1000) != 0)
    int32_t ecx_29 = *(arg2 + 0x10)
    
    if (ecx_29 != 0)
        int32_t eax_33 = *(arg1 + 0x268)
        
        if (eax_33 == 0)
            __free_base(ecx_29)
        else
            eax_33(arg1, ecx_29)
    
    *(arg2 + 8) &= 0xfffffff7
    *(arg2 + 0x10) = 0
    *(arg2 + 0x14) = 0

if (((*(arg2 + 0xb8) & ebp_7).b & 0x40) != 0)
    if (*(arg2 + 0xe8) != 0)
        int32_t i_4 = 0
        
        if (*(arg2 + 4) s> 0)
            do
                int32_t eax = *(*(arg2 + 0xe8) + (i_4 << 2))
                
                if (eax != 0)
                    int32_t ecx_31 = *(arg1 + 0x268)
                    
                    if (ecx_31 == 0)
                        __free_base(eax)
                    else
                        ecx_31(arg1, eax)
                
                *(*(arg2 + 0xe8) + (i_4 << 2)) = 0
                i_4 += 1
            while (i_4 s< *(arg2 + 4))
        
        int32_t ecx_32 = *(arg2 + 0xe8)
        
        if (ecx_32 != 0)
            int32_t eax_35 = *(arg1 + 0x268)
            
            if (eax_35 == 0)
                __free_base(ecx_32)
            else
                eax_35(arg1, ecx_32)
        
        ebp_7 = arg3
        *(arg2 + 0xe8) = 0
    
    *(arg2 + 8) &= 0xffff7fff

if (arg4 != 0xffffffff)
    ebp_7 &= 0xffffbddf

*(arg2 + 0xb8) &= not.d(ebp_7)
