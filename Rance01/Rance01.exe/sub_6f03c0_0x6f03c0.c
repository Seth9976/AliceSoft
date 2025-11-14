// 函数: sub_6f03c0
// 地址: 0x6f03c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg5
int32_t ebp = result[1]
int32_t esi = ebp * 2
int32_t ecx_1 = arg1 + (esi << 3)
int32_t edx_1 = arg2 + (esi << 3)
int32_t ebx_2 = ebp * arg6 + arg4
int32_t edi_1 = result[3]

if (ebp s< edi_1)
    result = arg5[2]
    int32_t var_18_1 = arg3 + (esi << 3)
    
    do
        int32_t esi_3 = *arg5
        int32_t var_20_1 = esi_3
        
        if (esi_3 s< result)
            int32_t edx_2 = esi_3
            
            do
                result.b = *(ecx_1 + (edx_2 << 1))
                int32_t esi_7 = adc.d(edx_2 - 0x80000000, 0x80000000, edx_2 u>= 0x80000000) s>> 1
                *(ebx_2 + (edx_2 << 1)) = result.b
                char eax_2
                
                if ((edx_2.b & 1) == 0)
                    eax_2 = (*(edx_1 + (esi_7 << 1))).b
                else
                    eax_2 = (*(var_18_1 + (esi_7 << 1))).b
                
                *(ebx_2 + (edx_2 << 1) + 1) = eax_2
                edx_2 += 1
                result = arg5[2]
            while (edx_2 s< result)
            
            edi_1 = arg5[3]
        
        ecx_1 += 0x10
        edx_1 += 0x10
        ebp += 1
        var_18_1 += 0x10
        ebx_2 += arg6
    while (ebp s< edi_1)

return result
