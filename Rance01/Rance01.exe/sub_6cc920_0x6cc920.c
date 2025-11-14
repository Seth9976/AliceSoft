// 函数: sub_6cc920
// 地址: 0x6cc920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int32_t ecx = arg3

if (ecx s> 4)
    return 

int32_t i = 0

if (ecx s> 0)
    if (ecx s>= 4)
        int32_t* ebp_1 = nullptr
        int32_t ebx_1 = 0
        int32_t var_1c_1 = 2
        int32_t var_18_1 = 1
        
        do
            *(ebp_1 + arg2[0xd]) = i
            *(ebp_1 + arg2[0xd] + 4) = *(ebx_1 + *(arg1 + 0x37cc) + 4)
            i += 3
            *(ebp_1 + arg2[0xd] + 8) = *(ebx_1 + *(arg1 + 0x37cc) + 8)
            *(ebp_1 + arg2[0xd] + 0x18) = var_18_1
            *(ebp_1 + arg2[0xd] + 0x1c) = *(ebx_1 + *(arg1 + 0x37cc) + 0x14)
            *(ebp_1 + arg2[0xd] + 0x20) = *(ebx_1 + *(arg1 + 0x37cc) + 0x18)
            *(ebp_1 + arg2[0xd] + 0x30) = var_1c_1
            *(ebp_1 + arg2[0xd] + 0x34) = *(ebx_1 + *(arg1 + 0x37cc) + 0x24)
            *(ebp_1 + arg2[0xd] + 0x38) = *(ebx_1 + *(arg1 + 0x37cc) + 0x28)
            ebp_1 = &ebp_1[0x12]
            ebx_1 += 0x30
            var_18_1 += 3
            var_1c_1 += 3
        while (i s<= ecx - 4)
    
    int32_t ebp_2 = i * 0x18
    int32_t ebx_3 = i << 4
    
    do
        *(ebp_2 + arg2[0xd]) = i
        *(ebp_2 + arg2[0xd] + 4) = *(ebx_3 + *(arg1 + 0x37cc) + 4)
        int32_t esi_20 = *(ebx_3 + *(arg1 + 0x37cc) + 8)
        ebx_3 += 0x10
        i += 1
        *(ebp_2 + arg2[0xd] + 8) = esi_20
        ebp_2 += 0x18
    while (i s< arg3)
    
    ecx = arg3

*arg2 = ecx
arg2[2] = 0
arg2[3] = 0
arg2[4] = arg4
arg2[5] = arg5
