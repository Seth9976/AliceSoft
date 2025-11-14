// 函数: sub_6da7e0
// 地址: 0x6da7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_840[0x9]
int16_t (* eax)[0x9] = &var_840
int32_t i_1 = 0

if (arg4 s> 0)
    void* ecx_1 = nullptr
    int32_t esi_1 = 0
    int32_t edi_1 = 0
    int16_t (* var_2c_1)[0x9] = &var_840
    
    do
        int32_t i = 0
        
        if (arg3 s> 0)
            void* ebp_1 = ecx_1
            int32_t ebx_2 = esi_1
            int32_t i_3 = 0
            int32_t esi_2 = arg1
            
            do
                int32_t eax_4 = sx.d((neg.d(zx.d(*(ebp_1 + esi_2)))).w + 0xff)
                int32_t edx_3 = sx.d((neg.d(zx.d(*(ebp_1 + esi_2 + 1)))).w + 0xff)
                int32_t ecx_5 = sx.d((neg.d(zx.d(*(ebp_1 + esi_2 + 2)))).w + 0xff)
                int16_t edi_3 = zx.w(*(ebp_1 + esi_2 + 3)) - 0x80
                (*var_2c_1)[ebx_2] = ((eax_4 * 0x4d + edx_3 * 0x96 + ecx_5 * 0x1d - 0x7f80) s>> 8).w
                (*var_2c_1)[ebx_2 + 0x100] =
                    ((eax_4 * 0xffffffd5 + edx_3 * 0xffffffab + (ecx_5 << 7) + 0x80) s>> 8).w
                (*var_2c_1)[ebx_2 + 0x200] =
                    (((eax_4 << 7) + edx_3 * 0xffffff95 + ecx_5 * 0xffffffeb + 0x80) s>> 8).w
                ebp_1 += 4
                (*var_2c_1)[ebx_2 + 0x300] = edi_3
                ebx_2 += 1
                i = i_3 + 1
                i_3 = i
                esi_2 = arg1
            while (i s< arg3)
        
        if (i s< 0x10)
            void* ebp_11 = var_2c_1 + edi_1
            void* ebx_4 = &(*var_2c_1)[i + esi_1]
            
            do
                i += 1
                *ebx_4 = *(ebp_11 + (arg3 << 1) - 2)
                *(ebx_4 + 0x200) = *(ebp_11 + (arg3 << 1) + 0x1fe)
                *(ebx_4 + 0x400) = *(ebp_11 + (arg3 << 1) + 0x3fe)
                *(ebx_4 + 0x600) = *(ebp_11 + (arg3 << 1) + 0x5fe)
                ebx_4 += 2
            while (i s< 0x10)
        
        ecx_1 += arg2
        esi_1 += 0x10
        edi_1 += 0x20
        i_1 += 1
    while (i_1 s< arg4)
    
    eax = var_2c_1

if (i_1 s< 0x10)
    int32_t ecx_7 = i_1 << 4
    void* j_1 = &(*eax)[i_1 * 0x10]
    
    do
        void* j = j_1
        void* ebp_14 = &(*eax)[ecx_7]
        
        do
            *ebp_14 = *(j - 0x20)
            *(ebp_14 + 0x200) = *(j + 0x1e0)
            *(ebp_14 + 0x400) = *(j + 0x3e0)
            int16_t eax_14 = *(j + 0x5e0)
            j += 2
            *(ebp_14 + 0x600) = eax_14
            ebp_14 += 2
        while (j_1 + 0x20 s> j)
        
        ecx_7 += 0x10
        j_1 += 0x20
        i_1 += 1
    while (i_1 s< 0x10)

int32_t edx_9 = 0
int32_t ecx_8 = 0
void* result

for (int32_t i_2 = 0; i_2 s< 0x100; i_2 += 0x20)
    void* ebp_16 = &(*eax)[i_2]
    result = &(*eax)[i_2 + 0x10]
    void* esi_12 = &(*eax)[ecx_8]
    int16_t* edi_10 = arg5 + (edx_9 << 1)
    
    do
        *edi_10 = *esi_12
        edi_10[0x40] = *(esi_12 + 0x10)
        edi_10[0x80] = *(esi_12 + 0x100)
        edi_10[0xc0] = *(esi_12 + 0x110)
        edi_10[0x100] = ((sx.d(*(ebp_16 + 0x200)) + sx.d(*(ebp_16 + 0x202))
            + sx.d(*(ebp_16 + 0x220)) + sx.d(*(ebp_16 + 0x222)) + 2) s>> 2).w
        edi_10[0x140] = ((sx.d(*(ebp_16 + 0x400)) + sx.d(*(ebp_16 + 0x402))
            + sx.d(*(ebp_16 + 0x420)) + sx.d(*(ebp_16 + 0x422)) + 2) s>> 2).w
        ebp_16 += 4
        edi_10[0x180] = *(esi_12 + 0x600)
        edi_10[0x1c0] = *(esi_12 + 0x610)
        edi_10[0x200] = *(esi_12 + 0x700)
        int16_t ecx_26 = *(esi_12 + 0x710)
        esi_12 += 2
        edi_10[0x240] = ecx_26
        edi_10 = &edi_10[1]
    while (result s> ebp_16)
    
    edx_9 += 8
    ecx_8 += 0x10

return result
