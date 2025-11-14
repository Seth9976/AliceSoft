// 函数: sub_70cce0
// 地址: 0x70cce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4

if (data_798200 != 0)
    var_4 = arg1
    int32_t eax_2 = var_4 & 0x7f80
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
        return __CIpow_pentium4(arg3, arg4) __tailcall

double var_c_1 = fconvert.d(arg3)
int32_t result
int16_t x87tag
int80_t st0_1
st0_1, result = sub_70cd3d(var_c_1:4.d, arg2, x87tag, arg3, fconvert.d(arg4), var_c_1, var_4)
return result
