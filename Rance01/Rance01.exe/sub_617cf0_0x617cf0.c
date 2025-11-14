// 函数: sub_617cf0
// 地址: 0x617cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg4
void* edi = arg3
void* ecx = edi

if (edi != esi)
    int32_t ebx_1 = *(arg1 + 4)
    
    while (esi != ebx_1)
        sub_4b55f0(edi + 4, esi + 4)
        esi += 0x14
        edi += 0x14
    
    int32_t ebx_2 = *(arg1 + 4)
    void* esi_1 = edi
    
    if (edi != ebx_2)
        do
            (**esi_1)(0)
            esi_1 += 0x14
        while (esi_1 != ebx_2)
    
    *(arg1 + 4) = edi

*arg2 = ecx
return arg2
