// 函数: sub_4dc050
// 地址: 0x4dc050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x24)
int32_t esi = *(arg1 + 0x28)

if (ebx != esi)
    long double x87_r7_1 = fconvert.t(*(arg1 + 4))
    float.t(0) - x87_r7_1
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        long double temp2 = fconvert.t(arg2)
        x87_r7_1 - temp2
        
        if ((((x87_r7_1 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
            arg2 = fconvert.s(x87_r7_1)
        
        *(arg1 + 0x44) = mods.dp.d(sx.q(sub_70c710(fconvert.t(arg2) / fconvert.t(*(arg1 + 4)))), 
            (esi - ebx) s>> 2)
        return 

*(arg1 + 0x44) = 0xffffffff
