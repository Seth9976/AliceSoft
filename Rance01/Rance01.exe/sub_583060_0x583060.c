// 函数: sub_583060
// 地址: 0x583060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(0.5f)
long double temp2 = fconvert.t(arg5)
x87_r7 - temp2
int32_t* ecx = **(arg1 + 4)
long double x87_r7_1

if ((((x87_r7 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp2) ? 1 : 0) << 0xa
        | (x87_r7 == temp2 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    (*(*ecx + 0x10))(arg2, 0, 0, arg3, 0, 0, *(arg1 + 0x10), *(arg1 + 0x14))
    x87_r7_1 = float.t(1) - fconvert.t(arg5)
else
    (*(*ecx + 0x10))(arg2, 0, 0, arg4, 0, 0, *(arg1 + 0x10), *(arg1 + 0x14))
    x87_r7_1 = fconvert.t(arg5)

int32_t eax_8 = sub_70c710(fconvert.t(fconvert.s(x87_r7_1 + x87_r7_1)) * fconvert.t(255.0))
arg5 = eax_8

if (eax_8 s< 0)
    arg5 = 0f
else if (eax_8 s> 0xff)
    arg5 = 3.57331108e-43f

int32_t eax_10 = (*(**(arg1 + 0xc) + 0x10))()
int32_t eax_12
int32_t edx_7
edx_7:eax_12 = sx.q(sub_6b5a79())
int32_t eax_14 = (*(**(arg1 + 0xc) + 0x14))()
int32_t eax_16
int32_t edx_10
edx_10:eax_16 = sx.q(sub_6b5a79())
int32_t eax_18 = (*(**(arg1 + 0xc) + 0x14))()
int32_t eax_20 = (*(**(arg1 + 0xc) + 0x10))()
(*(***(arg1 + 4) + 0x38))(arg2, 0, 0, *(arg1 + 0x10), *(arg1 + 0x14), *(arg1 + 0xc), 0, 0, eax_20, 
    eax_18, mods.dp.d(edx_7:eax_12, eax_10), mods.dp.d(edx_10:eax_16, eax_14), arg5)
int32_t result
result.b = 1
return result
