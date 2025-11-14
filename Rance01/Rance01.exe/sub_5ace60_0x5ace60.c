// 函数: sub_5ace60
// 地址: 0x5ace60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x288)

if (eax == 0)
label_5acea6:
    char eax_3 = (*(arg1 + 0x6c)).b
    
    if ((eax_3 & 1) == 0)
        sub_5a5c60(arg1, "Missing IHDR before sPLT")
        noreturn
    
    if ((eax_3 & 4) == 0)
        int32_t ecx_2 = *(arg1 + 0x2a8)
        
        if (ecx_2 != 0)
            int32_t eax_5 = *(arg1 + 0x268)
            
            if (eax_5 == 0)
                __free_base(ecx_2)
            else
                eax_5(arg1, ecx_2)
        
        int32_t eax_6 = sub_5a62f0(arg3 + 1, arg1)
        int32_t eax_7 = *(arg1 + 0x54)
        *(arg1 + 0x2a8) = eax_6
        
        if (eax_7 == 0)
            sub_5a5c60(arg1, "Call to NULL read function")
            noreturn
        
        char* ecx_4
        void* edx_1
        edx_1, ecx_4 = eax_7(arg1, eax_6, arg3)
        int32_t var_34_1 = eax_6
        uint32_t var_38_1 = arg1
        sub_5a3fe0(arg3, edx_1, ecx_4)
        
        if (sub_5ab650(arg1, 0) != 0)
            int32_t eax_10 = sub_5a6340(arg1, *(arg1 + 0x2a8))
            *(arg1 + 0x2a8) = 0
            return eax_10
        
        (*(arg1 + 0x2a8))[arg3] = 0
        char* ecx_6 = *(arg1 + 0x2a8)
        char* edi_2 = ecx_6
        
        while (*edi_2 != 0)
            edi_2 = &edi_2[1]
        
        if (&edi_2[1] u> &ecx_6[arg3 - 2])
            if (ecx_6 != 0)
                int32_t eax_12 = *(arg1 + 0x268)
                
                if (eax_12 == 0)
                    __free_base(ecx_6)
                else
                    eax_12(arg1, ecx_6)
            
            *(arg1 + 0x2a8) = 0
            return sub_5a5de0("malformed sPLT chunk", arg1)
        
        char* eax_11
        eax_11.b = edi_2[1]
        void* edi_4 = &edi_2[2]
        int32_t ebx_1
        ebx_1.b = eax_11.b != 8
        char var_10_1 = eax_11.b
        int32_t eax_16 = ecx_6 - edi_4 + arg3
        int32_t edx_4 = 0
        uint32_t i_3 = divu.dp.d(edx_4:eax_16, (ebx_1 << 2) + 6)
        
        if (modu.dp.d(edx_4:eax_16, (ebx_1 << 2) + 6) != 0)
            if (ecx_6 != 0)
                int32_t eax_18 = *(arg1 + 0x268)
                
                if (eax_18 == 0)
                    __free_base(ecx_6)
                else
                    eax_18(arg1, ecx_6)
            
            *(arg1 + 0x2a8) = 0
            return sub_5a5de0("sPLT chunk has bad length", arg1)
        
        if (i_3 u> 0x19999999)
            return sub_5a5de0("sPLT chunk too long", arg1)
        
        uint32_t i_1 = i_3
        uint32_t i_2 = i_1
        void* eax_21
        uint32_t ecx_9
        eax_21, ecx_9 = sub_5a6370(i_1 * 0xa, arg1)
        
        if (eax_21 == 0)
            return sub_5a5de0("sPLT chunk requires too much memory", arg1)
        
        if (i_1 s> 0)
            void* eax_23 = eax_21 + 4
            uint32_t i
            
            do
                uint16_t ecx_10 = zx.w(*edi_4)
                void* edi_5
                
                if (var_10_1 != 8)
                    *(eax_23 - 4) = ecx_10 * 0x100 + zx.w(*(edi_4 + 1))
                    *(eax_23 - 2) = zx.w(*(edi_4 + 2)) * 0x100 + zx.w(*(edi_4 + 3))
                    *eax_23 = zx.w(*(edi_4 + 4)) * 0x100 + zx.w(*(edi_4 + 5))
                    *(eax_23 + 2) = zx.w(*(edi_4 + 6)) * 0x100 + zx.w(*(edi_4 + 7))
                    edi_5 = edi_4 + 8
                else
                    *(eax_23 - 4) = ecx_10
                    *(eax_23 - 2) = zx.w(*(edi_4 + 1))
                    *eax_23 = zx.w(*(edi_4 + 2))
                    *(eax_23 + 2) = zx.w(*(edi_4 + 3))
                    edi_5 = edi_4 + 4
                
                ecx_9.w = zx.w(*edi_5) * 0x100
                ecx_9.w += zx.w(*(edi_5 + 1))
                *(eax_23 + 4) = ecx_9.w
                edi_4 = edi_5 + 2
                eax_23 += 0xa
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t var_14
        int32_t* var_28_6 = &var_14
        var_14 = *(arg1 + 0x2a8)
        void* var_2c_6 = arg2
        sub_5b0990(arg1, arg2, ecx_9)
        int32_t eax_2 = *(arg1 + 0x2a8)
        
        if (eax_2 != 0)
            int32_t ecx_15 = *(arg1 + 0x268)
            
            if (ecx_15 == 0)
                eax_2 = __free_base(eax_2)
            else
                eax_2 = ecx_15(arg1, eax_2)
        
        *(arg1 + 0x2a8) = 0
        
        if (eax_21 == 0)
            return eax_2
        
        int32_t eax_26 = *(arg1 + 0x268)
        
        if (eax_26 == 0)
            return __free_base(eax_21)
        
        return eax_26(arg1, eax_21)
    
    sub_5a5de0("Invalid sPLT after IDAT", arg1)
else if (eax != 1)
    *(arg1 + 0x288) = eax - 1
    
    if (eax != 2)
        goto label_5acea6
    
    sub_5a5de0("No space in chunk cache for sPLT", arg1)

return sub_5ab650(arg1, arg3)
