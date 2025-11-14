// 函数: sub_689dd0
// 地址: 0x689dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0x14)

if (arg2 != result[2])
    result = *(arg1 + 0x18)
    
    if (arg2 != result[2])
        result = *(arg1 + 0x1c)
        
        if (arg2 != result[2])
            result = *(arg1 + 0x20)
            
            if (arg2 != result[2])
                result = (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2
                int32_t edx_4 = 0
                
                if (result s> 0)
                    int32_t edi_1 = *(arg1 + 0x34)
                    
                    do
                        if (arg2 == edi_1)
                            if ((*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2 s> edx_4)
                                result = *(arg1 + 0x4c) + (edx_4 << 2)
                                *(arg1 + 0x38) += *result
                                *result = 0xffffffff
                            
                            break
                        
                        edx_4 += 1
                        edi_1 += 1
                    while (edx_4 s< result)
            else
                *(arg1 + 0x38) += *(arg1 + 0x48)
                *(arg1 + 0x48) = 0xffffffff
        else
            *(arg1 + 0x38) += *(arg1 + 0x44)
            *(arg1 + 0x44) = 0xffffffff
    else
        *(arg1 + 0x38) += *(arg1 + 0x3c)
        *(arg1 + 0x3c) = 0xffffffff
else
    *(arg1 + 0x38) += *(arg1 + 0x40)
    *(arg1 + 0x40) = 0xffffffff

int32_t* ecx = *(arg1 + 0x60)

if (ecx == 0)
    return result

return (*(*ecx + 0x1c))(1)
