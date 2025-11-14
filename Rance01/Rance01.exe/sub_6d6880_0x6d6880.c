// 函数: sub_6d6880
// 地址: 0x6d6880
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
                (*var_24_1)[esi_3] = ((ebx_2 * 0x1d + ebp_2 * 0x96 + ecx_2 * 0x4d - 0x7f80) s>> 8).w
                (*var_24_1)[esi_3 + 0x100] =
                    (((ebx_2 << 7) + ebp_2 * 0xffffffab + ecx_2 * 0xffffffd5 + 0x80) s>> 8).w
                (*var_24_1)[esi_3 + 0x200] =
                    ((ebx_2 * 0xffffffeb + ebp_2 * 0xffffff95 + (ecx_2 << 7) + 0x80) s>> 8).w
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
    void* ecx_6 = &(*eax)[i_1 * 0x10]
    
    do
        int16_t edi_7 = *(ecx_6 + 0x3fc)
        int16_t esi_7 = *(ecx_6 - 2)
        *ecx_6 = *(ecx_6 - 0x20)
        int16_t ebp_4 = *(ecx_6 + 0x1fe)
        *(ecx_6 + 0x200) = *(ecx_6 + 0x1e0)
        i_1 += 1
        *(ecx_6 + 0x400) = *(ecx_6 + 0x3e0)
        *(ecx_6 + 2) = *(ecx_6 - 0x1e)
        *(ecx_6 + 0x202) = *(ecx_6 + 0x1e2)
        *(ecx_6 + 0x402) = *(ecx_6 + 0x3e2)
        *(ecx_6 + 4) = *(ecx_6 - 0x1c)
        *(ecx_6 + 0x204) = *(ecx_6 + 0x1e4)
        *(ecx_6 + 0x404) = *(ecx_6 + 0x3e4)
        *(ecx_6 + 6) = *(ecx_6 - 0x1a)
        *(ecx_6 + 0x206) = *(ecx_6 + 0x1e6)
        *(ecx_6 + 0x406) = *(ecx_6 + 0x3e6)
        *(ecx_6 + 8) = *(ecx_6 - 0x18)
        *(ecx_6 + 0x208) = *(ecx_6 + 0x1e8)
        *(ecx_6 + 0x408) = *(ecx_6 + 0x3e8)
        *(ecx_6 + 0xa) = *(ecx_6 - 0x16)
        *(ecx_6 + 0x20a) = *(ecx_6 + 0x1ea)
        *(ecx_6 + 0x40a) = *(ecx_6 + 0x3ea)
        *(ecx_6 + 0xc) = *(ecx_6 - 0x14)
        *(ecx_6 + 0x20c) = *(ecx_6 + 0x1ec)
        *(ecx_6 + 0x40c) = *(ecx_6 + 0x3ec)
        *(ecx_6 + 0xe) = *(ecx_6 - 0x12)
        *(ecx_6 + 0x20e) = *(ecx_6 + 0x1ee)
        *(ecx_6 + 0x40e) = *(ecx_6 + 0x3ee)
        *(ecx_6 + 0x10) = *(ecx_6 - 0x10)
        *(ecx_6 + 0x210) = *(ecx_6 + 0x1f0)
        *(ecx_6 + 0x410) = *(ecx_6 + 0x3f0)
        *(ecx_6 + 0x12) = *(ecx_6 - 0xe)
        *(ecx_6 + 0x212) = *(ecx_6 + 0x1f2)
        *(ecx_6 + 0x412) = *(ecx_6 + 0x3f2)
        *(ecx_6 + 0x14) = *(ecx_6 - 0xc)
        *(ecx_6 + 0x214) = *(ecx_6 + 0x1f4)
        *(ecx_6 + 0x414) = *(ecx_6 + 0x3f4)
        *(ecx_6 + 0x16) = *(ecx_6 - 0xa)
        *(ecx_6 + 0x216) = *(ecx_6 + 0x1f6)
        *(ecx_6 + 0x416) = *(ecx_6 + 0x3f6)
        *(ecx_6 + 0x18) = *(ecx_6 - 8)
        *(ecx_6 + 0x218) = *(ecx_6 + 0x1f8)
        *(ecx_6 + 0x418) = *(ecx_6 + 0x3f8)
        *(ecx_6 + 0x1a) = *(ecx_6 - 6)
        *(ecx_6 + 0x21a) = *(ecx_6 + 0x1fa)
        *(ecx_6 + 0x41a) = *(ecx_6 + 0x3fa)
        *(ecx_6 + 0x1c) = *(ecx_6 - 4)
        *(ecx_6 + 0x21c) = *(ecx_6 + 0x1fc)
        int16_t ebx_47 = *(ecx_6 + 0x3fe)
        *(ecx_6 + 0x41c) = edi_7
        *(ecx_6 + 0x1e) = esi_7
        *(ecx_6 + 0x21e) = ebp_4
        *(ecx_6 + 0x41e) = ebx_47
        ecx_6 += 0x20
    while (i_1 s< 0x10)

int32_t edx_11 = 0
int32_t ecx_7 = 0
void* result

for (int32_t i_2 = 0; i_2 s< 0x100; i_2 += 0x20)
    void* ebp_6 = &(*eax)[i_2]
    result = &(*eax)[i_2 + 0x10]
    void* esi_9 = &(*eax)[ecx_7]
    int16_t* edi_9 = arg5 + (edx_11 << 1)
    
    do
        *edi_9 = *esi_9
        edi_9[0x40] = *(esi_9 + 0x10)
        edi_9[0x80] = *(esi_9 + 0x100)
        int16_t ecx_11 = *(esi_9 + 0x110)
        esi_9 += 2
        edi_9[0xc0] = ecx_11
        edi_9[0x100] = ((sx.d(*(ebp_6 + 0x200)) + sx.d(*(ebp_6 + 0x202)) + sx.d(*(ebp_6 + 0x220))
            + sx.d(*(ebp_6 + 0x222)) + 2) s>> 2).w
        edi_9[0x140] = ((sx.d(*(ebp_6 + 0x400)) + sx.d(*(ebp_6 + 0x402)) + sx.d(*(ebp_6 + 0x420))
            + sx.d(*(ebp_6 + 0x422)) + 2) s>> 2).w
        edi_9 = &edi_9[1]
        ebp_6 += 4
    while (result s> ebp_6)
    
    edx_11 += 8
    ecx_7 += 0x10

return result
