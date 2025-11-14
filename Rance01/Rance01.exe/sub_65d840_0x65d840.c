// 函数: sub_65d840
// 地址: 0x65d840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

RECT lprc
int32_t eax_1 = data_78c474 ^ &lprc
sub_6a4b20(*(arg1 + 0x88), arg1 + 0xbc, *(arg1 + 0x34), *(arg1 + 0x8c))
HBRUSH eax_5 = CreateSolidBrush(*(arg1 + 0x1d8))
lprc.right = *(arg1 + 0xc0)
lprc.left = 0
lprc.top = 0
lprc.bottom = *(arg1 + 0xc4)
FillRect(*(arg1 + 0xc8), &lprc, eax_5)
DeleteObject(eax_5)
int32_t eax_7 = *(arg1 + 0x6c)

if (eax_7 == 1)
    int32_t eax_8 = *(arg1 + 0x88)
    int32_t ecx_1 = *(arg1 + 0x8c)
    int32_t eax_10
    int80_t st0_1
    st0_1, eax_10 = sub_657e00(ecx_1, ecx_1, arg1 + 0x78, *(arg1 + 0xbc), eax_8, eax_8)
    sub_6b4885(eax_1 ^ &lprc)
    return eax_10

if (eax_7 == 2)
    int32_t eax_11 = *(arg1 + 0x8c)
    int32_t ecx_4 = *(arg1 + 0x88)
    int32_t eax_12
    int16_t x87control
    int80_t st0_2
    st0_2, eax_12 =
        sub_657c70(ecx_4, eax_11, arg1 + 0x78, x87control, *(arg1 + 0xbc), ecx_4, eax_11)
    sub_6b4885(eax_1 ^ &lprc)
    return eax_12

if (eax_7 == 3)
    void* eax_13 = *(arg1 + 0x88)
    void* ecx_7 = *(arg1 + 0x8c)
    int80_t st0_3
    st0_3, eax_7 = sub_657f50(ecx_7, ecx_7, arg1 + 0x78, *(arg1 + 0xbc), eax_13, eax_13)

sub_6b4885(eax_1 ^ &lprc)
return eax_7
