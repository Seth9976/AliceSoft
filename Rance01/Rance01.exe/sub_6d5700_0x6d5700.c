// 函数: sub_6d5700
// 地址: 0x6d5700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_640[0x9]
int16_t (* eax)[0x9] = &var_640
int32_t i_1 = 0

if (arg4 s> 0)
    int32_t ecx_1 = 0
    int32_t ebx_1 = 0
    int32_t ebp_1 = 0
    int16_t (* var_24_1)[0x9] = &var_640
    
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
                (*var_24_1)[esi_3] = ((ebx_2 * 0x4d + ebp_2 * 0x96 + ecx_2 * 0x1d - 0x7f80) s>> 8).w
                (*var_24_1)[esi_3 + 0x100] =
                    ((ebx_2 * 0xffffffd5 + ebp_2 * 0xffffffab + (ecx_2 << 7) + 0x80) s>> 8).w
                (*var_24_1)[esi_3 + 0x200] =
                    (((ebx_2 << 7) + ebp_2 * 0xffffff95 + ecx_2 * 0xffffffeb + 0x80) s>> 8).w
                esi_3 += 1
                i = i_3 + 1
                i_3 = i
            while (i s< arg3)
        
        if (i s< 0x10)
            void* edi_2 = var_24_1 + ebp_1
            void* esi_6 = &(*var_24_1)[i + ebx_1]
            
            do
                i += 1
                *esi_6 = *(edi_2 + (arg3 << 1) - 2)
                *(esi_6 + 0x200) = *(edi_2 + (arg3 << 1) + 0x1fe)
                *(esi_6 + 0x400) = *(edi_2 + (arg3 << 1) + 0x3fe)
                esi_6 += 2
            while (i s< 0x10)
        
        ecx_1 += arg2
        ebx_1 += 0x10
        ebp_1 += 0x20
        i_1 += 1
    while (i_1 s< arg4)
    
    eax = var_24_1

if (i_1 s< 0x10)
    void* ecx_5 = &(*eax)[i_1 * 0x10]
    
    do
        int16_t edi_8 = *(ecx_5 + 0x3fc)
        int16_t esi_7 = *(ecx_5 - 2)
        *ecx_5 = *(ecx_5 - 0x20)
        int16_t ebp_4 = *(ecx_5 + 0x1fe)
        *(ecx_5 + 0x200) = *(ecx_5 + 0x1e0)
        i_1 += 1
        *(ecx_5 + 0x400) = *(ecx_5 + 0x3e0)
        *(ecx_5 + 2) = *(ecx_5 - 0x1e)
        *(ecx_5 + 0x202) = *(ecx_5 + 0x1e2)
        *(ecx_5 + 0x402) = *(ecx_5 + 0x3e2)
        *(ecx_5 + 4) = *(ecx_5 - 0x1c)
        *(ecx_5 + 0x204) = *(ecx_5 + 0x1e4)
        *(ecx_5 + 0x404) = *(ecx_5 + 0x3e4)
        *(ecx_5 + 6) = *(ecx_5 - 0x1a)
        *(ecx_5 + 0x206) = *(ecx_5 + 0x1e6)
        *(ecx_5 + 0x406) = *(ecx_5 + 0x3e6)
        *(ecx_5 + 8) = *(ecx_5 - 0x18)
        *(ecx_5 + 0x208) = *(ecx_5 + 0x1e8)
        *(ecx_5 + 0x408) = *(ecx_5 + 0x3e8)
        *(ecx_5 + 0xa) = *(ecx_5 - 0x16)
        *(ecx_5 + 0x20a) = *(ecx_5 + 0x1ea)
        *(ecx_5 + 0x40a) = *(ecx_5 + 0x3ea)
        *(ecx_5 + 0xc) = *(ecx_5 - 0x14)
        *(ecx_5 + 0x20c) = *(ecx_5 + 0x1ec)
        *(ecx_5 + 0x40c) = *(ecx_5 + 0x3ec)
        *(ecx_5 + 0xe) = *(ecx_5 - 0x12)
        *(ecx_5 + 0x20e) = *(ecx_5 + 0x1ee)
        *(ecx_5 + 0x40e) = *(ecx_5 + 0x3ee)
        *(ecx_5 + 0x10) = *(ecx_5 - 0x10)
        *(ecx_5 + 0x210) = *(ecx_5 + 0x1f0)
        *(ecx_5 + 0x410) = *(ecx_5 + 0x3f0)
        *(ecx_5 + 0x12) = *(ecx_5 - 0xe)
        *(ecx_5 + 0x212) = *(ecx_5 + 0x1f2)
        *(ecx_5 + 0x412) = *(ecx_5 + 0x3f2)
        *(ecx_5 + 0x14) = *(ecx_5 - 0xc)
        *(ecx_5 + 0x214) = *(ecx_5 + 0x1f4)
        *(ecx_5 + 0x414) = *(ecx_5 + 0x3f4)
        *(ecx_5 + 0x16) = *(ecx_5 - 0xa)
        *(ecx_5 + 0x216) = *(ecx_5 + 0x1f6)
        *(ecx_5 + 0x416) = *(ecx_5 + 0x3f6)
        *(ecx_5 + 0x18) = *(ecx_5 - 8)
        *(ecx_5 + 0x218) = *(ecx_5 + 0x1f8)
        *(ecx_5 + 0x418) = *(ecx_5 + 0x3f8)
        *(ecx_5 + 0x1a) = *(ecx_5 - 6)
        *(ecx_5 + 0x21a) = *(ecx_5 + 0x1fa)
        *(ecx_5 + 0x41a) = *(ecx_5 + 0x3fa)
        *(ecx_5 + 0x1c) = *(ecx_5 - 4)
        *(ecx_5 + 0x21c) = *(ecx_5 + 0x1fc)
        int16_t ebx_49 = *(ecx_5 + 0x3fe)
        *(ecx_5 + 0x41c) = edi_8
        *(ecx_5 + 0x1e) = esi_7
        *(ecx_5 + 0x21e) = ebp_4
        *(ecx_5 + 0x41e) = ebx_49
        ecx_5 += 0x20
    while (i_1 s< 0x10)

int32_t edx_9 = 0
int32_t ecx_6 = 0
void* result

for (int32_t i_2 = 0; i_2 s< 0x100; i_2 += 0x20)
    void* ebp_6 = &(*eax)[i_2]
    result = &(*eax)[i_2 + 0x10]
    void* esi_9 = &(*eax)[ecx_6]
    int16_t* edi_10 = arg5 + (edx_9 << 1)
    
    do
        *edi_10 = *esi_9
        edi_10[0x40] = *(esi_9 + 0x10)
        edi_10[0x80] = *(esi_9 + 0x100)
        int16_t ecx_10 = *(esi_9 + 0x110)
        esi_9 += 2
        edi_10[0xc0] = ecx_10
        edi_10[0x100] = ((sx.d(*(ebp_6 + 0x200)) + sx.d(*(ebp_6 + 0x202)) + sx.d(*(ebp_6 + 0x220))
            + sx.d(*(ebp_6 + 0x222)) + 2) s>> 2).w
        edi_10[0x140] = ((sx.d(*(ebp_6 + 0x400)) + sx.d(*(ebp_6 + 0x402)) + sx.d(*(ebp_6 + 0x420))
            + sx.d(*(ebp_6 + 0x422)) + 2) s>> 2).w
        edi_10 = &edi_10[1]
        ebp_6 += 4
    while (result s> ebp_6)
    
    edx_9 += 8
    ecx_6 += 0x10

return result
