// 函数: sub_70dc05
// 地址: 0x70dc05
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t x87control
int16_t x87status
int16_t x87tag
uint864_t temp0
temp0, x87control, x87tag, x87status = __fnsave_memmem108(arg2, arg4, arg3)
double var_78
int32_t eax
char ecx
int80_t st0
st0, eax, ecx = sub_70f02a(fconvert.d(arg6), fconvert.d(arg5), &var_78)
__frstor_memmem108(temp0)
long double result = fconvert.t(var_78)

if (eax == 0)
    return result

*(arg1 - 0x90) = 1
return result
