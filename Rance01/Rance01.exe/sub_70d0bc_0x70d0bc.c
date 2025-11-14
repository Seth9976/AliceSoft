// 函数: sub_70d0bc
// 地址: 0x70d0bc
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r0

if (data_798200 != 0)
    int32_t eax_2 = arg1 & 0x7f80
    bool cond:0_1 = eax_2 != 0x1f80
    
    if (eax_2 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        eax_2.w = temp0_1
        eax_2.w &= 0x7f
        cond:0_1 = eax_2.w != 0x7f
    
    if (not(cond:0_1))
        return __CIasin_pentium4(x87_r0) __tailcall

return sub_70f6ce(arg2, x87_r0) __tailcall
