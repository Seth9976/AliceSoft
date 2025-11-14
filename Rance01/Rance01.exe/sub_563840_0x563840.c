// 函数: sub_563840
// 地址: 0x563840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
long double x87_r7 = fconvert.t(*(esi + 0x3c))
long double x87_r6 = fconvert.t(arg4)
x87_r6 - x87_r7
arg1.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}
int32_t ebx

if (p)
    ebx.b = 0
else
    ebx.b = 1

long double x87_r6_1 = fconvert.t(*(esi + 0x40))
long double x87_r5_1 = fconvert.t(arg5)
x87_r5_1 - x87_r6_1
arg1.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
    | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    arg1.b = 0
else
    arg1.b = 1

if (*(esi + 0x34) != arg3 || *(esi + 0x38) != arg2 || ebx.b == 0 || arg1.b == 0)
    bool cond:2_1 = *(esi + 0x44) == 0
    *(esi + 0x3c) = fconvert.s(x87_r5_1)
    *(esi + 0x34) = arg3
    *(esi + 0x38) = arg2
    *(esi + 0x40) = fconvert.s(x87_r6_1)
    
    if (not(cond:2_1))
        void* eax = esi + 0x4c
        
        if (*(esi + 0x60) u>= 0x10)
            eax = *eax
        
        arg1 = sub_5636d0(eax, esi, *(esi + 0x48), *(esi + 0x68))
    
    if (*(esi + 0x6c) != 0)
        return sub_5637b0(esi, *(esi + 0x70), *(esi + 0x74))

return arg1
