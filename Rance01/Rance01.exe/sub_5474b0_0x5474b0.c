// 函数: sub_5474b0
// 地址: 0x5474b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ecx = arg2
void* esi

if (ecx[1] != 0)
    esi = *ecx
else
    esi = nullptr

uint32_t i

if (arg3 != 0)
    if (sub_550c30(ecx) s> 1)
        int32_t ebx_2 = 1
        uint32_t eax_6
        
        do
            int32_t ebp_1 = *(esi + (ebx_2 << 2))
            int32_t edi_3 = ebx_2 - 1
            
            if (ebx_2 s>= 1)
                int32_t temp2_1
                
                do
                    int32_t var_4
                    int32_t eax_4
                    int32_t edx_2
                    eax_4, edx_2 = sub_548320(arg1, arg3, ebp_1, *(esi + (edi_3 << 2)), &var_4)
                    
                    if (eax_4.b == 0)
                        return sub_53d1c0(eax_4, edx_2, arg1, 0x7500a0)
                    
                    if (var_4 s<= 0)
                        break
                    
                    temp2_1 = edi_3
                    edi_3 -= 1
                    *(esi + (edi_3 << 2) + 8) = *(esi + (edi_3 << 2) + 4)
                while (temp2_1 - 1 s>= 0)
                ecx = arg2
            
            *(esi + (edi_3 << 2) + 4) = ebp_1
            ebx_2 += 1
            eax_6 = sub_550c30(ecx)
        while (ebx_2 s< eax_6)
        
        eax_6.b = 1
        return eax_6
else if (sub_550c30(ecx) s> 1)
    int32_t edx_1 = 0
    int32_t* ebx_1 = esi + 4
    
    do
        int32_t edi_1 = *ebx_1
        int32_t eax_1 = edx_1
        
        if (edx_1 s>= 0)
            int32_t temp1_1
            
            do
                int32_t ecx_1 = *(esi + (eax_1 << 2))
                
                if (ecx_1 s<= edi_1)
                    break
                
                temp1_1 = eax_1
                eax_1 -= 1
                *(esi + (eax_1 << 2) + 8) = ecx_1
            while (temp1_1 - 1 s>= 0)
            ecx = arg2
        
        *(esi + (eax_1 << 2) + 4) = edi_1
        ebx_1 = &ebx_1[1]
        edx_1 += 1
        i = sub_550c30(ecx)
    while (edx_1 + 1 s< i)

i.b = 1
return i
