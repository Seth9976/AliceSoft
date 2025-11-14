// 函数: sub_538960
// 地址: 0x538960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg3
char eax = sub_55b1b0(arg3 + 0x9c, arg1)

if (eax == 0)
    return eax

int32_t esi = *(arg3 + 0x9c)
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x78787879, *(arg3 + 0xa0) - esi)
int32_t edx_1 = edx s>> 5
int32_t i = 0

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    var_4 = nullptr
    int32_t edx_4
    
    do
        void* eax_3 = sub_513fa0(arg3 + 0x11c, var_4 + esi + 0x10)
        var_4 += 0x44
        *eax_3 = i
        esi = *(arg3 + 0x9c)
        int32_t edx_3
        edx_3:eax_1 = muls.dp.d(0x78787879, *(arg3 + 0xa0) - esi)
        edx_4 = edx_3 s>> 5
        i += 1
    while (i s< (edx_4 u>> 0x1f) + edx_4)

eax_1.b = 1
return eax_1
