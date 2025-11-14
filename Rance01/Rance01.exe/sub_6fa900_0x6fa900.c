// 函数: sub_6fa900
// 地址: 0x6fa900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx
uint32_t var_10 = ebx
int32_t result = 0
char* edx = *(arg1 + 0x10)

while (true)
    if (edx u< *(arg1 + 0x18))
    label_6fa92e:
        ebx.b = 0
        int32_t edx_1 = *(arg1 + 0x24)
        
        if (edx_1 s> 0)
            int32_t ecx_1 = *(arg1 + 0x1c)
            char* esi_2 = *(arg1 + 0x10)
            
            do
                edx_1 -= 1
                ecx_1 += 1
                char* edi_1 = esi_2
                *(arg1 + 0x24) = edx_1
                esi_2 = &esi_2[1]
                *(arg1 + 0x1c) = ecx_1
                *(arg1 + 0x10) = esi_2
                
                if (zx.d(*edi_1) == 0xff)
                    ebx.b = 1
                
                if (edx_1 s<= 0)
                    break
            while (ebx.b == 0)
        
        if (edx_1 s<= 0)
            if (*(arg1 + 0x3c) == 0)
                break
            
            result = sub_6fa810(arg1)
            
            if (result == 0)
                if (ebx.b != 0)
                    goto label_6fa967
                
                edx = *(arg1 + 0x10)
                continue
        else
        label_6fa967:
            edx = *(arg1 + 0x10)
            ebx = zx.d(*edx)
            
            if (ebx == 0xff)
                continue
            else if (ebx == 0)
                *(arg1 + 0x1c) += 1
                edx = &edx[1]
                *(arg1 + 0x10) = edx
                *(arg1 + 0x24) -= 1
                continue
    else
        if (*(arg1 + 0x3c) == 0)
            return 0xfffffffb
        
        result = sub_6fa810(arg1)
        
        if (result == 0)
            goto label_6fa92e
    
    return result

return 0xfffffffb
