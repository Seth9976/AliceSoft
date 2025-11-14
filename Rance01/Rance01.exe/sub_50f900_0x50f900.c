// 函数: sub_50f900
// 地址: 0x50f900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_98
int32_t eax_1 = data_78c474 ^ &var_98
int32_t edi = 0
float* var_90 = arg3 + 4
float* result

if (*(arg1 + 0xa8) s<= 0)
label_50f9f1:
    result.b = 1
else
    var_98 = 0
    int32_t ebp_1 = 0x10
    
    while (true)
        if (edi s>= 0)
            int32_t ebx_1 = *(arg1 + 0x98)
            int32_t edx_1
            edx_1:result = muls.dp.d(0x4d4873ed, *(arg1 + 0x9c) - ebx_1)
            int32_t edx_2 = edx_1 s>> 6
            
            if (edi s< (edx_2 u>> 0x1f) + edx_2)
                float* ebx_2 = ebx_1 + var_98
                
                if (ebx_1 != neg.d(var_98))
                    float var_8c[0x10]
                    sub_4b65f0(&var_8c, var_90, ebx_2, &var_8c)
                    
                    if ((*(**(arg2 + 0x28) + 0x24))(4, &var_8c).b != 0)
                        float var_4c[0x11]
                        sub_4b65f0(&var_4c, var_90, &ebx_2[0x20], &var_4c)
                        
                        if ((*(**(arg2 + 0x28) + 0x24))(ebp_1, &var_4c).b != 0)
                            var_98 += 0xd4
                            edi += 1
                            ebp_1 += 4
                            
                            if (edi s>= *(arg1 + 0xa8))
                                goto label_50f9f1
                            
                            continue
        
        result.b = 0
        break

sub_6b4885(eax_1 ^ &var_98)
return result
