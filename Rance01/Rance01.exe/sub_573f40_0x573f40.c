// 函数: sub_573f40
// 地址: 0x573f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 =
    sub_6b4ef0(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1[3])))))
int32_t eax = sub_70c710(fconvert.t(fconvert.s(st0)))
int32_t ecx = arg1[1]
int32_t ebx = eax

if (eax s>= ecx)
    ebx = ecx

int32_t eax_1 = sub_70c710(fconvert.t(fconvert.s(sub_6b4ef0(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1[4]))))))))
int32_t ecx_1 = arg1[1]

if (eax_1 s>= ecx_1)
    eax_1 = ecx_1

int32_t var_44_4

if (ebx s<= eax_1)
    var_44_4 = eax_1
    ebx = eax_1
else
    var_44_4 = ebx

double var_88_2

if (*arg1 s< 0x100)
    var_88_2:4.d = arg1
    *arg2 = sub_573920(arg4) + (ebx << 1)
    int32_t eax_3
    eax_3.b = 1
    return eax_3

if (*(arg3 + 0x114) == 0xffffffff)
    var_88_2:4.d = arg3 + 0x134
    var_88_2.d = arg3 + 0x114
    
    if (sub_571ef0(var_88_2) == 0)
        var_88_2:4.d = arg1
        *arg2 = sub_573920(arg4) + (ebx << 1)
        int32_t eax_6
        eax_6.b = 0
        return eax_6

var_88_2:4.d = arg2
var_88_2.d = sub_574090(arg4)

if (sub_5720a0(arg3 + 0x114, *(arg3 + 0x40) * arg1[1], *arg1 - 0x100, arg3 + 0x114, var_88_2) == 0)
    var_88_2:4.d = arg1
    *arg2 = sub_573920(arg4) + (var_44_4 << 1)
    int32_t eax_11
    eax_11.b = 0
    return eax_11

int32_t ecx_11 = *(arg3 + 0x40)
*arg2 = divs.dp.d(sx.q((ecx_11 + *arg2 - 1) & not.d(ecx_11 - 1)), ecx_11) + (var_44_4 << 1)
int32_t eax_16
eax_16.b = 1
return eax_16
