// 函数: sub_5481e0
// 地址: 0x5481e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, arg1[0x2f] - arg1[0x2e])
int32_t edx_1 = edx s>> 5
int32_t eax_3

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t esi_1 = arg2 * 0x4c
    int32_t esi_2 = esi_1 + arg1[0x2e]
    
    if (esi_1 != neg.d(arg1[0x2e]))
        int32_t ecx_2 = arg1[0xa4]
        int32_t ebp_2 = arg1[0xa3] - ecx_2
        arg1[0xa3] = *esi_2 + ecx_2
        int32_t var_c
        
        if (sub_552a10(esi_2, &arg1[0x77], &var_c) != 0)
            eax_3 = var_c
            
            if (eax_3 u< (arg1[0x7a] - arg1[0x79]) s>> 2)
                int32_t* esi_3 = *(arg1[0x79] + (eax_3 << 2))
                
                if (esi_3 != 0)
                    int32_t var_4_1 = arg4
                    int32_t var_8 = arg3
                    
                    if (sub_5501a0(2, esi_3, &var_8).b != 0 && sub_53ada0(arg1, var_c).b != 0)
                        *arg1[0x3af] = 6
                        arg1[0x3af] += 4
                        
                        while (arg1[0xa6].b != 0)
                            int16_t* eax_5 = arg1[0xa3]
                            int16_t ecx_5 = *eax_5
                            arg1[0xa3] = &eax_5[1]
                            sub_53b4f0(arg1, ecx_5)
                        
                        arg1[0xa3] = arg1[0xa4] + ebp_2
                        int32_t eax_8
                        eax_8.b = 1
                        arg1[0xa6].b = 1
                        arg1[0xac] -= 4
                        *arg5 = *arg1[0xac]
                        return eax_8

eax_3.b = 0
return eax_3
