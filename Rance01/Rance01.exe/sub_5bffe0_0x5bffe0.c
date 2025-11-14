// 函数: sub_5bffe0
// 地址: 0x5bffe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
void* ecx_1 = *arg4
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg3)
int32_t i_2 = divs.dp.d(edx:eax_1, ecx_1)
int32_t edx_1 = mods.dp.d(edx:eax_1, ecx_1)
int32_t result = 0

if (i_2 s<= 0)
    return 0

int32_t i_1 = i_2
int32_t* ebx_1 = arg2
int32_t i

do
    i_2, edx_1 = sub_5bfcd0(i_2, edx_1, arg4, ebx_1)
    int32_t i_3 = i_2
    
    if (i_3 s>= 0)
        i_2 = arg4[3]
    
    int32_t esi_1
    
    if (i_3 s< 0 || i_3 s>= *(i_2 + 4))
        esi_1 = 0
    else
        i_2 = sub_5b4af0(arg1, *(arg4[5] + (i_3 << 2)), *(*(i_2 + 8) + (i_3 << 2)))
        edx_1 = *(arg4[3] + 8)
        esi_1 = *(edx_1 + (i_3 << 2))
    
    result += esi_1
    ebx_1 += ecx_1 * 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
