// 函数: sub_4dd080
// 地址: 0x4dd080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = arg2
int32_t* ebx = arg1

if (ebx != result)
    int32_t* result_3 = &ebx[1]
    
    if (result_3 != result)
        void* edi_1 = 4 - ebx
        void* var_4_1 = edi_1
        
        do
            int32_t* esi_1 = *result_3
            int32_t* result_1 = result_3
            
            if (sub_4dc1f0(esi_1, *ebx) == 0)
                void* result_4 = &result_3[-1]
                
                if (sub_4dc1f0(esi_1, result_3[-1]) != 0)
                    int32_t* ebx_1 = *result_4
                    char i
                    
                    do
                        int32_t* result_2 = result_1
                        result_1 = result_4
                        *result_2 = ebx_1
                        ebx_1 = *(result_4 - 4)
                        result_4 -= 4
                        i = sub_4dc1f0(esi_1, ebx_1)
                    while (i != 0)
                    ebx = arg1
                
                result = result_1
                edi_1 = var_4_1
                *result = esi_1
            else
                int32_t eax_5 = ((edi_1 + result_3 - 4) s>> 2) * 4
                result = sub_6b49d0(result_3 - eax_5 + 4, ebx, eax_5)
                *ebx = esi_1
            
            result_3 = &result_3[1]
        while (result_3 != arg2)

return result
