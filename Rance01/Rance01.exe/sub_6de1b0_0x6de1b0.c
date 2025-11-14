// 函数: sub_6de1b0
// 地址: 0x6de1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_e0[0x5]
int16_t (* result)[0x5] = &var_e0
int32_t i_1 = 0

if (arg4 s> 0)
    void* ebx_3 = arg3
    int32_t ecx_2 = 0
    int32_t var_3c_1 = 0
    void* var_50_1 = arg3
    int16_t (* var_18_1)[0x5] = &var_e0
    int32_t i_4 = 0
    void* edx_3 = arg3
    int16_t (* result_1)[0x5] = &var_e0
    int32_t eax = 0
    int32_t i_3
    
    do
        void* i = nullptr
        
        if (arg3 s> 0)
            if (arg3 s>= 5)
                int32_t ebp_6 = ecx_2
                void* eax_1 = eax
                i = nullptr
                
                do
                    i += 4
                    (*result_1)[ebp_6] = zx.w(*(eax_1 + arg1))
                    (*result_1)[ebp_6 + 1] = zx.w(*(eax_1 + arg1 + 1))
                    (*result_1)[ebp_6 + 2] = zx.w(*(eax_1 + arg1 + 2))
                    uint16_t edi_4 = zx.w(*(eax_1 + arg1 + 3))
                    eax_1 += 4
                    (*result_1)[ebp_6 + 3] = edi_4
                    ebp_6 += 4
                while (i s<= arg3 - 5)
            
            void* ebp_8 = i + ecx_2
            void* edx_5 = i + eax
            
            do
                uint16_t eax_2 = zx.w(*(edx_5 + arg1))
                edx_5 += 1
                i += 1
                (*result_1)[ebp_8] = eax_2
                ebp_8 += 1
            while (i s< arg3)
        
        if ((arg3 & 1) != 0)
            (*result_1)[edx_3 - 1] = zx.w(*(ebx_3 + arg1 - 1))
            i = arg3
        
        if (i s< 8)
            void* var_34_2
            
            if (neg.d(i) + 8 s< 5)
                var_34_2 = var_18_1 + arg3 * 2 - 2
            else
                void* ebp_15 = result_1 + var_3c_1
                var_34_2 = ebp_15 + arg3 * 2 - 2
                void* edx_6 = i + ecx_2
                
                do
                    i += 4
                    (*result_1)[edx_6] = *(ebp_15 + (arg3 << 1) - 2)
                    (*result_1)[edx_6 + 1] = *(ebp_15 + (arg3 << 1) - 2)
                    (*result_1)[edx_6 + 2] = *(ebp_15 + (arg3 << 1) - 2)
                    (*result_1)[edx_6 + 3] = *(ebp_15 + (arg3 << 1) - 2)
                    edx_6 += 4
                while (i s< 3)
            
            void* ebp_20 = &(*result_1)[i + ecx_2]
            
            do
                i += 1
                *ebp_20 = *var_34_2
                ebp_20 += 2
            while (i s< 8)
        
        eax += arg2
        ecx_2 += 8
        edx_3 += 8
        ebx_3 += arg2
        i_3 = i_4 + 1
        var_18_1 = &(*var_18_1)[8]
        var_3c_1 += 0x10
        i_4 = i_3
    while (i_3 s< arg4)
    
    i_1 = i_3
    result = result_1

if (i_1 s< 8)
    void* edx_8 = &(*result)[i_1 * 8]
    
    do
        int16_t edi_17 = *(edx_8 - 8)
        int16_t ebp_22 = *(edx_8 - 6)
        *edx_8 = *(edx_8 - 0x10)
        int16_t ebx_8 = *(edx_8 - 4)
        *(edx_8 + 2) = *(edx_8 - 0xe)
        i_1 += 1
        *(edx_8 + 4) = *(edx_8 - 0xc)
        *(edx_8 + 6) = *(edx_8 - 0xa)
        int16_t ecx_10 = *(edx_8 - 2)
        *(edx_8 + 8) = edi_17
        *(edx_8 + 0xa) = ebp_22
        *(edx_8 + 0xc) = ebx_8
        *(edx_8 + 0xe) = ecx_10
        edx_8 += 0x10
    while (i_1 s< 8)

for (int32_t i_2 = 0; i_2 s< 0x40; i_2 += 8)
    *(arg5 + (i_2 << 1)) = (*result)[i_2] - 0x80
    *(arg5 + (i_2 << 1) + 2) = (*result)[i_2 + 1] - 0x80
    *(arg5 + (i_2 << 1) + 4) = (*result)[i_2 + 2] - 0x80
    *(arg5 + (i_2 << 1) + 6) = (*result)[i_2 + 3] - 0x80
    *(arg5 + (i_2 << 1) + 8) = (*result)[i_2 + 4] - 0x80
    *(arg5 + (i_2 << 1) + 0xa) = (*result)[i_2 + 5] - 0x80
    *(arg5 + (i_2 << 1) + 0xc) = (*result)[i_2 + 6] - 0x80
    *(arg5 + (i_2 << 1) + 0xe) = (*result)[i_2 + 7] - 0x80

return result
