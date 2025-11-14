// 函数: sub_5f09d0
// 地址: 0x5f09d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
int16_t top = 0
(*(*edi + 0x14))(arg4, arg5, arg6, fconvert.s(fconvert.t(arg7)), fconvert.s(fconvert.t(arg8)), 
    fconvert.s(fconvert.t(arg9)), fconvert.s(fconvert.t(arg10)), fconvert.s(fconvert.t(arg11)))
int32_t esi = 0
int32_t ebp_2 = (edi[0xca] - edi[0xc9]) s>> 2
float result

if (ebp_2 s> 0)
    int32_t ebx_1 = arg3
    
    do
        if (esi s>= 0)
            result = edi[0xc9]
            
            if (esi s< (edi[0xca] i- result) s>> 2)
                result = *(result i+ (esi << 2))
                void* var_24_1
                float result_1
                int32_t var_1c_1
                int32_t var_18_1
                char var_14_1
                
                if (arg12 == 0)
                    if (*(result i+ 4) != 0)
                        result = *result
                        
                        if (result != 0xffffffff)
                            var_14_1 = 0
                            var_18_1 = ebx_1
                            var_1c_1 = arg2
                            result_1 = result
                            var_24_1 = data_797d2c
                        label_5f0aa3:
                            result, ebx_1, esi, edi =
                                sub_4099e0(var_24_1, result_1, var_1c_1, var_18_1, var_14_1)
                            top -= 1
                            unimplemented  {call 0x4099e0}
                            result.b = result.b != 0
                        else
                            result.b = 0
                    else
                        result.b = 0
                else if (*(result i+ 4) != 0)
                    result = *result
                    
                    if (result != 0xffffffff)
                        var_14_1 = 1
                        var_18_1 = ebx_1
                        var_1c_1 = arg2
                        result_1 = result
                        var_24_1 = data_797d2c
                        goto label_5f0aa3
                    
                    result.b = 0
                else
                    result.b = 0
                
                if (result.b != 0)
                    result.b = 1
                    return result
        
        esi += 1
    while (esi s< ebp_2)

result.b = 0
return result
