// 函数: sub_52bf50
// 地址: 0x52bf50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg4
void* esi = arg3
void* edx = esi

if (esi != eax)
    int32_t ecx_1 = *(arg1 + 4)
    
    while (eax != ecx_1)
        *(esi + 8) = *(eax + 8)
        *(esi + 0xc) = *(eax + 0xc)
        eax += 0x10
        esi += 0x10
    
    int32_t ebx_1 = *(arg1 + 4)
    void* edi_3 = esi
    
    if (esi != ebx_1)
        do
            (**edi_3)(0)
            edi_3 += 0x10
        while (edi_3 != ebx_1)
    
    *(arg1 + 4) = esi

*arg2 = edx
return arg2
