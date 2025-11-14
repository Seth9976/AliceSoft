// 函数: sub_6f2fe0
// 地址: 0x6f2fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
uint32_t var_10
int32_t result = sub_6f2b00(arg1 + 0x37e8, &var_10)

if (result == 0)
    uint32_t edx_1 = var_10
    
    if (edx_1 s>= 2)
        var_10 = edx_1 - 2
        
        if (edx_1 - 2 s>= 0xc)
            result = sub_6f2920(arg1 + 0x37e8, edx_1 - 2, &var_18, &var_1c, &var_14)
            
            if (result == 0)
                char* edx_5 = var_1c
                var_1c = &edx_5[1]
                
                if (*edx_5 == 0x41)
                    var_1c = &edx_5[2]
                    
                    if (edx_5[1] == 0x64)
                        var_1c = &edx_5[3]
                        
                        if (edx_5[2] == 0x6f)
                            var_1c = &edx_5[4]
                            
                            if (edx_5[3] == 0x62)
                                var_1c = &edx_5[5]
                                
                                if (edx_5[4] == 0x65)
                                    var_1c = &edx_5[7]
                                    *(arg1 + 0x4df0) = (zx.d(edx_5[5]) << 8).w + zx.w(edx_5[6])
                                    var_1c = &edx_5[9]
                                    *(arg1 + 0x4df2) = (zx.d(edx_5[7]) << 8).w + zx.w(edx_5[8])
                                    var_1c = &edx_5[0xb]
                                    *(arg1 + 0x4df4) = (zx.d(edx_5[9]) << 8).w + zx.w(edx_5[0xa])
                                    var_1c = &edx_5[0xc]
                                    *(arg1 + 0x482c) = zx.d(edx_5[0xb])
                                    *(arg1 + 0x4828) = 1
    else
        result = 0xffffffeb

if (var_14 != 0)
    int32_t edx_4 = var_18
    
    if (edx_4 != 0)
        int32_t var_34_1 = edx_4
        sub_6b4d5b()

return result
