// 函数: sub_54fbe0
// 地址: 0x54fbe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg1[9]
int32_t esi_1 = esi - 1
int32_t result

if (esi - 1 s>= 0)
    int32_t* edi_1 = arg1
    int32_t temp2_1
    
    do
        int32_t edx_1 = arg1[1]
        result = edx_1 u>> 2
        
        if (esi_1 u< result)
            int32_t ecx_1
            
            if (edx_1 != 0)
                ecx_1 = *arg1
            else
                ecx_1 = 0
            
            edi_1 = *(ecx_1 + (esi_1 << 2))
        
        switch (*(arg1[8] + (esi_1 << 2)) - 0x12)
            case 0, 1, 2, 3, 4, 5, 6, 7, 0xd, 0xe, 0x21, 0x22
                if (edi_1 != 0xffffffff)
                    if (esi_1 u< result)
                        if (edx_1 != 0)
                            result = *arg1
                        else
                            result = 0
                        
                        *(result + (esi_1 << 2)) = 0xffffffff
                    
                    void* ecx_4 = arg1[5]
                    
                    if (edi_1 s>= 0 && edi_1 s< (*(ecx_4 + 0xc) - *(ecx_4 + 8)) s>> 2)
                        int32_t eax_2 = *(ecx_4 + 8)
                        
                        if (*(eax_2 + (edi_1 << 2)) != 0)
                            result = *(eax_2 + (edi_1 << 2))
                            
                            if (*(result + 0x10) != 1)
                                *(result + 0x10) -= 1
                            else
                                sub_552880(ecx_4, edi_1)
        
        temp2_1 = esi_1
        esi_1 -= 1
    while (temp2_1 - 1 s>= 0)

result.b = 1
return result
