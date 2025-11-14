// 函数: sub_4ce510
// 地址: 0x4ce510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = *arg1
int32_t edi = arg1[1]

if (esi != edi)
    long double x87_r7_1 = float.t(1)
    
    do
        void* ecx_1 = *esi
        int32_t eax
        int32_t edx_3
        edx_3:eax = muls.dp.d(0x76b981db, *(ecx_1 + 0x2c) - *(ecx_1 + 0x28))
        int32_t edx_4 = edx_3 s>> 7
        
        if ((edx_4 u>> 0x1f) + edx_4 s> 0 && *(ecx_1 + 0x67) == 0 && *(ecx_1 + 0x6a) == 0)
            long double x87_r6_1 = fconvert.t(*(ecx_1 + 0xb8))
            x87_r7_1 - x87_r6_1
            arg1.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                arg1.b = 1
                return 
        
        esi = &esi[1]
    while (esi != edi)

arg1.b = 0
