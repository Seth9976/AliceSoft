// 函数: sub_41aec0
// 地址: 0x41aec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg1[4]

if (eax != 0)
    void* ecx = *(eax + 0x34)
    
    if (ecx != 0)
        eax = sub_413820(ecx)
    
    int32_t ebp_1 = *(eax + 8)
    void* ebx_1 = arg1[2]
    void* eax_3 = sub_5f7370(*data_797da0, *(ebx_1 + 4))
    
    if (eax_3 != 0)
        *(*(eax_3 + 0xc) + 0x10) = ebp_1
    
    *(ebx_1 + 8) = ebp_1

int32_t** result = (*(*arg1 + 0x18))()

if (result.b != 0)
    void* ebx_2 = arg1[3]
    
    if (ebx_2 != 0)
        int32_t** result_2 = arg1[9]
        int32_t edi_2 = *(arg1[2] + 4)
        result = result_2
        int32_t* result_1 = result
        int32_t* var_4
        
        if (result s> 0)
            int32_t* ecx_6
            int32_t edx_1
            ecx_6, edx_1 = sub_42e070(ebx_2 + 8, &var_4, &result_1)
            result.b = var_4 != *(ebx_2 + 0xc)
            
            if (result.b != 0)
                int32_t** result_3 = result_2
                int32_t eax_7 = sub_4155a0(ebx_2, edx_1, ecx_6)
                result = sub_5f7370(*data_797da0, edi_2)
                
                if (result != 0)
                    result = sub_5f4030(eax_7, result)
        
        int32_t* ebp_2 = arg1[0xa]
        void* ebx_4 = arg1[3]
        var_4 = ebp_2
        
        if (ebp_2 s> 0)
            int32_t* ecx_11
            int32_t edx_2
            ecx_11, edx_2 = sub_42e070(ebx_4 + 8, &result_1, &var_4)
            result.b = result_1 != *(ebx_4 + 0xc)
            
            if (result.b != 0)
                int32_t* var_1c_4 = ebp_2
                int32_t eax_10 = sub_4155a0(ebx_4, edx_2, ecx_11)
                result = sub_5f7370(*data_797da0, edi_2)
                
                if (result != 0)
                    result[3][0x16] = eax_10
        
        int32_t* ebx_6 = arg1[0xb]
        void* esi_1 = arg1[3]
        var_4 = ebx_6
        
        if (ebx_6 s> 0)
            int32_t edx_4 = sub_42e070(esi_1 + 8, &result_1, &var_4)
            int32_t* result_4 = result_1
            result.b = result_4 != *(esi_1 + 0xc)
            
            if (result.b != 0)
                int32_t* var_1c_6 = ebx_6
                int32_t eax_12 = sub_4155a0(esi_1, edx_4, result_4)
                result = sub_5f7370(*data_797da0, edi_2)
                
                if (result != 0)
                    result = result[3]
                    result[0x8f] = eax_12

return result
