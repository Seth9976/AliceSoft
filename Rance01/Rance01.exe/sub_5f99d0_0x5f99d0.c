// 函数: sub_5f99d0
// 地址: 0x5f99d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct partsengine::ISound::partsengine::CSound::VTable** var_4 = arg1
sub_5f9b30(arg2 + 0xc)
sub_5f9b30(arg2 + 0x1c)
int32_t esi = arg3[1]
int32_t* eax_2 = *arg3
int32_t* ebx_1

if (eax_2 != esi)
    ebx_1 = eax_2
    
    while (*ebx_1 != 0)
        ebx_1 = &ebx_1[1]
        
        if (ebx_1 == esi)
            break

int32_t esi_3
int32_t* edi_1

if (eax_2 == esi || ebx_1 == esi)
    esi_3 = (esi - eax_2) s>> 2
    struct partsengine::ISound::partsengine::CSound::VTable** eax_4 = operator new(0x30)
    
    if (eax_4 == 0)
        eax_4 = nullptr
    else
        int32_t edx_2 = *(arg2 + 8)
        *eax_4 = &partsengine::CSound::`vftable'{for `partsengine::ISound'}
        eax_4[1] = edx_2 * esi_3
        eax_4[2] = edx_2
        eax_4[3] = 0x32
        eax_4[4] = 1
        eax_4[5] = 0
        eax_4[6] = 0
        eax_4[7] = 0
        eax_4[9] = 0
        eax_4[0xa] = 0
        eax_4[0xb] = arg2
    
    edi_1 = arg3
    var_4 = eax_4
    sub_61b5a0(&var_4, edi_1)
else
    esi_3 = (ebx_1 - eax_2) s>> 2
    struct partsengine::ISound::partsengine::CSound::VTable** eax_3 = operator new(0x30)
    
    if (eax_3 == 0)
        edi_1 = arg3
        *ebx_1 = 0
    else
        int32_t edx_1 = *(arg2 + 8)
        *eax_3 = &partsengine::CSound::`vftable'{for `partsengine::ISound'}
        eax_3[1] = edx_1 * esi_3
        eax_3[2] = edx_1
        eax_3[3] = 0x32
        eax_3[4] = 1
        eax_3[5] = 0
        eax_3[6] = 0
        eax_3[7] = 0
        eax_3[0xb] = arg2
        edi_1 = arg3
        eax_3[9] = 0
        eax_3[0xa] = 0
        *ebx_1 = eax_3

(***(*edi_1 + (esi_3 << 2)))()
return *(*edi_1 + (esi_3 << 2))
