// 函数: sub_5b2dd0
// 地址: 0x5b2dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result = arg1 + arg3
uint32_t var_c = arg3
uint32_t result_1 = result

if (arg3 + 4 u<= result && arg3 + 8 u<= result)
    result = ((zx.d(*(arg3 + 7)) << 8 | zx.d(*(arg3 + 6))) << 8 | zx.d(*(arg3 + 5))) << 8
        | zx.d(*(arg3 + 4))
    var_c = arg3 + 8
    uint32_t var_10
    
    if (result == 0)
        var_10 = 0x30
    label_5b2e44:
        
        if (sub_5546f0(&var_c, &arg2[3]).b != 0)
            uint32_t* ecx_5 = &var_c
            
            if (sub_5546f0(ecx_5, &arg2[4]).b != 0 && sub_5546f0(ecx_5, arg2).b != 0
                    && sub_5546f0(ecx_5, &arg2[1]).b != 0 && sub_5546f0(ecx_5, &arg2[2]).b != 0
                    && var_c + 4 u<= result_1)
                var_c += 4
                
                if (sub_5546f0(ecx_5, &arg2[7]).b != 0 && sub_5546f0(ecx_5, &arg2[8]).b != 0)
                    int32_t ecx_6 = arg2[7]
                    result.b = 1
                    
                    if (ecx_6 s<= 0)
                        arg2[9].b = 0
                        arg2[5] = 0
                    else
                        arg2[9].b = 1
                        arg2[5] = var_10 + arg3
                    
                    if (arg2[8] s<= 0)
                        *(arg2 + 0x25) = 0
                        arg2[6] = 0
                        return result
                    
                    int32_t ecx_7 = ecx_6 + var_10
                    *(arg2 + 0x25) = 1
                    arg2[6] = ecx_7 + arg3
                    return result
    else if (result s> 0 && result s<= 2 && sub_5546f0(&var_c, &var_10).b != 0)
        goto label_5b2e44

result.b = 0
return result
