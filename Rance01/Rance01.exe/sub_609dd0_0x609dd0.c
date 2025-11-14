// 函数: sub_609dd0
// 地址: 0x609dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg3
void* edi = arg4
void* ecx = esi

if (esi != edi)
    int32_t ebx_1 = *(arg1 + 4)
    
    while (edi != ebx_1)
        sub_4b55f0(esi, edi)
        *(esi + 0x10) = *(edi + 0x10)
        *(esi + 0x14) = *(edi + 0x14)
        edi += 0x18
        esi += 0x18
    
    sub_60a3c0(esi, *(arg1 + 4))
    *(arg1 + 4) = esi

*arg2 = ecx
return arg2
