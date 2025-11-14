// 函数: sub_702150
// 地址: 0x702150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sx.d(*arg5)
int32_t ebx = sx.d(*arg4)
*arg4 = eax.w
int32_t eax_1 = eax - ebx
int32_t ecx = eax_1
int32_t edx = eax_1

if (eax s< ebx)
    eax_1 = neg.d(eax_1)
    ecx = neg.d(ecx)
    edx -= 1

int32_t ebx_1 = eax_1

if (eax_1 s>= 0x100)
    eax_1 = ecx s>> 8

int32_t edi_1 = *((eax_1 << 2) + &data_78da20)
int32_t ecx_2 = edi_1

if (ebx_1 s>= 0x100)
    ecx_2 = edi_1 + 8

int64_t st7 = *arg1
char x87_r4[0x8]
uint64_t x87_r7
int32_t result = sub_701df0(arg1, x87_r4, x87_r7, zx.d(*(arg2 + (ecx_2 << 1) + 0x408)), 
    *(arg2 + (ecx_2 << 2) + 8))

if (result == 0)
    result = sub_701df0(arg1, x87_r4, x87_r7, edx, ecx_2)
    
    if (result == 0)
        int32_t i = 0
        int32_t var_18_1 = 1
        
        while (true)
            int32_t eax_7 = sx.d(arg5[*((var_18_1 << 2) + &data_78d920)])
            
            if (eax_7 != 0)
                for (; i s> 0xf; i -= 0x10)
                    result =
                        sub_701df0(arg1, x87_r4, x87_r7, zx.d(*(arg3 + 0x5e8)), *(arg3 + 0x3c8))
                    
                    if (result != 0)
                        goto label_7022c7
                
                int32_t eax_9 = eax_7
                int32_t ecx_5 = eax_9
                int32_t edx_2 = eax_9
                
                if (eax_9 s< 0)
                    eax_9 = neg.d(eax_9)
                    ecx_5 = neg.d(ecx_5)
                    edx_2 -= 1
                
                int32_t ebx_6 = eax_9
                
                if (eax_9 s>= 0x100)
                    eax_9 = ecx_5 s>> 8
                
                int32_t edi_5 = *((eax_9 << 2) + &data_78da20)
                int32_t ecx_7 = edi_5
                
                if (ebx_6 s>= 0x100)
                    ecx_7 = edi_5 + 8
                
                int32_t ebx_9 = (i << 4) + ecx_7
                result = sub_701df0(arg1, x87_r4, x87_r7, zx.d(*(arg3 + (ebx_9 << 1) + 0x408)), 
                    *(arg3 + (ebx_9 << 2) + 8))
                
                if (result != 0)
                    break
                
                result = sub_701df0(arg1, x87_r4, x87_r7, edx_2, ecx_7)
                
                if (result != 0)
                    break
                
                i = 0
            else
                i += 1
            
            var_18_1 += 1
            
            if (var_18_1 s>= 0x40)
                if (i == 0)
                    result = 0
                else
                    result = sub_701df0(arg1, x87_r4, x87_r7, zx.d(*(arg3 + 0x408)), *(arg3 + 8))
                    
                    if (result == 0)
                        result = 0
                
                break

label_7022c7:
*arg1 = st7
return result
