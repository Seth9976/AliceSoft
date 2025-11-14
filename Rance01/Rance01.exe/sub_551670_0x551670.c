// 函数: sub_551670
// 地址: 0x551670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ebx_1 = arg1[1] u>> 2
int32_t ebx_2 = ebx_1 - 1
int32_t* result

if (ebx_1 - 1 s>= 0)
    int32_t temp2_1
    
    do
        result = arg1[1]
        
        if (ebx_2 u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *arg1
        
        enum MESSAGEBOX_RESULT edi_1 = result[ebx_2]
        void* esi_1 = arg1[5]
        
        if (sub_552ff0(esi_1, edi_1).b == 0)
            result.b = 0
            return result
        
        if (sub_552ef0(esi_1, edi_1).b == 0)
            result.b = 0
            return result
        
        temp2_1 = ebx_2
        ebx_2 -= 1
    while (temp2_1 - 1 s>= 0)

result.b = 1
return result
