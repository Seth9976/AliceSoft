// 函数: sub_5fb190
// 地址: 0x5fb190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1
enum MESSAGEBOX_RESULT eax = *(ebx + 0x64)

if (eax != *(ebx + 0x68))
    int32_t esi_1 = *(ebx + 0x78)
    int32_t eax_2
    
    if (esi_1 != 0)
        int32_t eax_3 = *(ebx + 0x74)
        
        if (eax_3 != 0xffffffff)
            eax_2 = sub_5f9f40(eax_3)
        else
            eax_2 = 0
    else
        eax_2 = 0
    
    int32_t arg_14
    int32_t ebp_1 = arg_14
    
    if (eax_2 != ebp_1)
        eax = sub_5e7a10(ebx + 0x74, ebp_1, arg3, 0xff, 0xff, 0xff, 0)
    else
        int32_t eax_4
        
        if (esi_1 != 0)
            int32_t eax_5 = *(ebx + 0x74)
            
            if (eax_5 != 0xffffffff)
                eax_4 = sub_5f9f90(eax_5)
            else
                eax_4 = 0
        else
            eax_4 = 0
        
        if (eax_4 != arg3)
            eax = sub_5e7a10(ebx + 0x74, ebp_1, arg3, 0xff, 0xff, 0xff, 0)
        else
            int32_t var_20_1 = 0
            int32_t var_24_1 = 0xff
            int32_t var_28_1 = 0xff
            int32_t var_2c_1 = 0xff
            int32_t var_30_1 = arg3
            int32_t var_34_1 = ebp_1
            int32_t var_38_1 = 0
            int32_t var_3c_1 = 0
            eax = sub_5e8e30(ebx + 0x74)
    
    int32_t arg_8
    int32_t arg_c
    
    if (*(ebx + 0x78) != 0)
        int32_t* ecx_2 = *(ebx + 0x74)
        
        if (ecx_2 != 0xffffffff)
            eax = sub_409460(ecx_2, arg_8, arg_c)
    
    int32_t* esi_3 = *(ebx + 0x64)
    
    if (esi_3 != *(ebx + 0x68))
        while (true)
            int32_t* edx_3 = *(ebx + 0x50)
            void* edi_2 = arg1
            int32_t eax_6 = *(edi_2 + 0x54)
            int32_t ebp_2 = 0
            int32_t* ebx_1 = edx_3
            arg_c = 0
            int32_t* var_8_1 = edx_3
            
            if (ebx_1 != eax_6)
                do
                    int32_t* eax_7 = *ebx_1
                    int32_t ecx_3
                    
                    if (eax_7[1] != 0)
                        int32_t eax_8 = *eax_7
                        
                        if (eax_8 != 0xffffffff)
                            arg_8 = eax_8
                            void* edi_3 = *(data_797d2c + 0x30)
                            int32_t* var_c
                            sub_42e070(edi_3 + 0x294, &var_c, &arg_8)
                            int32_t* eax_11 = var_c
                            void* eax_12
                            
                            if (eax_11 != *(edi_3 + 0x298))
                                eax_12 = eax_11[4]
                            
                            int32_t eax_13
                            
                            if (eax_11 != *(edi_3 + 0x298) && eax_12 != 0)
                                eax_13 = *(eax_12 + 0x14)
                            else
                                eax_13 = 0
                            
                            edx_3 = var_8_1
                            ecx_3 = eax_13
                        else
                            ecx_3 = 0
                    else
                        ecx_3 = 0
                    
                    int32_t eax_16 = (ebx_1 - edx_3) s>> 2
                    
                    if (eax_16 s< *esi_3)
                        ebp_2 += arg2 + ecx_3
                    
                    arg_c += ecx_3 + arg2
                    
                    if (eax_16 == esi_3[1])
                        break
                    
                    ebx_1 = &ebx_1[1]
                while (ebx_1 != eax_6)
                
                edi_2 = arg1
            
            int32_t* eax_17 = &arg_14
            
            if (arg_14 s>= arg_c)
                eax_17 = &arg_c
            
            int32_t var_20_4 = 0xff
            int32_t var_24_2 = esi_3[5]
            int32_t var_28_2 = esi_3[4]
            int32_t var_2c_2 = esi_3[3]
            int32_t var_30_3 = arg3
            int32_t var_34_3 = *eax_17 - ebp_2
            int32_t var_38_2 = 0
            int32_t var_3c_2 = ebp_2
            eax = sub_5e8e30(edi_2 + 0x74)
            esi_3 = &esi_3[6]
            
            if (esi_3 == *(edi_2 + 0x68))
                break
            
            ebx = arg1
else
    int32_t edi = *(ebx + 0x74)
    
    if (edi != 0xffffffff)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = sub_409390(edi)
        *(ebx + 0x74) = 0xffffffff
        return eax_1

return eax
