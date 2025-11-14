// 函数: sub_6d8600
// 地址: 0x6d8600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_340[0x9]
int16_t (* result)[0x9] = &var_340
int32_t i_1 = 0

if (arg4 s> 0)
    int32_t ecx_1 = 0
    int32_t ebx_1 = 0
    int32_t ebp_1 = 0
    int16_t (* result_1)[0x9] = &var_340
    
    do
        int32_t i = 0
        
        if (arg3 s> 0)
            void* edi_1 = ecx_1
            int32_t i_3 = 0
            int32_t esi_3 = ebx_1
            
            do
                uint32_t ebx_2 = zx.d(*(edi_1 + arg1))
                uint32_t ebp_2 = zx.d(*(edi_1 + arg1 + 1))
                uint32_t ecx_2 = zx.d(*(edi_1 + arg1 + 2))
                edi_1 += 3
                (*result_1)[esi_3] = ((ebx_2 * 0x1d + ebp_2 * 0x96 + ecx_2 * 0x4d - 0x7f80) s>> 8).w
                (*result_1)[esi_3 + 0x80] =
                    (((ebx_2 << 7) + ebp_2 * 0xffffffab + ecx_2 * 0xffffffd5 + 0x80) s>> 8).w
                (*result_1)[esi_3 + 0x100] =
                    ((ebx_2 * 0xffffffeb + ebp_2 * 0xffffff95 + (ecx_2 << 7) + 0x80) s>> 8).w
                esi_3 += 1
                i = i_3 + 1
                i_3 = i
            while (i s< arg3)
        
        if (i s< 0x10)
            void* edi_2 = result_1 + ebp_1
            void* esi_6 = &(*result_1)[i + ebx_1]
            
            do
                i += 1
                *esi_6 = *(edi_2 + (arg3 << 1) - 2)
                *(esi_6 + 0x100) = *(edi_2 + (arg3 << 1) + 0xfe)
                *(esi_6 + 0x200) = *(edi_2 + (arg3 << 1) + 0x1fe)
                esi_6 += 2
            while (i s< 0x10)
        
        ecx_1 += arg2
        ebx_1 += 0x10
        ebp_1 += 0x20
        i_1 += 1
    while (i_1 s< arg4)
    
    result = result_1

if (i_1 s< 8)
    void* ecx_6 = &(*result)[i_1 * 0x10]
    
    do
        int16_t edi_7 = *(ecx_6 + 0x1fc)
        int16_t esi_7 = *(ecx_6 - 2)
        *ecx_6 = *(ecx_6 - 0x20)
        int16_t ebp_4 = *(ecx_6 + 0xfe)
        *(ecx_6 + 0x100) = *(ecx_6 + 0xe0)
        i_1 += 1
        *(ecx_6 + 0x200) = *(ecx_6 + 0x1e0)
        *(ecx_6 + 2) = *(ecx_6 - 0x1e)
        *(ecx_6 + 0x102) = *(ecx_6 + 0xe2)
        *(ecx_6 + 0x202) = *(ecx_6 + 0x1e2)
        *(ecx_6 + 4) = *(ecx_6 - 0x1c)
        *(ecx_6 + 0x104) = *(ecx_6 + 0xe4)
        *(ecx_6 + 0x204) = *(ecx_6 + 0x1e4)
        *(ecx_6 + 6) = *(ecx_6 - 0x1a)
        *(ecx_6 + 0x106) = *(ecx_6 + 0xe6)
        *(ecx_6 + 0x206) = *(ecx_6 + 0x1e6)
        *(ecx_6 + 8) = *(ecx_6 - 0x18)
        *(ecx_6 + 0x108) = *(ecx_6 + 0xe8)
        *(ecx_6 + 0x208) = *(ecx_6 + 0x1e8)
        *(ecx_6 + 0xa) = *(ecx_6 - 0x16)
        *(ecx_6 + 0x10a) = *(ecx_6 + 0xea)
        *(ecx_6 + 0x20a) = *(ecx_6 + 0x1ea)
        *(ecx_6 + 0xc) = *(ecx_6 - 0x14)
        *(ecx_6 + 0x10c) = *(ecx_6 + 0xec)
        *(ecx_6 + 0x20c) = *(ecx_6 + 0x1ec)
        *(ecx_6 + 0xe) = *(ecx_6 - 0x12)
        *(ecx_6 + 0x10e) = *(ecx_6 + 0xee)
        *(ecx_6 + 0x20e) = *(ecx_6 + 0x1ee)
        *(ecx_6 + 0x10) = *(ecx_6 - 0x10)
        *(ecx_6 + 0x110) = *(ecx_6 + 0xf0)
        *(ecx_6 + 0x210) = *(ecx_6 + 0x1f0)
        *(ecx_6 + 0x12) = *(ecx_6 - 0xe)
        *(ecx_6 + 0x112) = *(ecx_6 + 0xf2)
        *(ecx_6 + 0x212) = *(ecx_6 + 0x1f2)
        *(ecx_6 + 0x14) = *(ecx_6 - 0xc)
        *(ecx_6 + 0x114) = *(ecx_6 + 0xf4)
        *(ecx_6 + 0x214) = *(ecx_6 + 0x1f4)
        *(ecx_6 + 0x16) = *(ecx_6 - 0xa)
        *(ecx_6 + 0x116) = *(ecx_6 + 0xf6)
        *(ecx_6 + 0x216) = *(ecx_6 + 0x1f6)
        *(ecx_6 + 0x18) = *(ecx_6 - 8)
        *(ecx_6 + 0x118) = *(ecx_6 + 0xf8)
        *(ecx_6 + 0x218) = *(ecx_6 + 0x1f8)
        *(ecx_6 + 0x1a) = *(ecx_6 - 6)
        *(ecx_6 + 0x11a) = *(ecx_6 + 0xfa)
        *(ecx_6 + 0x21a) = *(ecx_6 + 0x1fa)
        *(ecx_6 + 0x1c) = *(ecx_6 - 4)
        *(ecx_6 + 0x11c) = *(ecx_6 + 0xfc)
        int16_t ebx_47 = *(ecx_6 + 0x1fe)
        *(ecx_6 + 0x21c) = edi_7
        *(ecx_6 + 0x1e) = esi_7
        *(ecx_6 + 0x11e) = ebp_4
        *(ecx_6 + 0x21e) = ebx_47
        ecx_6 += 0x20
    while (i_1 s< 8)

int32_t ecx_7 = 0

for (int32_t i_2 = 0; i_2 s< 0x80; i_2 += 0x10)
    void* j = &(*result)[i_2]
    void* esi_9 = &(*result)[i_2]
    int16_t* edi_9 = arg5 + (ecx_7 << 1)
    
    do
        *edi_9 = *esi_9
        int16_t eax_16 = *(esi_9 + 0x10)
        esi_9 += 2
        edi_9[0x40] = eax_16
        edi_9[0x80] = ((sx.d(*(j + 0x100)) + sx.d(*(j + 0x102)) + 1) s>> 1).w
        int16_t eax_22 = ((sx.d(*(j + 0x200)) + sx.d(*(j + 0x202)) + 1) s>> 1).w
        j += 4
        edi_9[0xc0] = eax_22
        edi_9 = &edi_9[1]
    while (&(*result)[i_2 + 0x10] s> j)
    
    ecx_7 += 8

return result
