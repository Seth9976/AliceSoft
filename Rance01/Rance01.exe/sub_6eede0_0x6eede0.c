// 函数: sub_6eede0
// 地址: 0x6eede0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0
void* var_10 = arg4

do
    char* esi_1 = var_10
    *esi_1 = *(arg1 + (i << 1))
    esi_1[1] = *(arg2 + (i << 1))
    int32_t ecx_1
    ecx_1.b = *(arg3 + (i << 1))
    esi_1[2] = ecx_1.b
    esi_1[3] = 0xff
    esi_1[4] = *(arg1 + (i << 1) + 2)
    int32_t ecx_3
    ecx_3.b = *(arg2 + (i << 1) + 2)
    esi_1[5] = ecx_3.b
    int32_t ecx_4
    ecx_4.b = *(arg3 + (i << 1) + 2)
    esi_1[6] = ecx_4.b
    esi_1[7] = 0xff
    esi_1[8] = *(arg1 + (i << 1) + 4)
    int32_t ecx_6
    ecx_6.b = *(arg2 + (i << 1) + 4)
    esi_1[9] = ecx_6.b
    int32_t ecx_7
    ecx_7.b = *(arg3 + (i << 1) + 4)
    esi_1[0xa] = ecx_7.b
    esi_1[0xb] = 0xff
    esi_1[0xc] = *(arg1 + (i << 1) + 6)
    int32_t ecx_9
    ecx_9.b = *(arg2 + (i << 1) + 6)
    esi_1[0xd] = ecx_9.b
    int32_t ecx_10
    ecx_10.b = *(arg3 + (i << 1) + 6)
    esi_1[0xe] = ecx_10.b
    esi_1[0xf] = 0xff
    esi_1[0x10] = *(arg1 + (i << 1) + 8)
    int32_t ecx_12
    ecx_12.b = *(arg2 + (i << 1) + 8)
    esi_1[0x11] = ecx_12.b
    int32_t ecx_13
    ecx_13.b = *(arg3 + (i << 1) + 8)
    esi_1[0x12] = ecx_13.b
    esi_1[0x13] = 0xff
    esi_1[0x14] = *(arg1 + (i << 1) + 0xa)
    int32_t ecx_15
    ecx_15.b = *(arg2 + (i << 1) + 0xa)
    esi_1[0x15] = ecx_15.b
    int32_t ecx_16
    ecx_16.b = *(arg3 + (i << 1) + 0xa)
    esi_1[0x16] = ecx_16.b
    esi_1[0x17] = 0xff
    esi_1[0x18] = *(arg1 + (i << 1) + 0xc)
    int32_t ecx_18
    ecx_18.b = *(arg2 + (i << 1) + 0xc)
    esi_1[0x19] = ecx_18.b
    int32_t ecx_19
    ecx_19.b = *(arg3 + (i << 1) + 0xc)
    esi_1[0x1a] = ecx_19.b
    esi_1[0x1b] = 0xff
    esi_1[0x1c] = *(arg1 + (i << 1) + 0xe)
    int32_t ecx_21
    ecx_21.b = *(arg2 + (i << 1) + 0xe)
    esi_1[0x1d] = ecx_21.b
    int32_t ecx_22
    ecx_22.b = *(arg3 + (i << 1) + 0xe)
    esi_1[0x1e] = ecx_22.b
    i += 8
    esi_1[0x1f] = 0xff
    var_10 = &esi_1[arg5]
while (i s< 0x40)

return i
