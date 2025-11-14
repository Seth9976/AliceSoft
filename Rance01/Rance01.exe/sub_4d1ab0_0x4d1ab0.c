// 函数: sub_4d1ab0
// 地址: 0x4d1ab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = (*(arg1 + 0x10) - *(arg1 + 0xc)) s/ 0x9c
int32_t ebx = 0

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        void* edx_3 = *(arg1 + 0xc)
        int32_t ebp_1 = *(edi_1 + edx_3 + 0x20)
        
        if (ebp_1 != 0xffffffff)
            int32_t ecx_1 = 0
            
            if (result s> 0)
                int32_t* edx_4 = edx_3 + 0x1c
                
                do
                    if (*edx_4 == ebp_1)
                        *(edi_1 + *(arg1 + 0xc) + 0x24) = ecx_1
                        break
                    
                    ecx_1 += 1
                    edx_4 = &edx_4[0x27]
                while (ecx_1 s< result)
        
        ebx += 1
        result = (*(arg1 + 0x10) - *(arg1 + 0xc)) s/ 0x9c
        edi_1 += 0x9c
    while (ebx s< result)

return result
