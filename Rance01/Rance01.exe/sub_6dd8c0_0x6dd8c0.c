// 函数: sub_6dd8c0
// 地址: 0x6dd8c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_340
void* ebp = &var_340
int32_t i_2 = 0

if (arg4 s> 0)
    void* eax_2 = nullptr
    int32_t edx_2 = 0
    int32_t ecx_2 = arg3
    int32_t var_1c_1 = 0
    int32_t i_4 = 0
    void* var_38_1 = &var_340
    int32_t ebp_1 = arg3 << 1
    
    do
        int32_t i = 0
        
        if (arg3 - 1 s> 0)
            int32_t ebx_2 = edx_2
            void* eax_3 = eax_2
            
            do
                i += 2
                *(var_38_1 + (ebx_2 << 1)) = zx.w(*(eax_3 + arg1))
                *(var_38_1 + (ebx_2 << 1) + 2) = zx.w(*(eax_3 + arg1 + 2))
                *(var_38_1 + (ebx_2 << 1) + 0x100) = zx.w(*(eax_3 + arg1 + 1))
                *(var_38_1 + (ebx_2 << 1) + 0x102) = zx.w(*(eax_3 + arg1 + 1))
                *(var_38_1 + (ebx_2 << 1) + 0x200) = zx.w(*(eax_3 + arg1 + 3))
                uint16_t edi_7 = zx.w(*(eax_3 + arg1 + 3))
                eax_3 += 4
                *(var_38_1 + (ebx_2 << 1) + 0x202) = edi_7
                ebx_2 += 2
            while (i s< arg3 - 1)
        
        if ((arg3 & 1) != 0)
            *(var_38_1 + (ecx_2 << 1) - 2) = zx.w(*(ebp_1 + arg1 - 2))
            *(var_38_1 + (ecx_2 << 1) + 0xfe) = zx.w(*(ebp_1 + arg1 - 1))
            *(var_38_1 + (ecx_2 << 1) + 0x1fe) = zx.w(*(ebp_1 + arg1 - 3))
            i = arg3
        
        if (i s< 0x10)
            void* ebx_6 = var_38_1 + var_1c_1
            void* ebx_8 = var_38_1 + ((i + edx_2) << 1)
            int32_t i_1 = i
            
            do
                i_1 += 1
                *ebx_8 = *(ebx_6 + (arg3 << 1) - 2)
                *(ebx_8 + 0x100) = *(ebx_6 + (arg3 << 1) + 0xfe)
                *(ebx_8 + 0x200) = *(ebx_6 + (arg3 << 1) + 0x1fe)
                ebx_8 += 2
            while (i_1 s< 0x10)
        
        eax_2 += arg2
        edx_2 += 0x10
        ecx_2 += 0x10
        ebp_1 += arg2
        i_2 = i_4 + 1
        var_1c_1 += 0x20
        i_4 = i_2
    while (i_2 s< arg4)
    
    ebp = var_38_1

if (i_2 s< 8)
    void* eax_6 = ebp + (i_2 << 5)
    
    do
        int16_t edi_14 = *(eax_6 + 0x1fc)
        int16_t esi_10 = *(eax_6 - 2)
        *eax_6 = *(eax_6 - 0x20)
        int16_t ecx_5 = *(eax_6 + 0xfe)
        *(eax_6 + 0x100) = *(eax_6 + 0xe0)
        i_2 += 1
        *(eax_6 + 0x200) = *(eax_6 + 0x1e0)
        *(eax_6 + 2) = *(eax_6 - 0x1e)
        *(eax_6 + 0x102) = *(eax_6 + 0xe2)
        *(eax_6 + 0x202) = *(eax_6 + 0x1e2)
        *(eax_6 + 4) = *(eax_6 - 0x1c)
        *(eax_6 + 0x104) = *(eax_6 + 0xe4)
        *(eax_6 + 0x204) = *(eax_6 + 0x1e4)
        *(eax_6 + 6) = *(eax_6 - 0x1a)
        *(eax_6 + 0x106) = *(eax_6 + 0xe6)
        *(eax_6 + 0x206) = *(eax_6 + 0x1e6)
        *(eax_6 + 8) = *(eax_6 - 0x18)
        *(eax_6 + 0x108) = *(eax_6 + 0xe8)
        *(eax_6 + 0x208) = *(eax_6 + 0x1e8)
        *(eax_6 + 0xa) = *(eax_6 - 0x16)
        *(eax_6 + 0x10a) = *(eax_6 + 0xea)
        *(eax_6 + 0x20a) = *(eax_6 + 0x1ea)
        *(eax_6 + 0xc) = *(eax_6 - 0x14)
        *(eax_6 + 0x10c) = *(eax_6 + 0xec)
        *(eax_6 + 0x20c) = *(eax_6 + 0x1ec)
        *(eax_6 + 0xe) = *(eax_6 - 0x12)
        *(eax_6 + 0x10e) = *(eax_6 + 0xee)
        *(eax_6 + 0x20e) = *(eax_6 + 0x1ee)
        *(eax_6 + 0x10) = *(eax_6 - 0x10)
        *(eax_6 + 0x110) = *(eax_6 + 0xf0)
        *(eax_6 + 0x210) = *(eax_6 + 0x1f0)
        *(eax_6 + 0x12) = *(eax_6 - 0xe)
        *(eax_6 + 0x112) = *(eax_6 + 0xf2)
        *(eax_6 + 0x212) = *(eax_6 + 0x1f2)
        *(eax_6 + 0x14) = *(eax_6 - 0xc)
        *(eax_6 + 0x114) = *(eax_6 + 0xf4)
        *(eax_6 + 0x214) = *(eax_6 + 0x1f4)
        *(eax_6 + 0x16) = *(eax_6 - 0xa)
        *(eax_6 + 0x116) = *(eax_6 + 0xf6)
        *(eax_6 + 0x216) = *(eax_6 + 0x1f6)
        *(eax_6 + 0x18) = *(eax_6 - 8)
        *(eax_6 + 0x118) = *(eax_6 + 0xf8)
        *(eax_6 + 0x218) = *(eax_6 + 0x1f8)
        *(eax_6 + 0x1a) = *(eax_6 - 6)
        *(eax_6 + 0x11a) = *(eax_6 + 0xfa)
        *(eax_6 + 0x21a) = *(eax_6 + 0x1fa)
        *(eax_6 + 0x1c) = *(eax_6 - 4)
        *(eax_6 + 0x11c) = *(eax_6 + 0xfc)
        int16_t edx_48 = *(eax_6 + 0x1fe)
        *(eax_6 + 0x21c) = edi_14
        *(eax_6 + 0x1e) = esi_10
        *(eax_6 + 0x11e) = ecx_5
        *(eax_6 + 0x21e) = edx_48
        eax_6 += 0x20
    while (i_2 s< 8)

int32_t edx_49 = 0
int32_t i_3

for (i_3 = 0; i_3 s< 0x80; i_3 += 0x10)
    void* j = ebp + (i_3 << 1)
    void* esi_12 = ebp + (i_3 << 1)
    int16_t* edi_16 = arg5 + (edx_49 << 1)
    
    do
        *edi_16 = *esi_12 - 0x80
        edi_16[0x40] = *(esi_12 + 0x10) - 0x80
        edi_16[0x80] = ((sx.d(*(j + 0x100)) + sx.d(*(j + 0x102)) + 1) s>> 1).w - 0x80
        edi_16[0xc0] = ((sx.d(*(j + 0x200)) + sx.d(*(j + 0x202)) + 1) s>> 1).w - 0x80
        edi_16 = &edi_16[1]
        esi_12 += 2
        j += 4
    while (ebp + (i_3 << 1) + 0x20 s> j)
    
    edx_49 += 8

return i_3
