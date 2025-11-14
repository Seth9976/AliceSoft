// 函数: sub_5acbb0
// 地址: 0x5acbb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_10c
int32_t eax_1 = data_78c474 ^ &var_10c
char eax_2 = (*(arg3 + 0x6c)).b
var_10c = arg4

if ((eax_2 & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before iCCP")
    noreturn

uint32_t result

if ((eax_2 & 4) == 0)
    if ((eax_2 & 2) != 0)
        sub_5a5de0("Out of place iCCP chunk", arg3)
    
    int32_t eax_4 = *(arg3 + 0x6c)
    
    if ((eax_4 & 0x4000) != 0 || (arg4 != 0 && (*(arg4 + 8) & 0x1800) != 0))
        sub_5a5de0("Duplicate iCCP chunk", arg3)
        result = sub_5ab650(arg3, arg5)
    else
        *(arg3 + 0x6c) = eax_4 | 0x4000
        int32_t eax_6 = *(arg3 + 0x2a8)
        
        if (eax_6 != 0)
            int32_t ecx_1 = *(arg3 + 0x268)
            
            if (ecx_1 == 0)
                __free_base(eax_6)
            else
                ecx_1(arg3, eax_6)
        
        int32_t eax_7 = sub_5a62f0(arg5 + 1, arg3)
        int32_t eax_8 = *(arg3 + 0x54)
        *(arg3 + 0x2a8) = eax_7
        
        if (eax_8 == 0)
            sub_5a5c60(arg3, "Call to NULL read function")
            noreturn
        
        char* ecx_3
        void* edx
        edx, ecx_3 = eax_8(arg3, eax_7, arg5)
        int32_t var_12c_1 = eax_7
        uint32_t var_130_1 = arg3
        sub_5a3fe0(arg5, edx, ecx_3)
        
        if (sub_5ab650(arg3, 0) == 0)
            *(arg5 + *(arg3 + 0x2a8)) = 0
            char* eax_12 = *(arg3 + 0x2a8)
            char* ebp_2 = eax_12
            
            while (*ebp_2 != 0)
                ebp_2 = &ebp_2[1]
            
            if (&ebp_2[1] u< &eax_12[arg5 - 1])
                eax_12.b = ebp_2[1]
                
                if (eax_12.b != 0)
                    sub_5a5de0("Ignoring nonzero compression type in iCCP chunk", arg3)
                    eax_12.b = 0
                
                int128_t* ebp_5 = &ebp_2[2] - *(arg3 + 0x2a8)
                uint32_t edi_1 = zx.d(eax_12.b)
                int128_t* var_108
                sub_5ab990(eax_12, edi_1, &var_108, arg3, arg5, ebp_5)
                int128_t* eax_13 = var_108
                uint32_t ebx_2 = eax_13 - ebp_5
                
                if (ebp_5 u> eax_13 || ebx_2 u< 4)
                    int32_t ecx_13 = *(arg3 + 0x2a8)
                    
                    if (ecx_13 != 0)
                        int32_t eax_18 = *(arg3 + 0x268)
                        
                        if (eax_18 == 0)
                            __free_base(ecx_13)
                        else
                            eax_18(arg3, ecx_13)
                    
                    *(arg3 + 0x2a8) = 0
                    result = sub_5a5de0("Profile size field missing from iCCP chunk", arg3)
                else
                    uint32_t edx_3 = *(arg3 + 0x2a8)
                    void* eax_14 = edx_3 + ebp_5
                    uint32_t ecx_10 = zx.d(*(eax_14 + 3))
                    uint32_t ebp_12 = ((zx.d(*eax_14) << 8 | zx.d(*(edx_3 + ebp_5 + 1))) << 8
                        | zx.d(*(eax_14 + 2))) << 8 | ecx_10
                    
                    if (ebp_12 u<= ebx_2)
                        uint32_t var_120_6 = ebp_12
                        void* var_124_6 = eax_14
                        sub_5b0480(arg3, var_10c, edx_3, ecx_10.b, edx_3, edi_1)
                        result = sub_5a6340(arg3, *(arg3 + 0x2a8))
                        *(arg3 + 0x2a8) = 0
                    else
                        int32_t eax_15
                        int32_t edx_4
                        eax_15, edx_4 = sub_5a6340(arg3, edx_3)
                        void var_104
                        void* edi_2 = &var_104
                        *(arg3 + 0x2a8) = 0
                        char* eax_16
                        int32_t edx_5
                        eax_16, edx_5 = sub_5a5e50(eax_15, edx_4, 1, edi_2, ebp_12)
                        sub_5a5e50(eax_16, edx_5, 2, edi_2, ebx_2)
                        result = sub_5a5f20(arg3, &var_104, 
                            "Ignoring iCCP chunk with declared size = @1 and actual length = @2")
            else
                if (eax_12 != 0)
                    int32_t ecx_6 = *(arg3 + 0x268)
                    
                    if (ecx_6 == 0)
                        __free_base(eax_12)
                    else
                        ecx_6(arg3, eax_12)
                
                *(arg3 + 0x2a8) = 0
                result = sub_5a5de0("Malformed iCCP chunk", arg3)
        else
            result = sub_5a6340(arg3, *(arg3 + 0x2a8))
            *(arg3 + 0x2a8) = 0
else
    sub_5a5de0("Invalid iCCP after IDAT", arg3)
    result = sub_5ab650(arg3, arg5)

sub_6b4885(eax_1 ^ &var_10c)
return result
