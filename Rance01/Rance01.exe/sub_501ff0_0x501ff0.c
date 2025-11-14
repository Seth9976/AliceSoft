// 函数: sub_501ff0
// 地址: 0x501ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(arg1 + 0x28)
int32_t edi = *(arg1 + 0x2c)

if (esi != edi)
    long double x87_r7_1 = float.t(0)
    long double x87_r6_1 = float.t(1)
    
    while (true)
        int32_t edx_1 = 0
        float* ecx_1 = esi + 0x24
        
        while (true)
            long double temp1_1 = fconvert.t(ecx_1[-1])
            x87_r7_1 - temp1_1
            arg1.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((arg1:1.b & 1) != 0)
                long double temp2_1 = fconvert.t(ecx_1[-1])
                x87_r6_1 - temp2_1
                arg1.w = (x87_r6_1 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    arg1.b = 1
                    return 
                
                long double temp3_1 = fconvert.t(*ecx_1)
                x87_r7_1 - temp3_1
                arg1.w = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3000
                
                if ((arg1:1.b & 1) != 0)
                    x87_r7_1 = x87_r7_1
                    long double temp4_1 = fconvert.t(*ecx_1)
                    x87_r6_1 - temp4_1
                    arg1.w = (x87_r6_1 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp4_1 ? 1 : 0) << 0xe | 0x3000
                    bool p_2 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_2))
                        arg1.b = 1
                        return 
                    
                    edx_1 += 1
                    ecx_1 = &ecx_1[0xf]
                    
                    if (edx_1 s>= 3)
                        break
                    
                    continue
            
            arg1.b = 1
            return 
        
        esi += 0xb4
        
        if (esi == edi)
            break

arg1.b = 0
