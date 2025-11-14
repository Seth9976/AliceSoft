// 函数: sub_6d11e0
// 地址: 0x6d11e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = arg2
int32_t j = 0

if (arg3 s<= arg4)
    int32_t i = arg3 * 4
    
    do
        result = *(i + &data_79aee0)
        int32_t edi_1 = sx.d(*(arg2 + (result << 1)))
        i += 4
        
        if (edi_1 != 0)
            int32_t edi_2
            
            if (edi_1 s< 0)
                edi_2 = neg.d(edi_1) s>> arg5.b
            else
                edi_2 = edi_1 s>> arg5.b
            
            if (edi_2 != 0)
                sub_6d0ed0(arg1, arg6)
                
                if (j s> 0xf)
                    int32_t eax_3
                    
                    if (j - 0xf s< 0x60)
                        eax_3 = arg6[0xf0]
                    else
                        eax_3 = arg6[0xf0]
                        
                        do
                            eax_3 += 5
                            j -= 0x50
                        while (j s>= 0x6f)
                    
                    do
                        eax_3 += 1
                        j -= 0x10
                    while (j s> 0xf)
                    
                    arg6[0xf0] = eax_3
                
                result = 1
                
                for (int32_t j_1 = edi_2 s>> 1; j_1 != 0; j_1 s>>= 1)
                    result += 1
                
                void* esi_1 = &arg6[j * 0x10]
                *(esi_1 + (result << 2)) += 1
                j = 0
            else
                j += 1
        else
            j += 1
    while (i s<= arg4 * 4)
    
    if (j s> 0)
        result = *(arg1 + 0x28) + 1
        *(arg1 + 0x28) = result
        
        if (result == 0x7fff)
            return sub_6d0ed0(arg1, arg6)

return result
