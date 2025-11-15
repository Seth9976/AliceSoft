// 函数: sub_1000a8d0
// 地址: 0x1000a8d0
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (data_1001727c != 0)
    int32_t eax_2 = arg1 & 0x7f80
    bool cond:0_1 = eax_2 != 0x1f80
    
    if (eax_2 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        int48_t var_c
        var_c:4.w = temp0_1
        eax_2.w = var_c:4.w
        eax_2.w &= 0x7f
        cond:0_1 = eax_2.w != 0x7f
    
    if (not(cond:0_1))
        return __CIacos_pentium4(arg3) __tailcall

int32_t ecx
int32_t edx
return sub_1000a928(__checkTOS_withFB((fconvert.d(arg3)).d), arg2, arg3, edx, ecx)
