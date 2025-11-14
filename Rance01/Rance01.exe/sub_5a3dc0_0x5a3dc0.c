// 函数: sub_5a3dc0
// 地址: 0x5a3dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_1 = arg4
char* edi = arg3
sub_5a3d60(arg1)
(*(arg1 + 0x14))[*(arg1 + 8)] = i_1.b
int32_t edx_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
(*(arg1 + 0x14))[edx_1] = (i_1 u>> 8).b
*(arg1 + 0x14) += 1
(*(arg1 + 0x14))[*(arg1 + 8)] = not.b(i_1.b)
*(arg1 + 0x14) += 1
(*(arg1 + 0x14))[*(arg1 + 8)] = (not.d(i_1) u>> 8).b
*(arg1 + 0x14) += 1
char* esi_3 = *(arg1 + 0x14)

if (i_1 == 0)
    return 

int32_t i

do
    int32_t edx_3
    edx_3.b = *edi
    esi_3[*(arg1 + 8)] = edx_3.b
    *(arg1 + 0x14) += 1
    esi_3 = *(arg1 + 0x14)
    edi = &edi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
