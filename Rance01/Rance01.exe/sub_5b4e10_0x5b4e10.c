// 函数: sub_5b4e10
// 地址: 0x5b4e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0
int128_t* eax
int32_t ecx
int32_t edx
eax, ecx, edx = sub_6bc670(arg2, 0, 0x70)
arg2[4].d = arg1
*(arg2 + 0x4c) = 0
*(arg2 + 0x44) = 0

if (*arg1 != 0)
    char* eax_1
    int32_t ecx_1
    int32_t edx_1
    eax_1, ecx_1, edx_1 = _calloc(eax, edx, ecx, 1, 0x48)
    char* ebp_1 = eax_1
    *(arg2 + 0x68) = ebp_1
    *(ebp_1 + 4) = fconvert.s(fconvert.t(-9999f))
    
    do
        if (i != 7)
            *(ebp_1 + (i << 2) + 0xc) = _calloc(eax_1, edx_1, ecx_1, 1, 0x14)
        else
            *(ebp_1 + 0x28) = arg2 + 4
        
        int32_t* esi_1 = *(ebp_1 + (i << 2) + 0xc)
        *esi_1 = 0
        esi_1[1] = 0
        eax_1, ecx_1, edx_1 = sub_6b5c43(0x100)
        i += 1
        esi_1[2] = eax_1
        esi_1[3] = eax_1
        *eax_1 = 0
        esi_1[4] = 0x100
    while (i s< 0xf)

return 0
