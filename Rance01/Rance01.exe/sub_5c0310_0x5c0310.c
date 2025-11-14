// 函数: sub_5c0310
// 地址: 0x5c0310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t* edx = *arg2
int32_t esi = *arg2[4]
int32_t ecx_1 = edx[1]
int32_t edi = edx[2]
int32_t eax_5 = *(arg1 + 0x24) s>> 1

if (ecx_1 s< eax_5)
    eax_5 = ecx_1

int32_t eax_6 = eax_5 - *edx

if (eax_6 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(eax_6), edi)
    __alloca_probe_16(arg4 << 2)
    int32_t esi_1 = 0
    int32_t __saved_edi
    int32_t* var_10_1 = &__saved_edi
    
    if (arg4 s> 0)
        void* edi_3 = ((divs.dp.d(sx.q(temp0_1 + esi - 1), esi) << 2) + 7) & 0xfffffff8
        
        do
            void* edx_6 = arg1
            void* ebx_2 = *(edx_6 + 0x48)
            
            if (ebx_2 + edi_3 s> *(edx_6 + 0x4c))
                if (*(edx_6 + 0x44) != 0)
                    int32_t* eax_14 = sub_6b5c43(8)
                    int32_t edx_4 = *(arg1 + 0x54)
                    *(arg1 + 0x50) += ebx_2
                    eax_14[1] = edx_4
                    *eax_14 = *(arg1 + 0x44)
                    *(arg1 + 0x54) = eax_14
                    edx_6 = arg1
                
                *(edx_6 + 0x4c) = edi_3
                *(arg1 + 0x44) = sub_6b5c43(edi_3)
                *(arg1 + 0x48) = 0
                edx_6 = arg1
            
            void* ecx_4 = *(edx_6 + 0x48)
            void* eax_17 = *(edx_6 + 0x44) + ecx_4
            *(edx_6 + 0x48) = ecx_4 + edi_3
            var_10_1[esi_1] = eax_17
            esi_1 += 1
        while (esi_1 s< arg4)
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (arg2[2] s> 0)
        do
            int32_t ebx_3 = 0
            int32_t var_30_1 = 0
            
            if (temp0_1 s> 0)
                int32_t* var_c_1 = nullptr
                
                do
                    if (i == 0)
                        int32_t edi_4 = 0
                        
                        if (arg4 s> 0)
                            do
                                void* esi_2 = arg2[4]
                                
                                if (*(esi_2 + 8) s<= 0)
                                    goto label_5c056a
                                
                                int32_t eax_19 = sub_5b6470(esi_2, arg1 + 4)
                                
                                if (eax_19 s< 0)
                                    goto label_5c056a
                                
                                int32_t ecx_9 = *(*(esi_2 + 0x18) + (eax_19 << 2))
                                
                                if (ecx_9 == 0xffffffff)
                                    goto label_5c056a
                                
                                if (ecx_9 s>= edx[4])
                                    goto label_5c056a
                                
                                int32_t ecx_10 = *(arg2[7] + (ecx_9 << 2))
                                *(var_10_1[edi_4] + var_c_1) = ecx_10
                                
                                if (ecx_10 == 0)
                                    goto label_5c056a
                                
                                edi_4 += 1
                            while (edi_4 s< arg4)
                            
                            i = i_1
                    
                    int32_t var_20_1 = 0
                    
                    if (esi s> 0)
                        int32_t var_24_1 = ebx_3 * edi
                        
                        while (ebx_3 s< temp0_1)
                            int32_t var_2c_1 = 0
                            
                            if (arg4 s> 0)
                                int32_t* esi_3 = var_10_1
                                int32_t* ebx_5 = arg3 - esi_3
                                int32_t eax_30
                                
                                do
                                    int32_t ecx_13 = *(*(var_c_1 + *esi_3) + (var_20_1 << 2))
                                    
                                    if ((edx[ecx_13 + 6] & 1 << i.b) != 0)
                                        int32_t ecx_15 = *(*(arg2[5] + (ecx_13 << 2)) + (i_1 << 2))
                                        
                                        if (ecx_15 != 0 && arg5(ecx_15, 
                                                *(ebx_5 + esi_3) + ((*edx + var_24_1) << 2), 
                                                arg1 + 4, edi) == 0xffffffff)
                                            goto label_5c056a
                                    
                                    eax_30 = var_2c_1 + 1
                                    esi_3 = &esi_3[1]
                                    var_2c_1 = eax_30
                                while (eax_30 s< arg4)
                                ebx_3 = var_30_1
                                i = i_1
                            
                            var_24_1 += edi
                            int32_t eax_32 = var_20_1 + 1
                            ebx_3 += 1
                            var_20_1 = eax_32
                            var_30_1 = ebx_3
                            
                            if (eax_32 s>= esi)
                                break
                    
                    var_c_1 = &var_c_1[1]
                while (ebx_3 s< temp0_1)
            
            i += 1
            i_1 = i
        while (i s< arg2[2])

label_5c056a:
sub_6b4885(eax_1 ^ &__saved_ebp)
return 0
