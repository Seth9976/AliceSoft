// 函数: sub_5952a0
// 地址: 0x5952a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = 0
int32_t* esi = &arg2[1]
int32_t i_7 = 0x11
int32_t i

do
    int32_t j_1 = 0x20
    int32_t j
    
    do
        arg1 = arg1 * 0x5d588b65 + 1
        eax = eax u>> 1 | (arg1 & 0x80000000)
        j = j_1
        j_1 -= 1
    while (j != 1)
    *esi = eax
    esi = &esi[1]
    i = i_7
    i_7 -= 1
while (i != 1)
void* eax_3 = &arg2[2]
*(eax_3 + 0x3c) = arg2[0x11] << 0x17 ^ arg2[1] u>> 9 ^ arg2[0x10]
int32_t i_6 = i_7 + 0x54
int32_t i_1

do
    int32_t esi_1 = *eax_3
    int32_t edi = *(eax_3 + 4)
    int32_t ecx_8 = *(eax_3 - 4) << 0x17 ^ esi_1 u>> 9 ^ *(eax_3 + 0x3c)
    int32_t esi_3 = *(eax_3 + 8)
    int32_t edx_8 = edi u>> 9 ^ esi_1 << 0x17 ^ ecx_8
    *(eax_3 + 0x40) = ecx_8
    *(eax_3 + 0x44) = edx_8
    int32_t edi_2 = *(eax_3 + 0xc)
    int32_t ecx_12 = esi_3 u>> 9 ^ edi << 0x17 ^ edx_8
    int32_t esi_5 = *(eax_3 + 0x10)
    int32_t edx_12 = edi_2 u>> 9 ^ esi_3 << 0x17 ^ ecx_12
    *(eax_3 + 0x48) = ecx_12
    *(eax_3 + 0x4c) = edx_12
    int32_t ecx_16 = esi_5 u>> 9 ^ edi_2 << 0x17 ^ edx_12
    int32_t edx_16 = *(eax_3 + 0x14) u>> 9 ^ esi_5 << 0x17 ^ ecx_16
    *(eax_3 + 0x50) = ecx_16
    *(eax_3 + 0x54) = edx_16
    eax_3 += 0x18
    i_1 = i_6
    i_6 -= 1
while (i_1 != 1)
void* eax_4 = &arg2[1]
int32_t i_4 = i_6 + 8
int32_t i_2

do
    *eax_4 ^= *(eax_4 + 0x7a4)
    *(eax_4 + 4) ^= *(eax_4 + 0x7a8)
    *(eax_4 + 8) ^= *(eax_4 + 0x7ac)
    *(eax_4 + 0xc) ^= *(eax_4 + 0x7b0)
    eax_4 += 0x10
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
void* eax_5 = &arg2[0x21]
int32_t i_5 = 0xa3
int32_t i_3

do
    *eax_5 ^= *(eax_5 - 0x80)
    *(eax_5 + 4) ^= *(eax_5 - 0x7c)
    *(eax_5 + 8) ^= *(eax_5 - 0x78)
    eax_5 += 0xc
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
void* result = sub_595240(sub_595240(i_5, arg2), arg2)
*arg2 = 0x208
return result
