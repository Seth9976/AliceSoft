// 函数: sub_5bd3c0
// 地址: 0x5bd3c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t esi = arg3 << 2
__alloca_probe_16(esi)
__alloca_probe_16(esi)
int32_t i = 0
int32_t esi_1 = 0
int32_t var_10 = 0
int32_t __saved_edi

if (arg3 s> 0)
    do
        int32_t eax_4 = arg1
        
        if (esi_1 s>= 2)
            long double x87_r7_1 = fconvert.t(*(eax_4 + (i << 2)))
            void var_2c
            long double x87_r6_1 = fconvert.t(*(&var_2c + (esi_1 << 2)))
            x87_r6_1 - x87_r7_1
            eax_4.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_4:1.b & 0x41) != 0)
                void* var_c_1 = &(&__saved_edi)[esi_1 - 2]
                
                while (i s< *(&var_2c + (esi_1 << 2)) + arg2)
                    if (esi_1 s<= 1)
                        break
                    
                    long double x87_r6_2 = fconvert.t(*(&var_2c + (esi_1 << 2)))
                    long double x87_r5_1 = fconvert.t(*var_c_1)
                    x87_r5_1 - x87_r6_2
                    float* eax_9
                    eax_9.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_9:1.b & 1) != 0)
                        break
                    
                    if (i s>= *var_c_1 + arg2)
                        break
                    
                    void var_30
                    long double x87_r6_3 = fconvert.t(*(&var_30 + (esi_1 << 2)))
                    var_c_1 -= 4
                    esi_1 -= 1
                    x87_r6_3 - x87_r7_1
                    int32_t eax_11
                    eax_11.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_11:1.b & 0x41) == 0)
                        break
            
            eax_4 = arg1
        
        long double x87_r7_2 = fconvert.t(*(eax_4 + (i << 2)))
        (&__saved_edi)[esi_1] = i
        (&__saved_edi)[esi_1] = fconvert.s(x87_r7_2)
        i += 1
        esi_1 += 1
    while (i s< arg3)

int32_t ebx_2 = 0

if (esi_1 s> 0)
    int32_t __saved_esi
    int32_t* ecx = &__saved_esi
    int32_t eax_12 = 0
    int32_t* var_18_1 = &__saved_esi
    int32_t var_14_2 = eax_12
    
    while (true)
        bool p_1
        
        if (ebx_2 s< esi_1 - 1)
            long double x87_r7_3 = fconvert.t(*(ecx + eax_12))
            long double x87_r6_4 = fconvert.t((&__saved_edi)[ebx_2])
            x87_r6_4 - x87_r7_3
            eax_12.w = (x87_r6_4 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_3 ? 1 : 0) << 0xe
            p_1 = unimplemented  {test ah, 0x5}
        
        int32_t ecx_1
        
        if (ebx_2 s>= esi_1 - 1 || p_1)
            ecx_1 = ecx[-1] + arg2 + 1
        else
            ecx_1 = *ecx
        
        int32_t var_c_2 = ecx_1
        
        if (ecx_1 s> arg3)
            ecx_1 = arg3
            var_c_2 = ecx_1
        
        if (var_10 s< ecx_1)
            if (ecx_1 - var_10 s>= 4)
                int32_t i_2 = ((ecx_1 - var_10 - 4) u>> 2) + 1
                void* eax_18 = arg1 + (var_10 << 2) + 8
                var_10 += i_2 << 2
                int32_t i_1
                
                do
                    eax_18 += 0x10
                    i_1 = i_2
                    i_2 -= 1
                    *(eax_18 - 0x18) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                    *(eax_18 - 0x14) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                    *(eax_18 - 0x10) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                    *(eax_18 - 0xc) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                while (i_1 != 1)
                ecx_1 = var_c_2
            
            if (var_10 s< ecx_1)
                int32_t ecx_6 = ecx_1 - var_10
                int32_t ecx_7
                int32_t edi_6
                edi_6, ecx_7 = __memfill_u32(arg1 + (var_10 << 2), 
                    fconvert.s(fconvert.t((&__saved_edi)[ebx_2])), ecx_6)
                var_10 += ecx_6
        
        var_18_1 = &var_18_1[1]
        ebx_2 += 1
        
        if (ebx_2 s>= esi_1)
            break
        
        eax_12 = var_14_2
        ecx = var_18_1

sub_6b4885(eax_1 ^ &__saved_ebp)
