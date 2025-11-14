// 函数: sub_589f80
// 地址: 0x589f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x24)
int32_t esi = *(arg1 + 0x28)
int32_t edi = 0
int32_t var_4 = 0

if (eax != esi)
    do
        void* edx_1 = *eax
        eax = &eax[1]
        edi += *(edx_1 + 0x2c) * *(edx_1 + 0x28)
    while (eax != esi)
    
    var_4 = edi

int32_t* eax_1 = *(arg1 + 0x48)
int32_t edi_1 = *(arg1 + 0x4c)
int32_t ebp = 0
int32_t var_8 = 0

if (eax_1 != edi_1)
    do
        void* esi_1 = *eax_1
        int32_t edx_2
        edx_2.b = *(esi_1 + 0x14) != 0
        eax_1 = &eax_1[1]
        ebp += (edx_2 * 2 + 2) * *(esi_1 + 0x10)
    while (eax_1 != edi_1)
    
    var_8 = ebp

int32_t* eax_2 = *(arg1 + 0x6c)
int32_t edx_5 = *(arg1 + 0x70)
int32_t esi_2 = 0
int32_t var_c = 0

if (eax_2 != edx_5)
    do
        esi_2 += *(*eax_2 + 0x2c)
        eax_2 = &eax_2[1]
    while (eax_2 != edx_5)
    
    var_c = esi_2

int32_t* eax_3 = *(arg1 + 0x90)
int32_t edx_6 = *(arg1 + 0x94)
int32_t ebp_1 = 0
int32_t var_10 = 0

if (eax_3 != edx_6)
    do
        ebp_1 += *(*eax_3 + 0x40)
        eax_3 = &eax_3[1]
    while (eax_3 != edx_6)
    
    var_10 = ebp_1

int32_t* i = *(arg1 + 0xd8)
int32_t ebx_3 = 0

for (; i != *(arg1 + 0xdc); i = &i[1])
    ebx_3 += *(*i + 0x24)

int32_t* edx_8 = *(arg1 + 0xfc)
int32_t esi_5 = *(arg1 + 0x100)
int32_t edi_3 = 0

if (edx_8 != esi_5)
    do
        void* eax_4 = *edx_8
        edx_8 = &edx_8[1]
        edi_3 += *(eax_4 + 0x14) - *(eax_4 + 0x10)
    while (edx_8 != esi_5)
    
    ebp_1 = var_10

int32_t* edx_9 = *(arg1 + 0x120)
int32_t ecx = *(arg1 + 0x124)
int32_t esi_6 = 0

if (edx_9 != ecx)
    do
        void* eax_5 = *edx_9
        edx_9 = &edx_9[1]
        esi_6 += *(eax_5 + 0x14) - *(eax_5 + 0x10)
    while (edx_9 != ecx)
    
    ebp_1 = var_10

return esi_6 + edi_3 + ebx_3 + ebp_1 + var_c + var_8 + var_4
