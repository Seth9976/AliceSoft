// 函数: sub_68bf70
// 地址: 0x68bf70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = arg3
int32_t* ecx = *(arg1 + 4)

if (ecx == *(arg1 + 8))
    return float.t(0)

void* esi = *ecx
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, *(esi + 0xc) - *(esi + 8))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s> arg3 && arg3 s>= 0)
    return fconvert.t(fconvert.s(fconvert.t(*(arg3 * 0x2c + *(esi + 8) + 8))))

return fconvert.t(fconvert.s(float.t(0)))
