// 函数: sub_4f7a50
// 地址: 0x4f7a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1
void* ebx = edx + 0x6c
void* var_7c = ebx

while (ebx != arg2)
    void var_78
    __builtin_memcpy(&var_78, ebx, 0x6c)
    float var_10
    long double x87_r7_1 = fconvert.t(var_10)
    long double x87_r6_1 = fconvert.t(*(edx + 0x68))
    x87_r6_1 - x87_r7_1
    void* eax
    eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    void* edi_2
    
    if ((eax:1.b & 0x41) != 0)
        void* edx_1 = ebx
        
        while (true)
            long double x87_r6_2 = fconvert.t(*(edx_1 - 4))
            edx_1 -= 0x6c
            x87_r6_2 - x87_r7_1
            edi_2 = ebx
            eax.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax:1.b & 0x41) != 0)
                break
            
            __builtin_memcpy(edi_2, edx_1, 0x6c)
            ebx = edx_1
        
        edx = arg1
        ebx = var_7c
    else
        eax = ebx
        
        if (edx != ebx)
            do
                eax -= 0x6c
                __builtin_memcpy(eax + 0x6c, eax, 0x6c)
            while (eax != edx)
        
        edi_2 = edx
    
    ebx += 0x6c
    __builtin_memcpy(edi_2, &var_78, 0x6c)
    var_7c = ebx
