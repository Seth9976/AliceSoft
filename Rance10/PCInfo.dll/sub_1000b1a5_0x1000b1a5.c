// 函数: sub_1000b1a5
// 地址: 0x1000b1a5
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int16_t x87control
int16_t x87status
int16_t x87tag
uint864_t temp0
temp0, x87control, x87tag, x87status = __fnsave_memmem108(arg1, arg3, arg2)
double var_78
__powhlp(fconvert.d(arg5), fconvert.d(arg4), &var_78)
__frstor_memmem108(temp0)
return fconvert.t(var_78)
