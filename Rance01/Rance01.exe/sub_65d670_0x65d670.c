// 函数: sub_65d670
// 地址: 0x65d670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    int32_t* var_c = arg1
    void* esi_1 = *(data_797d2c + 0x30)
    int32_t* var_10
    sub_42e070(esi_1 + 0x294, &var_10, &var_c)
    arg1 = var_10
    
    if (arg1 != *(esi_1 + 0x298))
        arg1 = arg1[4]
        
        if (arg1 != 0)
            int32_t* ebp_1 = arg1[0x33]
            
            if (ebp_1 != 0)
                void* edi_2 = (*(*ebp_1 + 8))(0, 0)
                int32_t eax_5 = (*(*ebp_1 + 0x10))()
                int32_t ebx = (*(*ebp_1 + 0x14))()
                int32_t var_8 = ebx
                int32_t* eax_9 = (*(*ebp_1 + 0x18))()
                void* edx_5 = *ebp_1
                var_10 = eax_9
                uint32_t esi_5 = ((*(edx_5 + 0x10))() * var_10) u>> 3
                void* ebp_2 = arg2
                int32_t eax_14 = (*(*ebp_1 + 0x1c))() - esi_5
                sub_657be0(ebp_2 + 0x78, ebx, eax_5)
                int32_t eax_16 = 0
                int32_t var_14 = 0
                
                if (ebx != 0)
                    do
                        int32_t* esi_7 = nullptr
                        var_c = nullptr
                        
                        if (eax_5 u> 0)
                            do
                                char edx_7 = *edi_2
                                ebx.b = *(edi_2 + 1)
                                arg2.b = *(edi_2 + 2)
                                edi_2 += 3
                                char ecx_10 = 0xff
                                
                                if (var_10 == 0x20)
                                    ecx_10 = *edi_2
                                    edi_2 += 1
                                
                                if (*(ebp_2 + 0x98) != 0 && eax_16 u< *(ebp_2 + 0x8c)
                                        && esi_7 u< *(ebp_2 + 0x88))
                                    char* eax_20 = *(ebp_2 + 0x94) * esi_7
                                        + *(ebp_2 + 0x90) * var_14 + *(ebp_2 + 0x78)
                                    esi_7 = var_c
                                    *eax_20 = edx_7
                                    eax_20[1] = ebx.b
                                    eax_20[2] = arg2.b
                                    eax_20[3] = ecx_10
                                    eax_16 = var_14
                                
                                esi_7 += 1
                                var_c = esi_7
                            while (esi_7 u< eax_5)
                            
                            ebx = var_8
                        
                        edi_2 += eax_14
                        eax_16 += 1
                        var_14 = eax_16
                    while (eax_16 u< ebx)
                
                eax_16.b = 1
                return eax_16

int32_t* esi_2 = *(arg2 + 0x78)
int32_t* ecx_2 = *(arg2 + 0x7c)
__builtin_memset(arg2 + 0x88, 0, 0x11)

if (esi_2 != ecx_2)
    arg1 = ecx_2
    
    if (ecx_2 != ecx_2)
        do
            *esi_2 = *arg1
            arg1 = &arg1[1]
            esi_2 = &esi_2[1]
        while (arg1 != ecx_2)
    
    *(arg2 + 0x7c) = esi_2

arg1.b = 0
return arg1
