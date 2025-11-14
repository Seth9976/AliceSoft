// 函数: sub_6d9b80
// 地址: 0x6d9b80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_840[0x9]
int16_t (* result)[0x9] = &var_840
int32_t i_1 = 0

if (arg4 s> 0)
    void* ecx_1 = nullptr
    int32_t esi_1 = 0
    int32_t edi_1 = 0
    int16_t (* result_1)[0x9] = &var_840
    
    do
        int32_t i = 0
        
        if (arg3 s> 0)
            void* ebp_1 = ecx_1
            int32_t ebx_2 = esi_1
            int32_t i_3 = 0
            int32_t esi_2 = arg1
            
            do
                int32_t eax_3 = sx.d((neg.d(zx.d(*(ebp_1 + esi_2)))).w + 0xff)
                int32_t edx_3 = sx.d((neg.d(zx.d(*(ebp_1 + esi_2 + 1)))).w + 0xff)
                int32_t ecx_5 = sx.d((neg.d(zx.d(*(ebp_1 + esi_2 + 2)))).w + 0xff)
                int16_t edi_3 = zx.w(*(ebp_1 + esi_2 + 3)) - 0x80
                (*result_1)[ebx_2] = ((eax_3 * 0x4d + edx_3 * 0x96 + ecx_5 * 0x1d - 0x7f80) s>> 8).w
                (*result_1)[ebx_2 + 0x80] =
                    ((eax_3 * 0xffffffd5 + edx_3 * 0xffffffab + (ecx_5 << 7) + 0x80) s>> 8).w
                (*result_1)[ebx_2 + 0x100] =
                    (((eax_3 << 7) + edx_3 * 0xffffff95 + ecx_5 * 0xffffffeb + 0x80) s>> 8).w
                ebp_1 += 4
                (*result_1)[ebx_2 + 0x180] = edi_3
                ebx_2 += 1
                i = i_3 + 1
                i_3 = i
                esi_2 = arg1
            while (i s< arg3)
        
        if (i s< 0x10)
            void* ebp_11 = result_1 + edi_1
            void* ebx_4 = &(*result_1)[i + esi_1]
            
            do
                i += 1
                *ebx_4 = *(ebp_11 + (arg3 << 1) - 2)
                *(ebx_4 + 0x100) = *(ebp_11 + (arg3 << 1) + 0xfe)
                *(ebx_4 + 0x200) = *(ebp_11 + (arg3 << 1) + 0x1fe)
                *(ebx_4 + 0x300) = *(ebp_11 + (arg3 << 1) + 0x2fe)
                ebx_4 += 2
            while (i s< 0x10)
        
        ecx_1 += arg2
        esi_1 += 0x10
        edi_1 += 0x20
        i_1 += 1
    while (i_1 s< arg4)
    
    result = result_1

if (i_1 s< 8)
    int32_t ecx_7 = i_1 << 4
    void* j_2 = &(*result)[i_1 * 0x10]
    
    do
        void* j = j_2
        void* ebp_14 = &(*result)[ecx_7]
        
        do
            *ebp_14 = *(j - 0x20)
            *(ebp_14 + 0x100) = *(j + 0xe0)
            *(ebp_14 + 0x200) = *(j + 0x1e0)
            int16_t eax_13 = *(j + 0x2e0)
            j += 2
            *(ebp_14 + 0x300) = eax_13
            ebp_14 += 2
        while (j_2 + 0x20 s> j)
        
        ecx_7 += 0x10
        j_2 += 0x20
        i_1 += 1
    while (i_1 s< 8)

int32_t ecx_8 = 0

for (int32_t i_2 = 0; i_2 s< 0x80; i_2 += 0x10)
    void* j_1 = &(*result)[i_2]
    void* esi_12 = &(*result)[i_2]
    int16_t* edi_10 = arg5 + (ecx_8 << 1)
    
    do
        *edi_10 = *esi_12
        edi_10[0x40] = *(esi_12 + 0x10)
        edi_10[0x80] = ((sx.d(*(j_1 + 0x100)) + sx.d(*(j_1 + 0x102)) + 1) s>> 1).w
        int16_t eax_21 = ((sx.d(*(j_1 + 0x200)) + sx.d(*(j_1 + 0x202)) + 1) s>> 1).w
        j_1 += 4
        edi_10[0xc0] = eax_21
        edi_10[0x100] = *(esi_12 + 0x300)
        int16_t eax_22 = *(esi_12 + 0x310)
        esi_12 += 2
        edi_10[0x140] = eax_22
        edi_10 = &edi_10[1]
    while (&(*result)[i_2 + 0x10] s> j_1)
    
    ecx_8 += 8

return result
