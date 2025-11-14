// 函数: sub_4b3dc0
// 地址: 0x4b3dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg4
void* ebx = arg3
void* ecx = ebx

if (ebx != eax)
    int32_t edx_1 = *(arg1 + 4)
    
    while (eax != edx_1)
        int32_t esi_1 = eax
        void* edi_1 = ebx
        eax += 0x64
        ebx += 0x64
        __builtin_memcpy(edi_1, esi_1, 0x64)
    
    int32_t edi_2 = *(arg1 + 4)
    void* esi_2 = ebx
    
    if (ebx != edi_2)
        do
            sub_4b3e80(esi_2)
            esi_2 += 0x64
        while (esi_2 != edi_2)
    
    *(arg1 + 4) = ebx

*arg2 = ecx
return arg2
