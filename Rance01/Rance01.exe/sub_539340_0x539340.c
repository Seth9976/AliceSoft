// 函数: sub_539340
// 地址: 0x539340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, *(ebx + 0x70) - *(ebx + 0x6c))
int32_t edx_1 = edx s>> 5
int32_t ebp_2 = (edx_1 u>> 0x1f) + edx_1
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x78787879, *(ebx + 0xa0) - *(ebx + 0x9c))
int32_t* eax_2 = *(ebx + 0xdc)
int32_t* ecx_4 = *(ebx + 0xe0)
int32_t edx_3 = edx_2 s>> 5
int32_t edi_2 = (edx_3 u>> 0x1f) + edx_3

if (eax_2 != ecx_4)
    *(ebx + 0xe0) = sub_5c9170(eax_2, ecx_4, ecx_4, eax_2)

sub_52ef30(edi_2 + ebp_2 + 1, ebx + 0xdc)
int32_t edx_5 = 0

if (ebp_2 s> 0)
    int32_t* eax_5 = nullptr
    int32_t ecx_5 = 0
    arg1 = ebp_2
    edx_5 = ebp_2
    int32_t i
    
    do
        *(eax_5 + *(ebx + 0xdc) + 8) = *(ebx + 0x6c) + ecx_5
        *(eax_5 + *(ebx + 0xdc)) = 0
        ecx_5 += 0x4c
        eax_5 = &eax_5[4]
        i = arg1
        arg1 -= 1
    while (i != 1)

*(ebx + 0x164) = edx_5

if (edi_2 s> 0)
    int32_t eax_7 = edx_5 << 4
    arg1 = edi_2
    edx_5 += edi_2
    int32_t ecx_6 = 0
    int32_t i_1
    
    do
        *(eax_7 + *(ebx + 0xdc) + 4) = *(ebx + 0x9c) + ecx_6
        *(eax_7 + *(ebx + 0xdc)) = 1
        eax_7 += 0x10
        ecx_6 += 0x44
        i_1 = arg1
        arg1 -= 1
    while (i_1 != 1)

int32_t eax_9 = edx_5 * 2
*(*(ebx + 0xdc) + (eax_9 << 3) + 0xc) = ebx + 0xbc
*(*(ebx + 0xdc) + (eax_9 << 3)) = 2
*(ebx + 0x168) = edx_5
sub_429ad0(*(*(ebx + 0x140) + 4))
void* eax_11 = *(ebx + 0x140)
*(eax_11 + 4) = eax_11
int32_t* eax_12 = *(ebx + 0x140)
*eax_12 = eax_12
int32_t result = *(ebx + 0x140)
*(result + 8) = result
int32_t ebp_5 = 0
*(ebx + 0x144) = 0
int32_t ebx_1 = 0

if (((*(ebx + 0xe0) - *(ebx + 0xdc)) & 0xfffffff0) s> 0)
    do
        void* eax_13 = *(*(ebx + 0xdc) + ebp_5 + 4)
        
        if (eax_13 != 0)
            *sub_513fa0(ebx + 0x13c, eax_13 + 0x10) = ebx_1
        
        ebx_1 += 1
        result = (*(ebx + 0xe0) - *(ebx + 0xdc)) s>> 4
        ebp_5 += 0x10
    while (ebx_1 s< result)

return result
