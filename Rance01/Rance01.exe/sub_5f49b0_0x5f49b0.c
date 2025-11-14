// 函数: sub_5f49b0
// 地址: 0x5f49b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
*(arg2 + 0x4c) = 0
int32_t edi = *(arg2 + 0x58)
int32_t ebx = *(arg2 + 0x54)
sub_5ee6d0(ebx, edi, (edi - ebx) s/ 0x6c)
int32_t edi_1 = *(arg2 + 0x68)
int32_t ebx_1 = *(arg2 + 0x64)
sub_5ec4a0(ebx_1, edi_1, (edi_1 - ebx_1) s/ 0x6c)
int32_t edi_2 = *(arg2 + 0x78)
int32_t ebx_2 = *(arg2 + 0x74)
sub_5ec4a0(ebx_2, edi_2, (edi_2 - ebx_2) s/ 0x6c)
int32_t edi_3 = *(arg2 + 0x88)
int32_t ebx_3 = *(arg2 + 0x84)
sub_5ec4a0(ebx_3, edi_3, (edi_3 - ebx_3) s/ 0x6c)
int32_t edi_4 = *(arg2 + 0x98)
int32_t ebx_4 = *(arg2 + 0x94)
sub_5ec4a0(ebx_4, edi_4, (edi_4 - ebx_4) s/ 0x6c)
int32_t edi_5 = *(arg2 + 0xa8)
int32_t ebx_5 = *(arg2 + 0xa4)
int32_t ecx_21 = sub_5ee6d0(ebx_5, edi_5, (edi_5 - ebx_5) s/ 0x6c)
*(arg2 + 0x50) = 0
void* i = *(arg2 + 0x54)
int32_t edi_6 = 0

for (; i != *(arg2 + 0x58); i += 0x6c)
    int32_t ebx_6 = *(i + 0xc)
    
    if (edi_6 s< ebx_6)
        edi_6 = ebx_6

var_4 = edi_6
int32_t* eax_15 = &var_4

if (*(arg2 + 0x50) s>= edi_6)
    eax_15 = arg2 + 0x50

*(arg2 + 0x50) = *eax_15
void* i_1 = *(arg2 + 0x64)
int32_t edx_14 = 0

for (; i_1 != *(arg2 + 0x68); i_1 += 0x6c)
    edi_6 = *(i_1 + 0xc)
    
    if (edx_14 s< edi_6)
        edx_14 = edi_6

var_4 = edx_14
int32_t* eax_16 = &var_4

if (*(arg2 + 0x50) s>= edx_14)
    eax_16 = arg2 + 0x50

*(arg2 + 0x50) = *eax_16
void* i_2 = *(arg2 + 0x74)
int32_t edx_15 = 0

for (; i_2 != *(arg2 + 0x78); i_2 += 0x6c)
    edi_6 = *(i_2 + 0xc)
    
    if (edx_15 s< edi_6)
        edx_15 = edi_6

var_4 = edx_15
int32_t* eax_18 = &var_4

if (*(arg2 + 0x50) s>= edx_15)
    eax_18 = arg2 + 0x50

*(arg2 + 0x50) = *eax_18
void* i_3 = *(arg2 + 0x84)
int32_t edx_17 = 0

for (; i_3 != *(arg2 + 0x88); i_3 += 0x6c)
    edi_6 = *(i_3 + 0xc)
    
    if (edx_17 s< edi_6)
        edx_17 = edi_6

var_4 = edx_17
int32_t* eax_19 = &var_4

if (*(arg2 + 0x50) s>= edx_17)
    eax_19 = arg2 + 0x50

*(arg2 + 0x50) = *eax_19
void* i_4 = *(arg2 + 0x94)
int32_t edx_18 = 0

for (; i_4 != *(arg2 + 0x98); i_4 += 0x6c)
    edi_6 = *(i_4 + 0xc)
    
    if (edx_18 s< edi_6)
        edx_18 = edi_6

var_4 = edx_18
void* eax_21 = &var_4

if (*(arg2 + 0x50) s>= edx_18)
    eax_21 = arg2 + 0x50

*(arg2 + 0x50) = *eax_21
void* i_5 = *(arg2 + 0xa4)
int32_t edx_20 = 0

for (; i_5 != *(arg2 + 0xa8); i_5 += 0x6c)
    int32_t edi_8 = *(i_5 + 0xc)
    
    if (edx_20 s< edi_8)
        edx_20 = edi_8

var_4 = edx_20
void* eax_22 = &var_4

if (*(arg2 + 0x50) s>= edx_20)
    eax_22 = arg2 + 0x50

*(arg2 + 0x50) = *eax_22
return sub_432f80(*(arg2 + 0xc), edx_20, ecx_21) __tailcall
