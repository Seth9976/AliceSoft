// 函数: _memset
// 地址: 0x10004370
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void* i = arg3
uint32_t (* edi)[0x4] = arg1

if (i != 0)
    uint32_t eax_1 = zx.d(arg2) * 0x1010101
    
    if (i s<= 0x20)
    label_1000447b:
        
        while ((i & 3) != 0)
            *edi = eax_1.b
            edi += 1
            i -= 1
        
        if ((i & 4) != 0)
            *edi = eax_1
            edi = &(*edi)[1]
            i -= 4
        
        while ((i & 0xfffffff8) != 0)
            *edi = eax_1
            (*edi)[1] = eax_1
            edi = &(*edi)[2]
            i -= 8
    else
        uint32_t xmm0_2[0x4]
        
        if (i s>= 0x80)
            if (test_bit(data_10016bd0, 1))
                int32_t ecx
                int32_t edi_1
                edi_1, ecx = __memfill_u8(edi, eax_1.b, i)
                return arg1
            
            if (not(test_bit(data_10016010, 1)))
                goto label_1000447b
            
            xmm0_2 = _mm_shuffle_epi32(zx.o(eax_1), 0)
            void* ecx_1 = i + edi
            *edi = xmm0_2
            edi = &edi[1] & 0xfffffff0
            i = ecx_1 - edi
            
            if (i s<= 0x80)
                goto label_10004435
            
            do
                *edi = xmm0_2
                edi[1] = xmm0_2
                edi[2] = xmm0_2
                edi[3] = xmm0_2
                edi[4] = xmm0_2
                edi[5] = xmm0_2
                edi[6] = xmm0_2
                edi[7] = xmm0_2
                edi = &edi[8]
                i -= 0x80
            while ((i & 0xffffff00) != 0)
            
            goto label_10004440
        
    label_10004435:
        
        if (not(test_bit(data_10016010, 1)))
            goto label_1000447b
        
        xmm0_2 = _mm_shuffle_epi32(zx.o(eax_1), 0)
    label_10004440:
        
        if (i u< 0x20)
        label_10004465:
            *(i + edi - 0x20) = xmm0_2
            *(i + edi - 0x10) = xmm0_2
            return arg1
        
        do
            *edi = xmm0_2
            edi[1] = xmm0_2
            edi = &edi[2]
            i -= 0x20
        while (i u>= 0x20)
        
        if ((i & 0x1f) != 0)
            goto label_10004465

return arg1
