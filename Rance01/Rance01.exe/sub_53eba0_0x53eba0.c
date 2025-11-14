// 函数: sub_53eba0
// 地址: 0x53eba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_10 = *(arg1 + 0x2b0)
void** edx = *(eax_10 - 0xc)
int32_t esi = *(eax_10 - 8)
int32_t edi = *(eax_10 - 4)
*(arg1 + 0x2b0) = eax_10 - 0xc
int32_t eax_3 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (edx u< eax_3)
    eax_3 = *(arg1 + 0x1e4)
    edx = *(eax_3 + (edx << 2))
    
    if (edx != 0)
        int32_t eax_5 = edx[1]
        
        if (esi u< eax_5 u>> 2)
            if (eax_5 != 0)
                edx = *edx
            else
                edx = nullptr
            
            void* esi_1 = &edx[esi]
            
            if (esi_1 != 0)
                if (edi != 0)
                    *esi_1 = divs.dp.d(sx.q(*esi_1), edi)
                else
                    *esi_1 = edi
                
                int32_t result = *esi_1
                **(arg1 + 0x2b0) = result
                *(arg1 + 0x2b0) += 4
                return result
        
        return sub_53d1c0(eax_5, edx, arg1, 0x74d5bc)

return sub_53d1c0(eax_3, edx, arg1, 0x74d598)
