// 函数: sub_553ec0
// 地址: 0x553ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result = arg4
uint32_t result_1 = arg3

if (result s> 0)
    uint32_t* ebp_1 = arg2
    
    if (sub_427ad0(ebp_1, result << 2).b != 0)
        switch (ebp_1[0xd] - 0xe)
            case 0, 1, 0x10, 0x24
                uint32_t edx_1 = arg4
                result = result_1
                
                if (result_1 s>= edx_1)
                    result.b = 1
                    return result
                
                do
                    uint32_t ecx_1 = ebp_1[1]
                    
                    if (result u< ecx_1 u>> 2)
                        if (ecx_1 != 0)
                            ecx_1 = *ebp_1
                        
                        *(ecx_1 + (result << 2)) = 0
                    
                    result += 1
                while (result s< edx_1)
                
                result.b = 1
                return result
            case 2, 0xa
                if (result_1 s< arg4)
                    void* ebp_2 = arg1
                    void* esi_4 = ebp_2 + 0x20
                    
                    while (true)
                        int32_t eax_1 = sub_5527e0(ebp_2)
                        *(*(ebp_2 + 8) + (eax_1 << 2)) = sub_552440(esi_4)
                        
                        if (eax_1 s< 0)
                            goto label_553ff6
                        
                        result = *(arg2 + 4)
                        
                        if (result_1 u>= result u>> 2)
                            goto label_553ff6
                        
                        if (result != 0)
                            result = *arg2
                        
                        *(result + (result_1 << 2)) = eax_1
                        result_1 += 1
                        
                        if (result_1 s>= arg4)
                            break
                        
                        ebp_2 = arg1
                
                result.b = 1
                return result
            case 3, 0xb
                uint32_t edi_3 = arg4
                arg2 = ebp_1[0xe]
                uint32_t result_2 = result_1
                
                if (result_1 s< edi_3)
                    do
                        if (sub_553750(arg1, arg2, &arg4, 1).b == 0)
                            goto label_553ff6
                        
                        result = ebp_1[1]
                        
                        if (result_2 u>= result u>> 2)
                            goto label_553ff6
                        
                        if (result != 0)
                            result = *ebp_1
                        
                        *(result + (result_2 << 2)) = arg4
                        result_2 += 1
                    while (result_2 s< edi_3)
                
                result.b = 1
                return result

label_553ff6:
result.b = 0
return result
