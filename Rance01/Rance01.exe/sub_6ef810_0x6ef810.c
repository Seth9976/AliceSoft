// 函数: sub_6ef810
// 地址: 0x6ef810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg5[1]
int32_t ebp_4 = (adc.d(ecx - 0x80000000, 0x80000000, ecx u>= 0x80000000) s>> 1) * 2
int32_t edi_2 = ecx * arg6 + arg4
int32_t esi_2 = (ecx << 4) + arg1
int32_t* result = arg5[3]

if (ecx s< result)
    int32_t edx_2 = arg5[2]
    int32_t var_1c_1 = arg3 + (ebp_4 << 3)
    int32_t var_18_1 = arg2 + (ebp_4 << 3)
    
    do
        int32_t ebp_6 = *arg5
        
        if (ebp_6 s< edx_2)
            char* ebx_3 = ebp_6 * 3
            
            do
                result.b = *(esi_2 + (ebp_6 << 1))
                int32_t ecx_4 = adc.d(ebp_6 - 0x80000000, 0x80000000, ebp_6 u>= 0x80000000) s>> 1
                ebp_6 += 1
                ebx_3[edi_2] = result.b
                edx_2.b = *(var_18_1 + (ecx_4 << 1))
                ebx_3[edi_2 + 1] = edx_2.b
                ecx_4.b = *(var_1c_1 + (ecx_4 << 1))
                ebx_3[edi_2 + 2] = ecx_4.b
                ebx_3 = &ebx_3[3]
                edx_2 = arg5[2]
            while (ebp_6 s< edx_2)
            
            result = arg5[3]
        
        int32_t ebx_6 = (ecx & 1) * 2
        esi_2 += 0x10
        var_18_1 += ebx_6 << 3
        var_1c_1 += ebx_6 << 3
        ecx += 1
        edi_2 += arg6
    while (ecx s< result)

return result
