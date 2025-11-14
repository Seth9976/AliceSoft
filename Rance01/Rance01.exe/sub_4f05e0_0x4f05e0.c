// 函数: sub_4f05e0
// 地址: 0x4f05e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *arg1
float var_8 = fconvert.s(fconvert.t(3.40282347e+38f))

for (void** i = *esi; i != esi; i = *i)
    void* edx_1 = i[2]
    
    if (*(edx_1 + 0x64) != 0)
        long double x87_r7_3 =
            fconvert.t(fconvert.s(fconvert.t(*(edx_1 + 0x60)) + fconvert.t(*(edx_1 + 0x5c))))
        long double x87_r6_1 = fconvert.t(var_8)
        x87_r6_1 - x87_r7_3
        void* eax
        eax.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax:1.b & 0x41) == 0)
            var_8 = fconvert.s(x87_r7_3)
