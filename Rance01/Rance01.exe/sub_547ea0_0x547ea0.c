// 函数: sub_547ea0
// 地址: 0x547ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t result

if (arg2[0x10].b != 0)
    int32_t ecx = arg2[1]
    result = ecx u>> 2
    uint32_t result_1 = result
    
    if (result s> 1)
        int32_t edi_1
        
        if (ecx != 0)
            edi_1 = *arg2
        else
            edi_1 = 0
        
        int32_t ebx_1 = 1
        
        if (result s> 1)
            do
                int32_t ebp_1 = *(edi_1 + (ebx_1 << 2))
                int32_t esi_1 = ebx_1 - 1
                
                if (ebx_1 s>= 1)
                    int32_t temp1_1
                    
                    do
                        int32_t var_8
                        int32_t eax_2
                        int32_t edx
                        eax_2, edx = sub_5481e0(arg3, arg4, ebp_1, *(edi_1 + (esi_1 << 2)), &var_8)
                        
                        if (eax_2.b == 0)
                            return sub_53d1c0(eax_2, edx, arg3, 0x750168)
                        
                        if (var_8 s<= 0)
                            break
                        
                        temp1_1 = esi_1
                        esi_1 -= 1
                        *(edi_1 + (esi_1 << 2) + 8) = *(edi_1 + (esi_1 << 2) + 4)
                    while (temp1_1 - 1 s>= 0)
                    result = result_1
                
                ebx_1 += 1
                *(edi_1 + (esi_1 << 2) + 4) = ebp_1
            while (ebx_1 s< result)

result.b = 1
return result
