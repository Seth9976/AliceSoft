// 函数: sub_4dc1f0
// 地址: 0x4dc1f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *arg1
int32_t ecx = *arg2

if (result s>= ecx)
    if (result s> ecx)
        result.b = 0
        return result
    
    int32_t eax = arg1[0x11]
    void* edx_1 = nullptr
    void* edi_1 = nullptr
    
    if (eax s>= 0)
        int32_t ecx_1 = arg1[9]
        
        if (eax s< (arg1[0xa] - ecx_1) s>> 2)
            edx_1 = *(ecx_1 + (eax << 2))
    
    int32_t eax_1 = arg2[0x11]
    
    if (eax_1 s>= 0)
        int32_t ecx_2 = arg2[9]
        
        if (eax_1 s< (arg2[0xa] - ecx_2) s>> 2)
            edi_1 = *(ecx_2 + (eax_1 << 2))
    
    int32_t edx_2
    
    if (edx_1 == 0)
        edx_2 = 0
    else
        edx_2 = *(edx_1 + 0x30)
    
    if (edi_1 == 0)
        result = 0
    else
        result = *(edi_1 + 0x30)
    
    if (edx_2 u>= result)
        if (edx_2 u> result)
            result.b = 0
            return result
        
        result = arg1[2]
        int32_t ecx_3 = arg2[2]
        
        if (result s>= ecx_3)
            if (result s> ecx_3)
                result.b = 0
                return result
            
            long double x87_r7_1 = fconvert.t(arg1[0x14])
            long double x87_r6_1 = fconvert.t(arg2[0x14])
            x87_r6_1 - x87_r7_1
            result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            
            if ((result:1.b & 0x41) != 0)
                result.b = 0
                return result

result.b = 1
return result
