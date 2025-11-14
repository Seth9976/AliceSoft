// 函数: sub_53ea60
// 地址: 0x53ea60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_7 = *(arg1 + 0x2b0)
void** edx = *(eax_7 - 0xc)
int32_t esi = *(eax_7 - 8)
int32_t edi = *(eax_7 - 4)
*(arg1 + 0x2b0) = eax_7 - 0xc
int32_t eax_3 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (edx u< eax_3)
    eax_3 = *(arg1 + 0x1e4)
    edx = *(eax_3 + (edx << 2))
    
    if (edx != 0)
        void* eax_5 = edx[1]
        
        if (esi u< eax_5 u>> 2)
            if (eax_5 != 0)
                edx = *edx
            else
                edx = nullptr
            
            eax_5 = &edx[esi]
            
            if (eax_5 != 0)
                *eax_5 -= edi
                int32_t result = *eax_5
                **(arg1 + 0x2b0) = result
                *(arg1 + 0x2b0) += 4
                return result
        
        return sub_53d1c0(eax_5, edx, arg1, 0x74d52c)

return sub_53d1c0(eax_3, edx, arg1, 0x74d504)
