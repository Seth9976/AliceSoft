// 函数: _acos
// 地址: 0x1000a890
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

if (data_1001727c != 0)
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
        return sub_1000ad68(arg3) __tailcall

void* edx_1 = &arg3
int32_t eax_4
int32_t ecx
int32_t ecx_2
long double st0
st0, eax_4, ecx_2 = __fload_withFB(ecx, edx_1)
return sub_1000a928(eax_4, arg2, st0, edx_1, ecx_2) __tailcall
