// 函数: sub_4ced90
// 地址: 0x4ced90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* esi = arg2
int32_t* i = *esi
float* edi = arg1

for (; i != esi[1]; i = &i[1])
    void* ebx_1 = *i
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x76b981db, *(ebx_1 + 0x2c) - *(ebx_1 + 0x28))
    int32_t edx_2 = edx_1 s>> 7
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0 && *(ebx_1 + 0x67) == 0 && *(ebx_1 + 0x6a) == 0)
        long double x87_r7_1 = fconvert.t(*(ebx_1 + 0xb8))
        long double x87_r6_1 = float.t(1)
        x87_r6_1 - x87_r7_1
        arg1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            int32_t ecx_2
            ecx_2.b = *(ebx_1 + 0x64)
            var_4.b = ecx_2.b
            
            if (sub_515220(arg3, edi, var_4.b, arg4, ebx_1 + 0x48).b == 0)
                arg1.b = 0
                return arg1
            
            int32_t eax_4
            int32_t edx_4
            edx_4:eax_4 = muls.dp.d(0x76b981db, *(ebx_1 + 0x2c) - *(ebx_1 + 0x28))
            int32_t edx_5 = edx_4 s>> 7
            
            if ((*(*arg5 + 0x28))(0, *(ebx_1 + 0x5c), *(ebx_1 + 0x60), *(ebx_1 + 0x58), 
                    (edx_5 u>> 0x1f) + edx_5).b == 0)
                arg1.b = 0
                return arg1
            
            esi = arg2

arg1.b = 1
return arg1
