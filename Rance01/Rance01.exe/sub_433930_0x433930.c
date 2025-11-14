// 函数: sub_433930
// 地址: 0x433930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_10 = *arg1
int32_t* ebp = arg3
int32_t esi = arg2

if (eax_10 == arg1[1] || esi s< *(eax_10 + 8))
    return 0

int32_t edx
float var_4 = fconvert.s(sub_5ee080(esi, edx, arg1))
arg3 = nullptr
int32_t* eax_2 = &arg2

if (esi s<= 0)
    eax_2 = &arg3

int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x3e0f83e1, *eax_2)
int32_t edx_2 = edx_1 s>> 3
arg3 = nullptr
int32_t* ebx = &arg2

if (esi s<= 0)
    ebx = &arg3

int32_t edi = *ebp
int32_t esi_3 = (ebp[1] - edi) s>> 2
float var_8 = fconvert.s(fconvert.t(*(edi + (modu.dp.d(0:((edx_2 u>> 0x1f) + edx_2), esi_3) << 2))))
arg2 = mods.dp.d(sx.q(*ebx), 0x21)
arg2 = fconvert.s(float.t(1) - float.t(arg2) / fconvert.t(33.0))
long double x87_r6_1 = fconvert.t(var_8)
int32_t ecx_3
arg2 = fconvert.s(x87_r6_1
    + (fconvert.t(*(edi + (modu.dp.d(0:(ecx_3 + 1), esi_3) << 2))) - x87_r6_1) * fconvert.t(arg2)
    - fconvert.t(0.5))
return sub_70c710(fconvert.t(arg2) * fconvert.t(var_4))
