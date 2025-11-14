// 函数: sub_503030
// 地址: 0x503030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 0x24)

while (i != *(arg1 + 0x28))
    void* ecx_1 = *i
    *(ecx_1 + 0x98) = *(arg1 + 0xac)
    *(ecx_1 + 0x9c) = *(arg1 + 0xb0)
    *(ecx_1 + 0xa0) = *(arg1 + 0xb4)
    i = &i[1]
    *(ecx_1 + 0xa4) = *(arg1 + 0xb8)

int32_t* i_1 = *(arg1 + 0x24)

while (i_1 != *(arg1 + 0x28))
    void* ecx_2 = *i_1
    *(ecx_2 + 0xa8) = *(arg1 + 0xbc)
    *(ecx_2 + 0xac) = *(arg1 + 0xc0)
    *(ecx_2 + 0xb0) = *(arg1 + 0xc4)
    i_1 = &i_1[1]
    *(ecx_2 + 0xb4) = *(arg1 + 0xc8)

void** i_2 = *(arg1 + 0x24)
int32_t edi_9 = *(arg1 + 0x28)
void** i_3 = i_2

if (i_3 != edi_9)
    long double x87_r7_1 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0xcc))))
    
    do
        void* ebx_1 = *i_3
        i_3 = &i_3[1]
        *(ebx_1 + 0xb8) = fconvert.s(x87_r7_1)
    while (i_3 != edi_9)

if (i_2 != edi_9)
    do
        void* edi_10 = *i_2
        i_2 = &i_2[1]
        *(edi_10 + 0xcc) = 0
    while (i_2 != *(arg1 + 0x28))

sub_4ceaa0(arg1 + 0x24, arg2, arg3, arg5, *(arg1 + 0x162), *(arg1 + 0x164), 1, arg1 + 0xe0, 
    arg1 + 0x120, 0, *(arg1 + 0xd8), *(arg1 + 0xd4), arg4)
