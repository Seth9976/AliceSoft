// 函数: sub_53f5a0
// 地址: 0x53f5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0xebc) u<= arg1 + 0xabc)
    int32_t edx
    sub_53d1c0(arg1, edx, arg1, 0x74d894)
    return 2

int32_t ebp = *(*(arg1 + 0xebc) - 4)

if (ebp - 2 u> 3)
    goto label_53f5f9

switch (ebp)
    case 2, 3, 5
        *(arg1 + 0x12c0) -= 4
        sub_53af10(arg1)
    label_53f5f9:
        *(arg1 + 0xebc) -= 4
        char eax_4
        int32_t edx_1
        eax_4, edx_1 = sub_53adf0(arg1)
        
        if (eax_4 == 0)
            int32_t entry_ebx
            sub_53d0e0(arg1, 0x74d8b8, arg4, arg3, arg2, entry_ebx, __return_addr)
            return 2
        
        if (*(arg1 + 0xab8) u<= arg1 + 0x6b8)
            sub_53d1c0(arg1 + 0x6b8, edx_1, arg1, 0x74d8ec)
            return 2
        
        if (*(*(arg1 + 0xab8) - 4) s>= 0)
        label_53f688:
            
            if (ebp != 5 && ebp != 6)
                if (*(arg1 + 0x6b4) u<= arg1 + 0x2b4)
                    sub_53d1c0(arg1 + 0x2b4, edx_1, arg1, 0x74d920)
                    return 2
                
                int32_t ecx_7 = *(*(arg1 + 0x6b4) - 4)
                *(arg1 + 0x6b4) -= 4
                
                if (ecx_7 != 0xfffffffe)
                    if (ecx_7 != 0xffffffff)
                        *(arg1 + 0x28c) = *(arg1 + 0x290) + ecx_7
                        return 0
                    
                    *(arg1 + 0x2b0) -= 4
                    sub_53b140(arg1)
                    int32_t edx_3 = 0
                    int32_t i_1 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2
                    
                    if (i_1 s> 0)
                        int32_t* ecx_8 = *(arg1 + 0x1e4)
                        int32_t i
                        
                        do
                            if (*ecx_8 != 0)
                                edx_3 += 1
                            
                            ecx_8 = &ecx_8[1]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    int32_t var_14 = edx_3
                    int32_t var_18 = (*(arg1 + 0x2b0) - *(arg1 + 0x2a4)) s>> 2
                    sub_53d1c0(i_1, edx_3, arg1, "main")
                    return 0
            
            *(arg1 + 0x298) = 0
            return 0
        
        if (ebp == 3)
            sub_53b400(arg1)
        else if (arg5 == 0)
            goto label_53f688

return 1
