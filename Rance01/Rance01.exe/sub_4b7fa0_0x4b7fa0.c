// 函数: sub_4b7fa0
// 地址: 0x4b7fa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t i = 0; i u<= 0xff; i += 1)
    uint32_t ecx_2 = i u>> 1
    
    if ((i.b & 1) != 0)
        ecx_2 ^= 0xedb88320
    
    uint32_t ecx_4
    
    if ((ecx_2.b & 1) == 0)
        ecx_4 = ecx_2 u>> 1
    else
        ecx_4 = ecx_2 u>> 1 ^ 0xedb88320
    
    uint32_t ecx_6
    
    if ((ecx_4.b & 1) == 0)
        ecx_6 = ecx_4 u>> 1
    else
        ecx_6 = ecx_4 u>> 1 ^ 0xedb88320
    
    uint32_t ecx_8
    
    if ((ecx_6.b & 1) == 0)
        ecx_8 = ecx_6 u>> 1
    else
        ecx_8 = ecx_6 u>> 1 ^ 0xedb88320
    
    uint32_t ecx_10
    
    if ((ecx_8.b & 1) == 0)
        ecx_10 = ecx_8 u>> 1
    else
        ecx_10 = ecx_8 u>> 1 ^ 0xedb88320
    
    uint32_t ecx_12
    
    if ((ecx_10.b & 1) == 0)
        ecx_12 = ecx_10 u>> 1
    else
        ecx_12 = ecx_10 u>> 1 ^ 0xedb88320
    
    uint32_t ecx_14
    
    if ((ecx_12.b & 1) == 0)
        ecx_14 = ecx_12 u>> 1
    else
        ecx_14 = ecx_12 u>> 1 ^ 0xedb88320
    
    uint32_t ecx_16
    
    if ((ecx_14.b & 1) == 0)
        ecx_16 = ecx_14 u>> 1
    else
        ecx_16 = ecx_14 u>> 1 ^ 0xedb88320
    
    *(arg1 + (i << 2)) = ecx_16
