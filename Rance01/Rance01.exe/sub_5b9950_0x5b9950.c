// 函数: sub_5b9950
// 地址: 0x5b9950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_14 = arg1[3]
int32_t* edi_1 = *arg1 + eax_14
int32_t ebx_1 = arg1[2] - eax_14

if (arg1[1] s>= 0)
    if (arg1[5] != 0)
    label_5b99be:
        
        if (arg1[5] + arg1[6] s<= ebx_1)
            int32_t ebp_2 = *(edi_1 + 0x16)
            *(edi_1 + 0x16) = 0
            void* eax_4 = arg1[5]
            int32_t ecx_3 = arg1[6]
            void* var_c_1 = eax_4
            void* var_8_1 = eax_4 + edi_1
            int32_t* var_10 = edi_1
            int32_t var_4_1 = ecx_3
            sub_5b9820(&var_10)
            
            if (ebp_2 != *(edi_1 + 0x16))
                *(edi_1 + 0x16) = ebp_2
                goto label_5b9a3d
            
            int32_t eax_8 = *arg1 + arg1[3]
            
            if (arg2 != 0)
                *arg2 = eax_8
                arg2[1] = arg1[5]
                arg2[2] = arg1[5] + eax_8
                arg2[3] = arg1[6]
            
            int32_t eax_11 = arg1[5] + arg1[6]
            arg1[4] = 0
            arg1[3] += eax_11
            arg1[5] = 0
            arg1[6] = 0
            return eax_11
    else if (ebx_1 s>= 0x1b)
        if (*edi_1 != (*"OggS")[0].d)
        label_5b9a3d:
            arg1[5] = 0
            arg1[6] = 0
            void* ecx_6 = _memchr(edi_1 + 1, 0x4f, ebx_1 - 1)
            
            if (ecx_6 == 0)
                ecx_6 = arg1[2] + *arg1
            
            arg1[3] = ecx_6 - *arg1
            return edi_1 - ecx_6
        
        uint32_t ecx_1 = zx.d(*(edi_1 + 0x1a))
        void* i = nullptr
        
        if (ebx_1 s< ecx_1 + 0x1b)
            return i
        
        if (ecx_1 s> 0)
            int32_t ecx_2 = arg1[6]
            
            do
                ecx_2 += zx.d(*(edi_1 + i + 0x1b))
                arg1[6] = ecx_2
                i += 1
            while (i s< zx.d(*(edi_1 + 0x1a)))
        
        arg1[5] = ecx_1 + 0x1b
        goto label_5b99be

return 0
