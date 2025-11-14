// 函数: sub_430a40
// 地址: 0x430a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_430930(arg2)
char* result = *arg1

if (&result[4] u<= arg1[1])
    *(arg2 + 0x24) =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg1 += 4
    result = *arg1
    
    if (&result[4] u<= arg1[1])
        *(arg2 + 0x28) =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg1 += 4
        int32_t ecx_7
        result, ecx_7 = sub_40ff40(arg2 + 0x2c, arg1, arg2 + 0x2c)
        
        if (result.b != 0)
            int32_t ecx_8
            result, ecx_8 = sub_40ff40(ecx_7, arg1, arg2 + 0x30)
            
            if (result.b != 0 && sub_40ff40(ecx_8, arg1, arg2 + 0x44).b != 0)
                int32_t ecx_10
                result, ecx_10 = sub_40ff40(arg2 + 0x48, arg1, arg2 + 0x48)
                
                if (result.b != 0 && sub_40ff40(ecx_10, arg1, arg2 + 0x4c).b != 0)
                    uint32_t var_c = 0
                    uint32_t var_8 = 0
                    uint32_t var_4 = 0
                    
                    if (sub_5546f0(arg1, &var_c) != 0 && sub_5546f0(arg1, &var_8) != 0
                            && sub_5546f0(arg1, &var_4) != 0)
                        uint32_t ecx_13 = var_8
                        uint32_t edx_22 = var_4
                        *(arg2 + 0x68) = var_c
                        *(arg2 + 0x6c) = ecx_13
                        *(arg2 + 0x70) = edx_22
                        
                        if (sub_5546f0(arg1, &var_c) != 0 && sub_5546f0(arg1, &var_8) != 0
                                && sub_5546f0(arg1, &var_4) != 0)
                            uint32_t ecx_16 = var_8
                            uint32_t edx_23 = var_4
                            *(arg2 + 0x5c) = var_c
                            *(arg2 + 0x60) = ecx_16
                            *(arg2 + 0x64) = edx_23
                            
                            if (sub_5546f0(arg1, arg2 + 0x78) != 0
                                    && sub_5546f0(arg1, arg2 + 0x34) != 0
                                    && sub_5546f0(arg1, arg2 + 0x38) != 0
                                    && sub_5546f0(arg1, arg2 + 0x3c) != 0
                                    && sub_5546f0(arg1, arg2 + 0x40) != 0)
                                var_4 = 0
                                
                                if (sub_5546f0(arg1, &var_4) != 0)
                                    *(arg2 + 0x74) = var_4
                                    
                                    if (sub_5546f0(arg1, arg2 + 0x50) != 0
                                            && sub_5546f0(arg1, arg2 + 0x54) != 0)
                                        var_4 = 0
                                        
                                        if (sub_5546f0(arg1, &var_4) != 0)
                                            int32_t* ecx_23
                                            ecx_23.b = var_4 == 1
                                            *(arg2 + 0x58) = ecx_23.b
                                            var_4 = 0
                                            
                                            if (sub_5546f0(arg1, &var_4) != 0)
                                                *(arg2 + 0x59) = var_4 == 1
                                                return true
                    
                    return false

result.b = 0
return result
