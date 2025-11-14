// 函数: sub_4ce490
// 地址: 0x4ce490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg1

for (int32_t* i = *result; i != result[1]; i = &i[1])
    void* edi_1 = *i
    void* ecx_1 = *(edi_1 + 4)
    
    if (ecx_1 != 0)
        long double x87_r7_1 = fconvert.t(*(ecx_1 + 0x54))
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7_1
        result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            void* var_18_1 = ecx_1
            sub_4cd440(edi_1 + 0xf0, fconvert.s(fconvert.t(*(ecx_1 + 0x54))), arg2)
        
        void* ecx_2 = *(edi_1 + 4)
        long double x87_r7_3 = fconvert.t(*(ecx_2 + 0x58))
        long double x87_r6_2 = float.t(0)
        x87_r6_2 - x87_r7_3
        result.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            void* var_18_3 = ecx_2
            sub_4cd440(edi_1 + 0xf4, fconvert.s(fconvert.t(*(ecx_2 + 0x58))), arg2)
    
    result = arg1

return result
