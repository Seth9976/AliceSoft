// 函数: sub_5f66e0
// 地址: 0x5f66e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = sub_5f7370(*data_797da0, arg2)

if (result != 0)
    void* ecx_2 = sub_5f3540(result, arg5)
    
    if (ecx_2 != 0)
        long double x87_r7 = fconvert.t(*(ecx_2 + 0x24))
        long double x87_r6 = fconvert.t(arg3)
        x87_r6 - x87_r7
        result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
        long double x87_r6_1 = fconvert.t(arg4)
        bool p = unimplemented  {test ah, 0x44}
        
        if (not(p))
            long double x87_r5_1 = fconvert.t(*(ecx_2 + 0x28))
            x87_r6_1 - x87_r5_1
            result.w = (x87_r6_1 < x87_r5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r5_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r5_1 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                result.b = 1
                return result
        
        *(ecx_2 + 0x50) = 1
        *(ecx_2 + 0x24) = fconvert.s(x87_r7)
        result.b = 1
        *(ecx_2 + 0x28) = fconvert.s(x87_r6_1)
        return result

result.b = 0
return result
