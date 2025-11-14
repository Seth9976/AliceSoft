// 函数: sub_417a80
// 地址: 0x417a80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_2 = *(arg1 + 0x74)
int32_t* result_1 = *(arg1 + 0x70)
int32_t* result = result_1
int32_t ebx

if (result == edx_2)
label_417a9f:
    ebx = 0
else
    while (true)
        void* edi_1 = *result
        
        if (*(edi_1 + 0x38) != 0)
            ebx = *(edi_1 + 4)
            break
        
        result = &result[1]
        
        if (result == edx_2)
            goto label_417a9f

if (ebx != arg2)
    result = result_1
    void* edi_2
    
    if (result == edx_2)
    label_417abe:
        edi_2 = *(arg1 + 0x40)
    else
        while (true)
            edi_2 = *result
            
            if (*(edi_2 + 4) == ebx)
                break
            
            result = &result[1]
            
            if (result == edx_2)
                goto label_417abe
    
    for (int32_t* i = *(edi_2 + 0x58); i != *(edi_2 + 0x5c); i = &i[1])
        result = (*(**i + 0x44))(*(edi_2 + 0x68))
    
    *(edi_2 + 0x38) = 0

return result
