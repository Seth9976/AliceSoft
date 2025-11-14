// 函数: sub_5b0990
// 地址: 0x5b0990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx
int128_t* var_4 = ecx
uint32_t esi = arg1

if (esi == 0 || arg2 == 0)
    return 

int128_t* eax = sub_5a6370((*(arg2 + 0xd8) + 1) << 4, esi)

if (eax == 0)
    sub_5a5de0("No memory for sPLT palettes", esi)
    return 

sub_6c02a0(eax, *(arg2 + 0xd4), *(arg2 + 0xd8) << 4)
int32_t eax_4 = *(arg2 + 0xd4)

if (eax_4 != 0)
    int32_t ecx_6 = *(esi + 0x268)
    
    if (ecx_6 == 0)
        __free_base(eax_4)
    else
        ecx_6(esi, eax_4)

int32_t edi_1 = *(arg2 + 0xd8)
*(arg2 + 0xd4) = 0
void* edi_3 = &eax[edi_1]
uint32_t ebx_2 = lstrlenA(*arg3) + 1
int128_t* eax_7 = sub_5a6370(ebx_2, esi)
*edi_3 = eax_7

if (eax_7 != 0)
    sub_6c02a0(eax_7, *arg3, ebx_2)
    int128_t* eax_9 = sub_5a6370(arg3[3] * 0xa, esi)
    *(edi_3 + 8) = eax_9
    
    if (eax_9 != 0)
        sub_6c02a0(eax_9, arg3[2], arg3[3] * 0xa)
        *(edi_3 + 0xc) = arg3[3]
        arg1.b = arg3[1].b
        *(edi_3 + 4) = arg1.b
    else
        sub_5a5de0("Out of memory while processing sPLT chunk", esi)
        arg1 = *edi_3
        
        if (arg1 == 0)
            *edi_3 = 0
        else
            int32_t ecx_11 = *(esi + 0x268)
            
            if (ecx_11 == 0)
                __free_base(arg1)
                *edi_3 = 0
            else
                ecx_11(esi, arg1)
                *edi_3 = 0
else
    sub_5a5de0("Out of memory while processing sPLT chunk", esi)

*(arg2 + 0xd8) += 1
*(arg2 + 8) |= 0x2000
*(arg2 + 0xb8) |= 0x20
*(arg2 + 0xd4) = eax
