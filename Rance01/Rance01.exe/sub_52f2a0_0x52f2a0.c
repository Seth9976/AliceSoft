// 函数: sub_52f2a0
// 地址: 0x52f2a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg3 + 0x20) != *(arg1 + 0x20) || *(arg3 + 0x24) != *(arg1 + 0x24))
    arg1.b = 0
    return arg1

int32_t esi = *(arg3 + 0x28)

if (esi != *(arg1 + 0x28))
    arg1.b = 0
    return arg1

int32_t edx_1 = 0

if (esi s> 0)
    void* ecx_1 = *(arg3 + 0x3c) + 0x20
    arg1 = *(arg1 + 0x3c) + 0x20
    
    while (true)
        if (*(ecx_1 - 4) != *(arg1 - 4) || *ecx_1 != *arg1 || *(ecx_1 + 4) != *(arg1 + 4))
            arg1.b = 0
            return arg1
        
        edx_1 += 1
        arg1 += 0x2c
        ecx_1 += 0x2c
        
        if (edx_1 s>= esi)
            break
        
        continue

arg1.b = 1
return arg1
