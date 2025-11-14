// 函数: sub_587060
// 地址: 0x587060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1[4]
int32_t result = 0xffffffff
int32_t result_1 = 0

if (ebx != 0)
    int32_t edi_1 = arg1[5]
    
    do
        char* edx_1
        
        if (edi_1 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* edx_2
        
        if (edx_1[result_1] u>= 0x81)
            if (edi_1 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
        
        char* edx_3
        
        if (edx_1[result_1] u< 0x81 || *(edx_2 + result_1) u> 0x9f)
            if (edi_1 u< 0x10)
                edx_3 = arg1
            else
                edx_3 = *arg1
        
        if ((edx_1[result_1] u< 0x81 || *(edx_2 + result_1) u> 0x9f) && edx_3[result_1] u< 0xe0)
            int32_t* edx_4
            
            if (edi_1 u< 0x10)
                edx_4 = arg1
            else
                edx_4 = *arg1
            
            if (*(edx_4 + result_1) == 0x5c)
                result = result_1
            
            result_1 += 1
        else
            result_1 += 2
    while (result_1 u< ebx)

return result
