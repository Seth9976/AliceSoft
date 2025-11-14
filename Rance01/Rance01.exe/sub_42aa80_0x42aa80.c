// 函数: sub_42aa80
// 地址: 0x42aa80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_4 = *(arg1 + 0x34)
*(arg1 + 0x3c) = 0
*(arg1 + 0x38) = 0xffffffff

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    *(arg1 + 0x34) = 0

for (int32_t* i = *(arg1 + 0x24); i != *(arg1 + 0x28); i = &i[1])
    (*(**i + 4))()

int128_t* ecx_1 = *(arg1 + 0x28)
int128_t* edi = *(arg1 + 0x24)

if (edi != ecx_1)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_1, ebp_1)
    *(arg1 + 0x28) = ebp_1 + edi

int32_t result = sub_42ab10(arg1)
int32_t* ecx_2 = *(arg1 + 0x20)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *(arg1 + 0x20) = 0

int32_t* ecx_3 = *(arg1 + 0x1c)

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    *(arg1 + 0x1c) = 0

return result
