// 函数: sub_5bf940
// 地址: 0x5bf940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0
int32_t var_8 = 0
int32_t eax
int32_t ecx
int32_t edx
int32_t* result = _calloc(eax, edx, ecx, 1, 0xb18)
void* ecx_1 = *(arg1 + 0x1c)
*result = sub_5b4d20(0x18, arg2)
result[1] = sub_5b4d20(0x18, arg2)
result[2] = sub_5b4d20(0x18, arg2) + 1
result[3] = sub_5b4d20(6, arg2) + 1
int32_t eax_9 = sub_5b4d20(8, arg2)
result[5] = eax_9

if (eax_9 s>= 0)
    if (result[3] s> 0)
        arg1 = &result[6]
        
        do
            uint32_t j_1 = sub_5b4d20(3, arg2)
            int32_t eax_11 = sub_5b4d20(1, arg2)
            
            if (eax_11 s< 0)
                goto label_5bfad1
            
            if (eax_11 != 0)
                int32_t eax_12 = sub_5b4d20(5, arg2)
                
                if (eax_12 s< 0)
                    goto label_5bfad1
                
                j_1 |= eax_12 * 8
            
            int32_t eax_16 = 0
            *arg1 = j_1
            uint32_t j = j_1
            
            if (j_1 != 0)
                do
                    eax_16 += j & 1
                    j u>>= 1
                while (j != 0)
            
            var_8 += eax_16
            arg1 += 4
            i += 1
        while (i s< result[3])
    
    int32_t ebp_1 = var_8
    int32_t esi_1 = 0
    
    if (ebp_1 s> 0)
        void* ebp = &result[0x46]
        
        do
            int32_t eax_17 = sub_5b4d20(8, arg2)
            
            if (eax_17 s< 0)
                goto label_5bfad1
            
            *ebp = eax_17
            esi_1 += 1
            ebp += 4
        while (esi_1 s< var_8)
        
        ebp_1 = var_8
    
    int32_t edi_1 = *(ecx_1 + 0x18)
    
    if (result[5] s< edi_1)
        if (ebp_1 s> 0)
            void* edx_4 = &result[0x46]
            int32_t ecx_3 = 0
            
            do
                int32_t eax_18 = *edx_4
                
                if (eax_18 s>= edi_1)
                    goto label_5bfad1
                
                if (*(*(ecx_1 + (eax_18 << 2) + 0x720) + 0xc) == 0)
                    goto label_5bfad1
                
                ecx_3 += 1
                edx_4 += 4
            while (ecx_3 s< ebp_1)
        
        int32_t* eax_21 = *(ecx_1 + (result[5] << 2) + 0x720)
        int32_t i_1 = *eax_21
        int32_t ecx_4 = 1
        
        if (i_1 s>= 1)
            for (; i_1 s> 0; i_1 -= 1)
                ecx_4 *= result[3]
                
                if (ecx_4 s> eax_21[1])
                    goto label_5bfad1
            
            result[4] = ecx_4
            return result

label_5bfad1:
sub_6bc670(result, 0, 0xb18)
__free_base(result)
return 0
