// 函数: sub_548460
// 地址: 0x548460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x6bca1af3, arg2[0x2f] - arg2[0x2e])
int32_t edx_3 = edx_2 s>> 5

if (arg1 u< (edx_3 u>> 0x1f) + edx_3)
    int32_t ecx = arg1 * 0x4c
    int32_t ecx_1 = ecx + arg2[0x2e]
    
    if (ecx != neg.d(arg2[0x2e]))
        int32_t edx_4 = arg2[0xa4]
        int32_t ebx_2 = arg2[0xa3] - edx_4
        arg2[0xa3] = *ecx_1 + edx_4
        int32_t var_8
        
        if (sub_552a10(ecx_1, &arg2[0x77], &var_8) != 0)
            int32_t ebp_1 = var_8
            
            if (ebp_1 u< (arg2[0x7a] - arg2[0x79]) s>> 2)
                int32_t* esi_2 = *(arg2[0x79] + (ebp_1 << 2))
                
                if (esi_2 != 0)
                    int32_t var_4_1 = arg4
                    var_8 = arg3
                    
                    if (sub_5501a0(2, esi_2, &var_8).b != 0 && sub_53ada0(arg2, ebp_1).b != 0)
                        *arg2[0x3af] = 6
                        arg2[0x3af] += 4
                        
                        while (arg2[0xa6].b != 0)
                            int16_t* eax_7 = arg2[0xa3]
                            int16_t ecx_6 = *eax_7
                            arg2[0xa3] = &eax_7[1]
                            sub_53b4f0(arg2, ecx_6)
                        
                        arg2[0xa3] = arg2[0xa4] + ebx_2
                        int32_t eax_10
                        eax_10.b = 1
                        arg2[0xa6].b = 1
                        arg2[0xac] -= 4
                        *arg5 = *arg2[0xac]
                        return eax_10

int32_t eax_3
eax_3.b = 0
return eax_3
