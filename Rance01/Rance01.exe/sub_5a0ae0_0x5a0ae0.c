// 函数: sub_5a0ae0
// 地址: 0x5a0ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(arg2 + 0x1c)

if (*(esi + 0x34) == 0)
    int32_t eax_1 = (*(arg2 + 0x20))(*(arg2 + 0x28), 1 << (*(esi + 0x24)).b, 1)
    *(esi + 0x34) = eax_1
    
    if (eax_1 == 0)
        return 1

if (*(esi + 0x28) == 0)
    int32_t eax_3 = 1 << (*(esi + 0x24)).b
    *(esi + 0x30) = 0
    *(esi + 0x2c) = 0
    *(esi + 0x28) = eax_3

void* edi_1 = arg1 - *(arg2 + 0x10)
void* eax_4 = *(esi + 0x28)

if (edi_1 u>= eax_4)
    sub_6c02a0(*(esi + 0x34), *(arg2 + 0xc) - eax_4, eax_4)
    int32_t eax_5 = *(esi + 0x28)
    *(esi + 0x30) = 0
    *(esi + 0x2c) = eax_5
    return 0

void* ebp = eax_4 - *(esi + 0x30)

if (ebp u> edi_1)
    ebp = edi_1

sub_6c02a0(*(esi + 0x34) + *(esi + 0x30), *(arg2 + 0xc) - edi_1, ebp)
void* edi_2 = edi_1 - ebp

if (edi_1 != ebp)
    sub_6c02a0(*(esi + 0x34), *(arg2 + 0xc) - edi_2, edi_2)
    int32_t edx_5 = *(esi + 0x28)
    *(esi + 0x30) = edi_2
    *(esi + 0x2c) = edx_5
    return 0

int32_t eax_11 = *(esi + 0x28)
*(esi + 0x30) += ebp

if (*(esi + 0x30) == eax_11)
    *(esi + 0x30) = 0

void* ecx_9 = *(esi + 0x2c)

if (ecx_9 u< eax_11)
    *(esi + 0x2c) = ecx_9 + ebp

return 0
