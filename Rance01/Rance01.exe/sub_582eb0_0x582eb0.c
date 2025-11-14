// 函数: sub_582eb0
// 地址: 0x582eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = *(arg1 + 0xc)
float var_8 = 3.5592981e-43f
int32_t eax_1 = sub_70c710(float.t(ebp + 0xfe) * (float.t(1) - fconvert.t(arg5)))
int32_t esi_1 = eax_1 - 0xfe

if (eax_1 - 0xfe s>= 0)
    arg5 = 3.5592981e-43f
else
    arg5 = esi_1 + 0xfe
    var_8 = esi_1 + 0xfe
    esi_1 = 0

if (esi_1 i+ var_8 s> ebp)
    var_8 = ebp - esi_1

if (var_8 s< 0)
    var_8 = 0f

int32_t edi = esi_1 i+ var_8
int32_t* ebp_3

if (edi s>= ebp)
    ebp_3 = arg3
else
    ebp_3 = arg3
    (*(***(arg1 + 4) + 0x10))(arg2, edi, 0, ebp_3, edi, 0, ebp - esi_1 i- var_8, *(arg1 + 0x10))

sub_57e550(arg2, esi_1, *(arg1 + 4), arg2, arg4, esi_1, ebp_3, esi_1, var_8, *(arg1 + 0x10), arg5.b)
int32_t result = *(arg1 + 0xc)

if (edi s< result)
    (*(***(arg1 + 4) + 0x10))(arg2, edi, 0, ebp_3, edi, 0, result - edi, *(arg1 + 0x10))

result.b = 1
return result
