// 函数: sub_4cb150
// 地址: 0x4cb150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = 0
int32_t edi_2 = (arg2[1] - *arg2) s>> 2
int32_t* result

if (edi_2 s> 0)
    while (true)
        if (esi s>= 0)
            result = *arg1
            
            if (esi s< (arg1[1] - result) s>> 2)
                result = result[esi]
                
                if (result == 0)
                label_4cb1bb:
                    esi += 1
                    
                    if (esi s>= edi_2)
                        break
                    
                    continue
                else
                    int32_t ecx_4 = *arg2
                    float* ecx_5
                    
                    if (esi s>= (arg2[1] - ecx_4) s>> 2)
                        ecx_5 = nullptr
                    else
                        ecx_5 = *(ecx_4 + (esi << 2))
                    
                    if (*result != 8)
                        goto label_4cb1bb
                    
                    result = result[0x14]
                    
                    if (result == 0)
                        goto label_4cb1bb
                    
                    if (sub_4ec420(result, ecx_5, arg3).b != 0)
                        goto label_4cb1bb
                    
                    sub_51ddc0(0x755f50)
        
        result.b = 0
        return result

result.b = 1
return result
