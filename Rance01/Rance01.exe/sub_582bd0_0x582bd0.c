// 函数: sub_582bd0
// 地址: 0x582bd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t ebp = *(arg1 + 0xc)
int32_t ebx = 0xfe
int32_t eax_1 = sub_70c710(float.t(ebp + 0xfe) * fconvert.t(arg5))
int32_t esi_1 = eax_1 - 0xfe

if (eax_1 - 0xfe s>= 0)
    arg5 = 1.40129846e-45f
else
    ebx = esi_1 + 0xfe
    arg5 = 1 - esi_1
    esi_1 = 0

if (esi_1 + ebx s> ebp)
    ebx = ebp - esi_1

(*(***(arg1 + 4) + 0x10))(arg2, 0, 0, arg3, 0, 0, esi_1, *(arg1 + 0x10))
void* ecx_3 = *(arg1 + 4)
sub_57e690(ecx_3, esi_1, ecx_3, arg2, arg4, esi_1, arg3, esi_1, ebx, *(arg1 + 0x10), arg5.b)
int32_t edx_4 = *(arg1 + 0xc)
int32_t result = esi_1 + ebx

if (result s< edx_4)
    (*(***(arg1 + 4) + 0x10))(arg2, result, 0, arg4, result, 0, edx_4 - result, *(arg1 + 0x10))

result.b = 1
return result
