// 函数: sub_5a69b0
// 地址: 0x5a69b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_18
int32_t eax_1 = data_78c474 ^ &var_18
int128_t* eax_2 = arg4
int128_t* var_14 = eax_2

if (arg3 != 0)
    if ((*(arg3 + 0x70) & 0x40) == 0)
        sub_5afaf0(arg3)
    
    eax_2.b = *(arg3 + 0x13c)
    uint32_t ecx = *(arg3 + 0xf8)
    char var_8_1 = *(arg3 + 0x13b)
    char var_6_1 = *(arg3 + 0x13f)
    uint32_t edx_1
    edx_1.b = *(arg3 + 0x13e)
    char var_7_1 = eax_2.b
    eax_2.b = edx_1.b
    char var_5_1 = eax_2.b
    uint32_t var_10 = ecx
    uint32_t eax_4 = zx.d(eax_2.b)
    uint32_t eax_6
    
    if (eax_2.b u< 8)
        eax_6 = (eax_4 * ecx + 7) u>> 3
    else
        eax_6 = (eax_4 u>> 3) * ecx
    
    if (*(arg3 + 0x138) != 0 && (*(arg3 + 0x74) & 2) != 0)
        uint32_t eax_9 = zx.d(*(arg3 + 0x139))
        
        if (eax_9 u<= 5)
            switch (eax_9)
                case 0
                    if ((*(arg3 + 0xfc) & 7) != 0)
                        goto label_5a6a73
                case 1
                    if ((*(arg3 + 0xfc) & 7) != 0 || *(arg3 + 0xe4) u< 5)
                        int128_t* eax_13 = sub_5af8b0(arg3, edx_1, ecx)
                        sub_6b4885(eax_1 ^ &var_18)
                        return eax_13
                case 2
                    if (((*(arg3 + 0xfc)).b & 7) != 4)
                        int128_t* eax_16 = sub_5af8b0(arg3, edx_1, ecx)
                        sub_6b4885(eax_1 ^ &var_18)
                        return eax_16
                case 3
                    if ((*(arg3 + 0xfc) & 3) != 0 || *(arg3 + 0xe4) u< 3)
                        int128_t* eax_18 = sub_5af8b0(arg3, edx_1, ecx)
                        sub_6b4885(eax_1 ^ &var_18)
                        return eax_18
                case 4
                    if (((*(arg3 + 0xfc)).b & 3) != 2)
                        int128_t* eax_21 = sub_5af8b0(arg3, edx_1, ecx)
                        sub_6b4885(eax_1 ^ &var_18)
                        return eax_21
                case 5
                    if ((*(arg3 + 0xfc) & 1) != 0 || *(arg3 + 0xe4) u< 2)
                        int128_t* eax_23 = sub_5af8b0(arg3, edx_1, ecx)
                        sub_6b4885(eax_1 ^ &var_18)
                        return eax_23
        else if ((*(arg3 + 0xfc) & 1) == 0)
        label_5a6a73:
            int128_t* eax_11 = sub_5af8b0(arg3, edx_1, ecx)
            sub_6b4885(eax_1 ^ &var_18)
            return eax_11
    
    if ((*(arg3 + 0x6c) & 4) == 0)
        sub_5a5c60(arg3, "Invalid attempt to read row data")
        noreturn
    
    *(arg3 + 0x84) = *(arg3 + 0x108)
    uint32_t eax_26 = zx.d(edx_1.b)
    uint32_t eax_28
    
    if (edx_1.b u< 8)
        eax_28 = (eax_26 * ecx + 7) u>> 3
    else
        eax_28 = (eax_26 u>> 3) * ecx
    
    *(arg3 + 0x88) = eax_28 + 1
    
    while (true)
        if (*(arg3 + 0x7c) == 0)
            if (*(arg3 + 0x120) == 0)
                uint32_t i
                
                do
                    sub_5ab650(arg3, 0)
                    i = sub_5ab490(arg3)
                    *(arg3 + 0x120) = i
                    
                    if (*(arg3 + 0x100) != 0x49444154)
                        sub_5a5c60(arg3, "Not enough image data")
                        noreturn
                while (i == 0)
            
            int32_t eax_32 = *(arg3 + 0xb4)
            int32_t ecx_13 = *(arg3 + 0x120)
            int32_t edi_1 = *(arg3 + 0xb0)
            *(arg3 + 0x7c) = eax_32
            *(arg3 + 0x78) = edi_1
            
            if (eax_32 u> ecx_13)
                *(arg3 + 0x7c) = ecx_13
            
            int32_t eax_33 = *(arg3 + 0x54)
            int32_t ebp_1 = *(arg3 + 0x7c)
            
            if (eax_33 == 0)
                sub_5a5c60(arg3, "Call to NULL read function")
                noreturn
            
            char* ecx_14
            void* edx_2
            edx_2, ecx_14 = eax_33(arg3, edi_1, ebp_1)
            int32_t var_2c_2 = edi_1
            void* var_30_3 = arg3
            sub_5a3fe0(ebp_1, edx_2, ecx_14)
            *(arg3 + 0x120) -= *(arg3 + 0x7c)
        
        uint32_t eax_35 = sub_5a0bd0(arg3 + 0x78, 1)
        
        if (eax_35 == 1)
            if (*(arg3 + 0x88) != 0 || *(arg3 + 0x7c) != 0 || *(arg3 + 0x120) != 0)
                if ((*(arg3 + 0x70) & 0x800000) == 0)
                    sub_5a5c60(arg3, "Extra compressed data")
                    noreturn
                
                sub_5a5de0("Extra compressed data", arg3)
            
            *(arg3 + 0x6c) |= 8
            *(arg3 + 0x70) |= 0x20
        else
            if (eax_35 != 0)
                char* eax_46 = *(arg3 + 0x90)
                
                if (eax_46 == 0)
                    eax_46 = "Decompression error"
                
                sub_5a5c60(arg3, eax_46)
                noreturn
            
            if (*(arg3 + 0x88) != eax_35)
                continue
        
        char* ecx_16 = *(arg3 + 0x108)
        eax_35.b = *ecx_16
        
        if (eax_35.b != 0)
            if (eax_35.b u>= 5)
                sub_5a5c60(arg3, "bad adaptive filter value")
                noreturn
            
            int32_t edx_5 = *(arg3 + 0x104) + 1
            uint32_t edi_2 = zx.d(eax_35.b)
            
            if (*(arg3 + 0x2b4) == 0)
                sub_5af860(arg3)
            
            if (edi_2 - 1 u<= 3)
                (*(arg3 + (edi_2 << 2) + 0x2b0))(&var_10, &ecx_16[1], edx_5)
        
        uint32_t ecx_18
        int32_t edx_8
        ecx_18, edx_8 = sub_6c02a0(*(arg3 + 0x104), *(arg3 + 0x108), eax_6 + 1)
        
        if ((*(arg3 + 0x258) & 4) != 0 && *(arg3 + 0x25c) == 0x40)
            ecx_18, edx_8 = sub_5ab2e0(&var_10, edx_8, *(arg3 + 0x108) + 1)
        
        if (*(arg3 + 0x74) != 0)
            ecx_18, edx_8 = sub_5a8540(arg3, &var_10)
        
        char eax_40 = *(arg3 + 0x143)
        
        if (eax_40 == 0)
            *(arg3 + 0x143) = var_5_1
            
            if (var_5_1 u> *(arg3 + 0x142))
                sub_5a5c60(arg3, "sequential row overflow")
                noreturn
        else if (eax_40 != var_5_1)
            sub_5a5c60(arg3, "internal sequential row size calculation error")
            noreturn
        
        int32_t eax_50
        
        if (*(arg3 + 0x138) != 0)
            eax_50 = *(arg3 + 0x74)
        
        if (*(arg3 + 0x138) == 0 || (eax_50.b & 2) == 0)
            if (var_14 != 0)
                ecx_18, edx_8 = sub_5aece0(arg3, var_14, 0xffffffff)
        else
            ecx_18.b = *(arg3 + 0x139)
            
            if (ecx_18.b u< 6)
                ecx_18, edx_8 =
                    sub_5af1d0(eax_50, &var_10, *(arg3 + 0x108) + 1, zx.d(ecx_18.b), eax_50)
            
            if (var_14 != 0)
                ecx_18, edx_8 = sub_5aece0(arg3, var_14, 0)
        
        sub_5af8b0(arg3, edx_8, ecx_18)
        eax_2 = *(arg3 + 0x1b4)
        
        if (eax_2 != 0)
            eax_2 = eax_2(arg3, *(arg3 + 0xfc), zx.d(*(arg3 + 0x139)))
        
        break

sub_6b4885(eax_1 ^ &var_18)
return eax_2
