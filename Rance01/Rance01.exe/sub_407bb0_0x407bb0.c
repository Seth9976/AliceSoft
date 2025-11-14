// 函数: sub_407bb0
// 地址: 0x407bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(data_797d2c + 0x30)
int32_t var_8 = arg1
int32_t* result_1
sub_42e070(esi + 0x294, &result_1, &var_8)
int32_t* result = result_1

if (result != *(esi + 0x298))
    void* ecx_2 = result[4]
    
    if (ecx_2 != 0)
        int32_t edi_1
        
        if (arg3 s<= 0)
            edi_1 = 0
        else
            edi_1 = 0xff
            
            if (arg3 s<= 0xff)
                edi_1 = arg3
        
        int32_t esi_1
        
        if (arg4 s<= 0)
            esi_1 = 0
        else
            esi_1 = 0xff
            
            if (arg4 s<= 0xff)
                esi_1 = arg4
        
        int32_t edx
        
        if (arg5 s<= 0)
            edx = 0
        else
            edx = arg5
            
            if (arg5 s> 0xff)
                edx = 0xff
        
        *(ecx_2 + 0x98) = edi_1
        *(ecx_2 + 0x9c) = esi_1
        *(ecx_2 + 0xa0) = edx
        *(ecx_2 + 0xa4) = 0xff
        int32_t eax_3
        eax_3.b = 1
        return 1

result.b = 0
return result
