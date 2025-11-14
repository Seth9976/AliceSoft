// 函数: sub_518270
// 地址: 0x518270
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_1 = *(arg1 + 0xc) - *(arg1 + 8)
int32_t result = ecx_1 s/ 0xac
float edi = 0f

if (result s> 0)
    do
        int32_t var_c_1 = ecx_1
        sub_5182d0(arg1, edi, fconvert.s(fconvert.t(arg2)))
        int32_t edx_2
        edx_2:result = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
        int32_t edx_3 = edx_2 s>> 5
        edi += 1
        ecx_1 = (edx_3 u>> 0x1f) + edx_3
    while (edi s< ecx_1)

return result
