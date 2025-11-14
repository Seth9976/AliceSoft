// 函数: sub_540dc0
// 地址: 0x540dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
float* eax = *(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
float var_4 = fconvert.s(fconvert.t(*eax))
int32_t edi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_3 = **(arg1 + 0x2b0)
int32_t edx_2 = (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2

if (eax_3 u< edx_2)
    edx_2 = *(*(arg1 + 0x1e4) + (eax_3 << 2))
    
    if (edx_2 != 0)
        int32_t esi = *(edx_2 + 4)
        uint32_t eax_5 = esi u>> 2
        
        if (edi u>= eax_5)
            sub_53d1c0(eax_5, edx_2, arg1, 0x74df58)
            return 
        
        int32_t eax_6
        
        if (esi != 0)
            eax_6 = *edx_2
        else
            eax_6 = 0
        
        long double x87_r7_1 = fconvert.t(var_4)
        long double x87_r5 = float.t(0)
        x87_r5 - x87_r7_1
        float eax_7
        eax_7.w = (x87_r5 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r5 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
        long double x87_r7_2 = x87_r5
        bool p = unimplemented  {test ah, 0x44}
        
        if (p)
            x87_r7_2 = fconvert.t(*(eax_6 + (edi << 2))) / x87_r7_1
        
        long double x87_r7_4 = fconvert.t(fconvert.s(x87_r7_2))
        int32_t edx_4
        
        if (esi != 0)
            edx_4 = *edx_2
        else
            edx_4 = 0
        
        *(edx_4 + (edi << 2)) = fconvert.s(x87_r7_4)
        **(arg1 + 0x2b0) = fconvert.s(x87_r7_4)
        *(arg1 + 0x2b0) += 4
        float eax_9
        eax_9.b = 1
        return 

sub_53d1c0(eax_3, edx_2, arg1, 0x74df30)
