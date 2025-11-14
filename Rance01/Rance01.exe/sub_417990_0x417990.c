// 函数: sub_417990
// 地址: 0x417990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0x70)
int32_t edx = *(arg1 + 0x74)
int32_t edi
int32_t var_8 = edi
void* ecx
int32_t edi_2

if (result == edx)
label_4179b2:
    ecx = *(arg1 + 0x40)
    edi_2 = arg2
else
    while (true)
        ecx = *result
        edi_2 = arg2
        
        if (*(ecx + 4) == edi_2)
            break
        
        result = &result[1]
        
        if (result == edx)
            goto label_4179b2

if (*(ecx + 1) != 0)
    result = *(ecx + 8)
    *(arg1 + 0x44) = result

if (edi_2 == *(*(arg1 + 0x40) + 4))
    void* ebp_1 = *(*(arg1 + 0x80) + 0x34)
    result = sub_5f7370(*data_797da0, edi_2)
    int32_t* result_2 = result
    
    if (result_2 != 0)
        result = result_2[3]
        int32_t* result_1 = result[0x87]
        
        if (result_1[3] != ebp_1)
            result = result_1
            
            if (result[3] != ebp_1)
                result[3] = ebp_1
            
            int32_t* ecx_3 = result_2[0xc]
            
            if (ecx_3 != 0)
                result = (*(*ecx_3 + 4))()
                result_2[0xc] = 0
            
            if (ebp_1 != 0)
                int32_t* ecx_4 = result_2[0xc]
                
                if (ecx_4 != 0)
                    (*(*ecx_4 + 4))()
                    result_2[0xc] = 0
                
                result = sub_5f9ae0(result_2[0xa], ebp_1)
                result_2[0xc] = result

if (*(arg1 + 0x68) s>= *(arg1 + 0x64))
    result = sub_5f7370(*data_797da0, arg2)
    
    if (result != 0 && *(*(result[3] + 0x21c) + 0xc) != 0 && result[0xc] != 0)
        return (*(*result[0xc] + 8))()

return result
