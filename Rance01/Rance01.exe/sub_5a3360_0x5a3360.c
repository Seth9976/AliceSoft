// 函数: sub_5a3360
// 地址: 0x5a3360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t ecx_1 = *(arg1 + 0x16bc)
int32_t ebx = arg4
int32_t edx_4

if (ecx_1 s<= 0xb)
    edx_4.w = (arg2 - 0x101).w << ecx_1.b
    *(arg1 + 0x16b8) |= edx_4.w
    *(arg1 + 0x16bc) = ecx_1 + 5
else
    char* ecx_2 = *(arg1 + 0x14)
    *(arg1 + 0x16b8) |= (arg2.w - 0x101) << ecx_1.b
    ecx_2[*(arg1 + 8)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    int32_t edx_3 = *(arg1 + 0x16bc)
    *(arg1 + 0x14) += 1
    ebx = arg4
    char* ecx_3
    ecx_3.b = 0x10
    ecx_3.b = 0x10 - edx_3.b
    *(arg1 + 0x16bc) = edx_3 - 0xb
    *(arg1 + 0x16b8) = (arg2.w - 0x101) u>> ecx_3.b

int32_t ecx_5 = *(arg1 + 0x16bc)
int32_t edx_9

if (ecx_5 s<= 0xb)
    edx_9.w = (arg3 - 1).w << ecx_5.b
    *(arg1 + 0x16b8) |= edx_9.w
    *(arg1 + 0x16bc) = ecx_5 + 5
else
    edx_4.w = arg3.w - 1
    edx_4.w <<= ecx_5.b
    char* ecx_6 = *(arg1 + 0x14)
    *(arg1 + 0x16b8) |= edx_4.w
    ecx_6[*(arg1 + 8)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    int32_t edx_8 = *(arg1 + 0x16bc)
    *(arg1 + 0x14) += 1
    char* ecx_7
    ecx_7.b = 0x10
    ecx_7.b = 0x10 - edx_8.b
    *(arg1 + 0x16bc) = edx_8 - 0xb
    *(arg1 + 0x16b8) = (arg3.w - 1) u>> ecx_7.b

int32_t ecx_9 = *(arg1 + 0x16bc)
uint32_t edx_14

if (ecx_9 s<= 0xc)
    edx_14.w = (ebx - 4).w << ecx_9.b
    *(arg1 + 0x16b8) |= edx_14.w
    *(arg1 + 0x16bc) = ecx_9 + 4
else
    uint16_t esi_5 = ebx.w - 4
    edx_9.w = esi_5
    edx_9.w <<= ecx_9.b
    char* ecx_10 = *(arg1 + 0x14)
    *(arg1 + 0x16b8) |= edx_9.w
    ecx_10[*(arg1 + 8)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    int32_t edx_13 = *(arg1 + 0x16bc)
    *(arg1 + 0x14) += 1
    char* ecx_11
    ecx_11.b = 0x10
    ecx_11.b = 0x10 - edx_13.b
    edx_14 = edx_13 - 0xc
    *(arg1 + 0x16bc) = edx_14
    *(arg1 + 0x16b8) = esi_5 u>> ecx_11.b

void* edi = nullptr

if (ebx s> 0)
    do
        int32_t ecx_13 = *(arg1 + 0x16bc)
        edx_14 = zx.d(*(edi + 0x74645c))
        
        if (ecx_13 s<= 0xd)
            edx_14.w = *(arg1 + (edx_14 << 2) + 0xa7e)
            edx_14.w <<= ecx_13.b
            *(arg1 + 0x16b8) |= edx_14.w
            *(arg1 + 0x16bc) = ecx_13 + 3
        else
            uint16_t esi_6 = *(arg1 + (edx_14 << 2) + 0xa7e)
            edx_14.w = esi_6
            edx_14.w <<= ecx_13.b
            char* ecx_14 = *(arg1 + 0x14)
            *(arg1 + 0x16b8) |= edx_14.w
            ecx_14[*(arg1 + 8)] = *(arg1 + 0x16b8)
            *(arg1 + 0x14) += 1
            (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
            int32_t edx_17 = *(arg1 + 0x16bc)
            *(arg1 + 0x14) += 1
            ebx = arg4
            char* ecx_15
            ecx_15.b = 0x10
            ecx_15.b = 0x10 - edx_17.b
            edx_14 = edx_17 - 0xd
            *(arg1 + 0x16bc) = edx_14
            *(arg1 + 0x16b8) = esi_6 u>> ecx_15.b
        
        edi += 1
    while (edi s< ebx)

sub_5a2d60(arg1, edx_14, arg1 + 0x94, arg2 - 1)
sub_5a2d60(arg1, arg3 - 1, arg1 + 0x988, arg3 - 1)
