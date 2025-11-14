// 函数: sub_6bf095
// 地址: 0x6bf095
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
double arg_14
int32_t eax_2 = sub_6becfa(arg1, &arg_14, arg3.b)
double arg_c

if (eax_2 == 0)
    int32_t var_50
    int32_t var_50_1 = var_50 & 0xfffffffe
    void var_90
    sub_6be9fb(&var_90, &arg3, arg1.b, arg2, &arg_c, &arg_14, eax_2)
    noreturn

int32_t eax_3 = sub_6bef0b(arg1.b)
long double result

if (data_78d1e0 != 0 || eax_3 == 0)
    sub_6beede(eax_3)
    int16_t x87control
    sub_6bf25a(x87control, arg3.w, 0xffff)
    result = fconvert.t(arg_14)
else
    int32_t var_9c
    var_9c.q = fconvert.d(fconvert.t(arg_14))
    int32_t var_a4
    var_a4.q = fconvert.d(float.t(0))
    int32_t var_ac
    var_ac.q = fconvert.d(fconvert.t(arg_c))
    int32_t var_a8
    int32_t var_a0
    result = sub_6bef3f(eax_3, arg2, var_ac, var_a8, var_a4, var_a0, var_9c, arg3.w)

sub_6b4885(eax_1 ^ &__saved_ebp)
return result
