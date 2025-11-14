// 函数: sub_634a40
// 地址: 0x634a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg3
void* esi = arg4
void* ecx = ebx

if (ebx != esi)
    int32_t edi_1 = *(arg1 + 4)
    
    while (esi != edi_1)
        sub_401180(ebx, 0xffffffff, esi, 0)
        *(ebx + 0x1c) = *(esi + 0x1c)
        esi += 0x20
        ebx += 0x20
    
    sub_6a58e0(ebx, *(arg1 + 4))
    *(arg1 + 4) = ebx

*arg2 = ecx
return arg2
