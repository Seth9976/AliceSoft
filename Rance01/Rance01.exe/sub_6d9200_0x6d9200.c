// 函数: sub_6d9200
// 地址: 0x6d9200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t esi
uint32_t var_8 = esi
int16_t var_240[0x9]
int16_t (* result)[0x9] = &var_240
int32_t i_1 = 0

if (arg4 s> 0)
    void* ecx_1 = nullptr
    esi = 0
    int32_t edi_1 = 0
    int16_t (* result_1)[0x9] = &var_240
    
    do
        int32_t i = 0
        
        if (arg3 s> 0)
            void* ebp_1 = ecx_1
            int32_t ebx_2 = esi
            int32_t i_3 = 0
            int32_t esi_1 = arg1
            
            do
                int32_t eax_3 = sx.d((neg.d(zx.d(*(ebp_1 + esi_1)))).w + 0xff)
                int32_t edx_3 = sx.d((neg.d(zx.d(*(ebp_1 + esi_1 + 1)))).w + 0xff)
                int32_t ecx_5 = sx.d((neg.d(zx.d(*(ebp_1 + esi_1 + 2)))).w + 0xff)
                int16_t edi_3 = zx.w(*(ebp_1 + esi_1 + 3)) - 0x80
                (*result_1)[ebx_2] = ((eax_3 * 0x4d + edx_3 * 0x96 + ecx_5 * 0x1d - 0x7f80) s>> 8).w
                (*result_1)[ebx_2 + 0x40] =
                    ((eax_3 * 0xffffffd5 + edx_3 * 0xffffffab + (ecx_5 << 7) + 0x80) s>> 8).w
                (*result_1)[ebx_2 + 0x80] =
                    (((eax_3 << 7) + edx_3 * 0xffffff95 + ecx_5 * 0xffffffeb + 0x80) s>> 8).w
                ebp_1 += 4
                (*result_1)[ebx_2 + 0xc0] = edi_3
                ebx_2 += 1
                i = i_3 + 1
                i_3 = i
                esi_1 = arg1
            while (i s< arg3)
        
        if (i s< 8)
            void* ebp_11 = result_1 + edi_1
            void* ebx_4 = &(*result_1)[i + esi]
            
            do
                i += 1
                *ebx_4 = *(ebp_11 + (arg3 << 1) - 2)
                *(ebx_4 + 0x80) = *(ebp_11 + (arg3 << 1) + 0x7e)
                *(ebx_4 + 0x100) = *(ebp_11 + (arg3 << 1) + 0xfe)
                *(ebx_4 + 0x180) = *(ebp_11 + (arg3 << 1) + 0x17e)
                ebx_4 += 2
            while (i s< 8)
        
        ecx_1 += arg2
        esi += 8
        edi_1 += 0x10
        i_1 += 1
    while (i_1 s< arg4)
    
    result = result_1

if (i_1 s< 8)
    int32_t ecx_8 = i_1 * 8
    void* j_2 = &(*result)[i_1 * 8]
    
    do
        void* j = j_2
        void* ebp_14 = &(*result)[ecx_8]
        
        do
            *ebp_14 = *(j - 0x10)
            *(ebp_14 + 0x80) = *(j + 0x70)
            *(ebp_14 + 0x100) = *(j + 0xf0)
            int16_t eax_13 = *(j + 0x170)
            j += 2
            *(ebp_14 + 0x180) = eax_13
            ebp_14 += 2
        while (j_2 + 0x10 s> j)
        
        ecx_8 += 8
        j_2 += 0x10
        i_1 += 1
    while (i_1 s< 8)

for (int32_t i_2 = 0; i_2 s< 0x40; i_2 += 8)
    int32_t j_1 = i_2
    
    do
        *(arg5 + (j_1 << 1)) = (*result)[j_1]
        *(arg5 + (j_1 << 1) + 0x80) = (*result)[j_1 + 0x40]
        *(arg5 + (j_1 << 1) + 0x100) = (*result)[j_1 + 0x80]
        *(arg5 + (j_1 << 1) + 0x180) = (*result)[j_1 + 0xc0]
        j_1 += 1
    while (i_2 + 8 s> j_1)

return result
