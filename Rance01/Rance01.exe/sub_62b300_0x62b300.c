// 函数: sub_62b300
// 地址: 0x62b300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1
int32_t* eax = *(edi + 4)
int32_t* i = *eax

if (i != eax)
    do
        struct ISurface::dplogviewer::CSurface::VTable** esi_1 = i[0xb]
        
        if (esi_1 != 0)
            *esi_1 = &dplogviewer::CSurface::`vftable'{for `ISurface'}
            int128_t* eax_1 = esi_1[0xa]
            int128_t* ebx_1 = esi_1[9]
            
            if (ebx_1 != eax_1)
                void* edi_2 = 0
                sub_6b49d0(ebx_1, eax_1, edi_2)
                esi_1[0xa] = edi_2 + ebx_1
                edi = arg1
            
            int128_t* eax_2 = esi_1[0xe]
            int128_t* ebx_2 = esi_1[0xd]
            
            if (ebx_2 != eax_2)
                void* edi_5 = 0
                sub_6b49d0(ebx_2, eax_2, edi_5)
                esi_1[0xe] = edi_5 + ebx_2
                edi = arg1
            
            esi_1[0x11] = 0
            esi_1[0x12] = 0
            __builtin_memset(&esi_1[2], 0, 0x14)
            esi_1[8].w = 0
            int32_t eax_3 = esi_1[0xd]
            
            if (eax_3 != 0)
                int32_t var_14_3 = eax_3
                sub_6b4d5b()
            
            esi_1[0xd] = 0
            esi_1[0xe] = 0
            esi_1[0xf] = 0
            int32_t eax_4 = esi_1[9]
            
            if (eax_4 != 0)
                int32_t var_14_4 = eax_4
                sub_6b4d5b()
            
            struct ISurface::dplogviewer::CSurface::VTable** var_14_5 = esi_1
            esi_1[9] = 0
            esi_1[0xa] = 0
            esi_1[0xb] = 0
            sub_6b4d5b()
        
        if (*(i + 0x31) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x31) != 0)
                int32_t* i_1 = i[1]
                
                if (*(i_1 + 0x31) == 0)
                    while (i == i_1[2])
                        i = i_1
                        i_1 = i_1[1]
                        
                        if (*(i_1 + 0x31) != 0)
                            break
                
                i = i_1
            else
                int32_t* i_3 = *i_2
                
                while (*(i_3 + 0x31) == 0)
                    i_2 = i_3
                    i_3 = *i_2
                
                i = i_2
    while (i != *(edi + 4))

sub_62b910(*(*(edi + 4) + 4))
void* eax_6 = *(edi + 4)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(edi + 4)
*eax_7 = eax_7
void* eax_8 = *(edi + 4)
*(eax_8 + 8) = eax_8
*(edi + 8) = 0
HGDIOBJ ho = *(edi + 0x44)

if (ho != 0)
    DeleteObject(ho)
    *(edi + 0x44) = 0

return (*(*(edi + 0x10) + 4))()
