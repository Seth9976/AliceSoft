// 函数: sub_548320
// 地址: 0x548320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, arg1[0x2f] - arg1[0x2e])
int32_t edx_1 = edx s>> 5
int32_t result

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t esi_1 = arg2 * 0x4c
    int32_t esi_2 = esi_1 + arg1[0x2e]
    
    if (esi_1 != neg.d(arg1[0x2e]))
        int32_t ecx_2 = arg1[0xa4]
        int32_t ebp_2 = arg1[0xa3] - ecx_2
        arg1[0xa3] = *esi_2 + ecx_2
        int32_t result_1
        
        if (sub_552a10(esi_2, &arg1[0x77], &result_1) != 0)
            result = result_1
            
            if (result u< (arg1[0x7a] - arg1[0x79]) s>> 2)
                int32_t* esi_3 = *(arg1[0x79] + (result << 2))
                
                if (esi_3 != 0)
                    int32_t var_4_1 = arg4
                    int32_t var_8 = arg3
                    
                    if (sub_5501a0(2, esi_3, &var_8).b != 0 && sub_53ada0(arg1, result_1).b != 0)
                        *arg1[0x3af] = 6
                        arg1[0x3af] += 4
                        
                        while (arg1[0xa6].b != 0)
                            int16_t* eax_4 = arg1[0xa3]
                            int16_t ecx_5 = *eax_4
                            arg1[0xa3] = &eax_4[1]
                            sub_53b4f0(arg1, ecx_5)
                        
                        arg1[0xa3] = arg1[0xa4] + ebp_2
                        result.b = 1
                        arg1[0xa6].b = 1
                        arg1[0xac] -= 4
                        *arg5 = *arg1[0xac]
                        return result

result.b = 0
return result
