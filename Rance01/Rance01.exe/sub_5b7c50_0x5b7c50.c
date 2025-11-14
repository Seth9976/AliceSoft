// 函数: sub_5b7c50
// 地址: 0x5b7c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t ebp = arg5
int32_t esi_1 = arg1 - ebp
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_1)
int32_t ecx_2 = arg4 - arg3
int32_t temp0 = divs.dp.d(sx.q(esi_1), ecx_2)
int32_t edx_2 = temp0 - 1

if (esi_1 s>= 0)
    edx_2 = temp0 + 1

int32_t eax_6
int32_t edx_3
edx_3:eax_6 = sx.q(temp0 * ecx_2)
int32_t edx_4 = arg2
int32_t esi_2 = ebp
arg5 = 0

if (edx_4 s> arg4)
    edx_4 = arg4

if (arg3 s< edx_4)
    *(arg6 + (arg3 << 2)) = ebp

int32_t i

for (i = arg3 + 1; i s< edx_4; i += 1)
    int32_t ebp_2 = arg5 + (eax_1 ^ edx) - edx - ((eax_6 ^ edx_3) - edx_3)
    arg5 = ebp_2
    
    if (ebp_2 s< ecx_2)
        esi_2 += temp0
    else
        arg5 -= ecx_2
        esi_2 += edx_2
    
    *(arg6 + (i << 2)) = esi_2

return i
