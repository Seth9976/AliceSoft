// 函数: sub_53fda0
// 地址: 0x53fda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, arg1[0x2f] - arg1[0x2e])
int32_t edx_1 = edx s>> 5
void var_1c
int32_t entry_ebx

if (arg5 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t edi_1 = arg5 * 0x4c
    int32_t* edi_2 = edi_1 + arg1[0x2e]
    
    if (edi_1 != neg.d(arg1[0x2e]))
        if (arg1[0x4ce].b != 0)
            sub_52bd90(arg1[0x4be] + arg5 * 0x38)
        
        int32_t eax_4 = arg1[0xa4]
        int32_t ecx_8 = arg1[0xa3] - eax_4
        arg1[0xa3] = *edi_2 + eax_4
        int32_t eax_5 = sub_5527e0(&arg1[0x77])
        int32_t* eax_7 = sub_552320(&arg1[0x7f])
        
        if (eax_7 != 0)
            *(arg1[0x79] + (eax_5 << 2)) = eax_7
            
            if (sub_54ffa0(edi_2[0xc], eax_7, edi_2[0xb], &edi_2[0xf]) != 0)
                eax_7[0x11] = arg4
                
                if (sub_53ada0(arg1, eax_5) == 0)
                    sub_53d0e0(arg1, 0x74dbc0, arg3, arg2, entry_ebx, var_1c, eax_5)
                    int32_t eax_12
                    eax_12.b = 0
                    return eax_12
                
                *arg1[0x3af] = 5
                arg1[0x3af] += 4
                *arg1[0x4b0] = arg4
                arg1[0x4b0] += 4
                
                if (sub_53af10(arg1) == 0)
                    sub_53d0e0(arg1, 0x74dbf4, arg3, arg2, entry_ebx, var_1c, eax_5)
                    int32_t eax_15
                    eax_15.b = 0
                    return eax_15
                
                int32_t* eax_17 = edi_2[0xa]
                
                if (eax_17 s> 0 && sub_5501a0(eax_17, arg1[0x4b1], arg6).b == 0)
                    sub_53d0e0(arg1, 0x74dc2c, arg3, arg2, entry_ebx, var_1c, eax_5)
                    int32_t eax_18
                    eax_18.b = 0
                    return eax_18
                
                while (arg1[0xa6].b != 0)
                    int16_t* eax_19 = arg1[0xa3]
                    int16_t ecx_21 = *eax_19
                    arg1[0xa3] = &eax_19[1]
                    sub_53b4f0(arg1, ecx_21)
                
                eax_17.b = 1
                arg1[0xa6].b = 1
                arg1[0xa3] = arg1[0xa4] + ecx_8
                return eax_17
        
        sub_53d0e0(arg1, 0x74db90, arg3, arg2, entry_ebx, var_1c, eax_5)
        int32_t eax_13
        eax_13.b = 0
        return eax_13

sub_53d0e0(arg1, 0x74db58, arg5, arg3, arg2, entry_ebx, var_1c)
int32_t eax_2
eax_2.b = 0
return eax_2
