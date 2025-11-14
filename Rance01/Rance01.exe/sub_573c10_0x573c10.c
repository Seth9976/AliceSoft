// 函数: sub_573c10
// 地址: 0x573c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*arg2 == 0)
    return 0

int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 =
    sub_6b4ef0(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0xc))))))
int32_t eax_1 = sub_70c710(fconvert.t(fconvert.s(st0)))
int32_t ecx = *(arg1 + 4)
int32_t edi = eax_1

if (eax_1 s>= ecx)
    edi = ecx

int32_t eax_2 = sub_70c710(fconvert.t(fconvert.s(sub_6b4ef0(mxcsr, x87control_1, 
    fconvert.d(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x10)))))))))
int32_t esi_1 = *(arg1 + 4)

if (eax_2 s>= esi_1)
    eax_2 = esi_1

if (edi s> eax_2)
    eax_2 = edi

double var_88_1
var_88_1:4.d = 0x20
var_88_1.d = arg4 + (eax_2 << 1)
return (*(**arg2 + 8))(arg3 + (eax_2 << 1), var_88_1)
