// 函数: sub_6eff30
// 地址: 0x6eff30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg5
int32_t ecx = result[1]
int32_t ebx = ecx * 2
int32_t esi_1 = arg1 + (ebx << 3)
int32_t edx_1 = arg2 + (ebx << 3)
int32_t edi_2 = ecx * arg6 + arg4
int32_t ebx_1 = result[3]

if (ecx s< ebx_1)
    result = arg5[2]
    int32_t var_1c_1 = arg3 + (ebx << 3)
    
    do
        int32_t ebp_3 = *arg5
        
        if (ebp_3 s< result)
            char* ebx_2 = ebp_3 * 3
            int32_t var_18_1 = edx_1
            
            do
                result.b = *(esi_1 + (ebp_3 << 1))
                int32_t ecx_4 = adc.d(ebp_3 - 0x80000000, 0x80000000, ebp_3 u>= 0x80000000) s>> 1
                ebp_3 += 1
                ebx_2[edi_2] = result.b
                edx_1.b = *(var_18_1 + (ecx_4 << 1))
                ebx_2[edi_2 + 1] = edx_1.b
                ecx_4.b = *(var_1c_1 + (ecx_4 << 1))
                ebx_2[edi_2 + 2] = ecx_4.b
                ebx_2 = &ebx_2[3]
                result = arg5[2]
            while (ebp_3 s< result)
            
            edx_1 = var_18_1
            ebx_1 = arg5[3]
        
        esi_1 += 0x10
        edx_1 += 0x10
        ecx += 1
        var_1c_1 += 0x10
        edi_2 += arg6
    while (ecx s< ebx_1)

return result
