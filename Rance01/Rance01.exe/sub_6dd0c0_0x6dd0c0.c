// 函数: sub_6dd0c0
// 地址: 0x6dd0c0
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
        void* esi
        
        if (arg3 s> 0)
            uint32_t edi = ecx_1
            esi = ebx_1
            
            do
                i += 1
                (*result_1)[esi] = zx.w(*(edi + arg1))
                (*result_1)[esi + 0x80] = zx.w(*(edi + arg1 + 1))
                uint16_t ebp_4 = zx.w(*(edi + arg1 + 2))
                edi += 3
                (*result_1)[esi + 0x100] = ebp_4
                esi += 1
            while (i s< arg3)
        
        if (i s< 0x10)
            void* edi_1 = result_1 + ebp_1
            esi = &(*result_1)[i + ebx_1]
            
            do
                i += 1
                *esi = *(edi_1 + (arg3 << 1) - 2)
                *(esi + 0x100) = *(edi_1 + (arg3 << 1) + 0xfe)
                *(esi + 0x200) = *(edi_1 + (arg3 << 1) + 0x1fe)
                esi += 2
            while (i s< 0x10)
        
        ecx_1 += arg2
        ebx_1 += 0x10
        ebp_1 += 0x20
        i_1 += 1
    while (i_1 s< arg4)
    
    result = result_1

if (i_1 s< 8)
    void* ecx_5 = &(*result)[i_1 * 0x10]
    
    do
        int16_t edi_6 = *(ecx_5 + 0x1fc)
        int16_t esi_4 = *(ecx_5 - 2)
        *ecx_5 = *(ecx_5 - 0x20)
        int16_t ebp_6 = *(ecx_5 + 0xfe)
        *(ecx_5 + 0x100) = *(ecx_5 + 0xe0)
        i_1 += 1
        *(ecx_5 + 0x200) = *(ecx_5 + 0x1e0)
        *(ecx_5 + 2) = *(ecx_5 - 0x1e)
        *(ecx_5 + 0x102) = *(ecx_5 + 0xe2)
        *(ecx_5 + 0x202) = *(ecx_5 + 0x1e2)
        *(ecx_5 + 4) = *(ecx_5 - 0x1c)
        *(ecx_5 + 0x104) = *(ecx_5 + 0xe4)
        *(ecx_5 + 0x204) = *(ecx_5 + 0x1e4)
        *(ecx_5 + 6) = *(ecx_5 - 0x1a)
        *(ecx_5 + 0x106) = *(ecx_5 + 0xe6)
        *(ecx_5 + 0x206) = *(ecx_5 + 0x1e6)
        *(ecx_5 + 8) = *(ecx_5 - 0x18)
        *(ecx_5 + 0x108) = *(ecx_5 + 0xe8)
        *(ecx_5 + 0x208) = *(ecx_5 + 0x1e8)
        *(ecx_5 + 0xa) = *(ecx_5 - 0x16)
        *(ecx_5 + 0x10a) = *(ecx_5 + 0xea)
        *(ecx_5 + 0x20a) = *(ecx_5 + 0x1ea)
        *(ecx_5 + 0xc) = *(ecx_5 - 0x14)
        *(ecx_5 + 0x10c) = *(ecx_5 + 0xec)
        *(ecx_5 + 0x20c) = *(ecx_5 + 0x1ec)
        *(ecx_5 + 0xe) = *(ecx_5 - 0x12)
        *(ecx_5 + 0x10e) = *(ecx_5 + 0xee)
        *(ecx_5 + 0x20e) = *(ecx_5 + 0x1ee)
        *(ecx_5 + 0x10) = *(ecx_5 - 0x10)
        *(ecx_5 + 0x110) = *(ecx_5 + 0xf0)
        *(ecx_5 + 0x210) = *(ecx_5 + 0x1f0)
        *(ecx_5 + 0x12) = *(ecx_5 - 0xe)
        *(ecx_5 + 0x112) = *(ecx_5 + 0xf2)
        *(ecx_5 + 0x212) = *(ecx_5 + 0x1f2)
        *(ecx_5 + 0x14) = *(ecx_5 - 0xc)
        *(ecx_5 + 0x114) = *(ecx_5 + 0xf4)
        *(ecx_5 + 0x214) = *(ecx_5 + 0x1f4)
        *(ecx_5 + 0x16) = *(ecx_5 - 0xa)
        *(ecx_5 + 0x116) = *(ecx_5 + 0xf6)
        *(ecx_5 + 0x216) = *(ecx_5 + 0x1f6)
        *(ecx_5 + 0x18) = *(ecx_5 - 8)
        *(ecx_5 + 0x118) = *(ecx_5 + 0xf8)
        *(ecx_5 + 0x218) = *(ecx_5 + 0x1f8)
        *(ecx_5 + 0x1a) = *(ecx_5 - 6)
        *(ecx_5 + 0x11a) = *(ecx_5 + 0xfa)
        *(ecx_5 + 0x21a) = *(ecx_5 + 0x1fa)
        *(ecx_5 + 0x1c) = *(ecx_5 - 4)
        *(ecx_5 + 0x11c) = *(ecx_5 + 0xfc)
        int16_t ebx_47 = *(ecx_5 + 0x1fe)
        *(ecx_5 + 0x21c) = edi_6
        *(ecx_5 + 0x1e) = esi_4
        *(ecx_5 + 0x11e) = ebp_6
        *(ecx_5 + 0x21e) = ebx_47
        ecx_5 += 0x20
    while (i_1 s< 8)

int32_t ecx_6 = 0

for (int32_t i_2 = 0; i_2 s< 0x80; i_2 += 0x10)
    int16_t* edi_7 = arg5 + (ecx_6 << 1)
    void* esi_5 = &(*result)[i_2]
    void* j = &(*result)[i_2]
    
    do
        *edi_7 = *esi_5 - 0x80
        edi_7[0x40] = *(esi_5 + 0x10) - 0x80
        edi_7[0x80] = ((sx.d(*(j + 0x100)) + sx.d(*(j + 0x102)) + 1) s>> 1).w - 0x80
        edi_7[0xc0] = ((sx.d(*(j + 0x200)) + sx.d(*(j + 0x202)) + 1) s>> 1).w - 0x80
        edi_7 = &edi_7[1]
        esi_5 += 2
        j += 4
    while (&(*result)[i_2 + 0x10] s> j)
    
    ecx_6 += 8

return result
