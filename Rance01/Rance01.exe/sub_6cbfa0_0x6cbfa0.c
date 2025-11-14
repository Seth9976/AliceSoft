// 函数: sub_6cbfa0
// 地址: 0x6cbfa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = 0
int32_t ebp = 0
int32_t result_1 = 0
int32_t result

while (true)
    if (ebp s>= *(arg1 + 0x84))
        result = result_1
        
        if (*(arg1 + 0x4de0) == 0)
            result = sub_6fc400(arg1 + 0x37e8, arg1)
            
            if (result == 0 && *(arg1 + 0x90) * 2 s> 0)
                void* esi_1 = arg1 + 0x1d24
                int32_t i_1 = 0
                void* ebx_1 = arg1 + 0x364
                int32_t ebp_1 = 0
                int32_t i
                
                do
                    *(arg1 + (zx.d(*(ebp_1 + arg1 + 0x3745)) << 2) + 0x3704) = esi_1
                    *(arg1 + (zx.d(*(ebp_1 + arg1 + 0x3751)) << 2) + 0x36f4) = ebx_1
                    result = sub_6cb740(*(ebp_1 + arg1 + 0x373c), *(ebp_1 + arg1 + 0x3740), 
                        *(arg1 + (zx.d(*(ebp_1 + arg1 + 0x3745)) << 2) + 0x3704))
                    
                    if (result != 0)
                        break
                    
                    result = sub_6cb740(*(ebp_1 + arg1 + 0x3748), *(ebp_1 + arg1 + 0x374c), 
                        *(arg1 + (zx.d(*(ebp_1 + arg1 + 0x3751)) << 2) + 0x36f4))
                    
                    if (result != 0)
                        break
                    
                    ebp_1 += 0x18
                    ebx_1 += 0xce0
                    esi_1 += 0xce0
                    i = i_1 + 2
                    i_1 = i
                while (i s< *(arg1 + 0x90) * 2)
        
        break
    
    int32_t edi_1 = ebp * 2
    int16_t* eax_1 = *(esi + arg1 + 0x9c)
    *(arg1 + (ebp << 2) + 0x36e4) = eax_1
    sub_6cb680(*(arg1 + 0x70), *(arg1 + (ebp << 3) + 0x371c), eax_1)
    result =
        sub_6fbfa0(arg1 + 0x37e8, 0, *(arg1 + (ebp << 3) + 0x3720), *(arg1 + (edi_1 << 1) + 0x36e4))
    result_1 = result
    
    if (result != 0)
        break
    
    int32_t eax_4 = *(arg1 + 0x14)
    
    if (eax_4 != 0)
        if (eax_4 != 1)
            return 0xfffffff8
        
        sub_6cf9e0(*(arg1 + (edi_1 << 1) + 0x36e4))
    else
        sub_6ce5d0(*(arg1 + (edi_1 << 1) + 0x36e4))
    
    esi += 0xb4
    ebp += 1

return result
