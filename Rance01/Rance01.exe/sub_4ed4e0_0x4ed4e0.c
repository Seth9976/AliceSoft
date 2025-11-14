// 函数: sub_4ed4e0
// 地址: 0x4ed4e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_2 = (arg3 - arg1) s>> 2
long double x87_r0
long double x87_r1
long double x87_r2
long double x87_r3
long double x87_r4
long double x87_r5

if (eax_2 s<= 0x28)
    int32_t __saved_ebx = arg4
    return sub_4ed6c0(arg2, arg1, x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, arg3)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 + 1)
int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
int32_t ebx = eax_6 << 2
int32_t var_1c = arg4
int32_t* esi = &arg1[eax_6]
sub_4ed6c0(esi, arg1, x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, &arg1[eax_6 * 2])
int32_t var_24 = arg4
long double x87_r6
long double x87_r7
sub_4ed6c0(arg2, arg2 - ebx, x87_r6, x87_r7, x87_r0, x87_r1, x87_r2, x87_r3, &arg2[eax_6])
int32_t var_2c = arg4
int32_t* esi_3 = arg3 - ebx
sub_4ed6c0(esi_3, arg3 - (eax_6 << 3), x87_r4, x87_r5, x87_r6, x87_r7, x87_r0, x87_r1, arg3)
int32_t var_34 = arg4
return sub_4ed6c0(arg2, esi, x87_r2, x87_r3, x87_r4, x87_r5, x87_r6, x87_r7, esi_3)
