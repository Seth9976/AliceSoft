// 函数: sub_42fd90
// 地址: 0x42fd90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 0x44)
*(arg1 + 0x58) = 0
*(arg1 + 0x54) = 1
*(arg1 + 0x5c) = 0

for (; i != *(arg1 + 0x48); i = &i[1])
    (*(**i + 4))()

int128_t* ecx_2 = *(arg1 + 0x48)
int128_t* edi = *(arg1 + 0x44)

if (edi != ecx_2)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_2, ebp_1)
    *(arg1 + 0x48) = ebp_1 + edi

for (int32_t* i_1 = *(arg1 + 0x34); i_1 != *(arg1 + 0x38); i_1 = &i_1[1])
    (*(**i_1 + 4))()

int128_t* ecx_4 = *(arg1 + 0x38)
int128_t* edi_1 = *(arg1 + 0x34)

if (edi_1 != ecx_4)
    int32_t ebp_3 = 0 s>> 2 << 2
    sub_6b49d0(edi_1, ecx_4, ebp_3)
    *(arg1 + 0x38) = ebp_3 + edi_1

for (int32_t* i_2 = *(arg1 + 0x24); i_2 != *(arg1 + 0x28); i_2 = &i_2[1])
    (*(**i_2 + 4))()

int128_t* ecx_6 = *(arg1 + 0x28)
int128_t* edi_2 = *(arg1 + 0x24)

if (edi_2 != ecx_6)
    int32_t ebp_5 = 0 s>> 2 << 2
    sub_6b49d0(edi_2, ecx_6, ebp_5)
    *(arg1 + 0x28) = edi_2 + ebp_5

int32_t* ecx_7 = *(arg1 + 0x20)

if (ecx_7 != 0)
    (*(*ecx_7 + 4))()
    *(arg1 + 0x20) = 0

int32_t* ecx_8 = *(arg1 + 0x1c)

if (ecx_8 != 0)
    (*(*ecx_8 + 4))()
    *(arg1 + 0x1c) = 0
