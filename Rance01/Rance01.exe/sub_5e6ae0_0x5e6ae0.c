// 函数: sub_5e6ae0
// 地址: 0x5e6ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 4) = 0

uint32_t eax_3 = zx.d(sub_4022d0(0x7356bc, 0x757578))
int32_t eax_4 = neg.d(eax_3)
int32_t result = sbb.d(eax_4, eax_4, eax_3 != 0) & data_797d3c
*(arg1 + 4) = result
result.b = result != 0
return result
