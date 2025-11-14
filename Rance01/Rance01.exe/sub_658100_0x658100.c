// 函数: sub_658100
// 地址: 0x658100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *arg2
int32_t* result = arg2[1]
int32_t ecx_3 = (result - edx) s>> 2

if (ecx_3 u> arg1)
    int32_t* edx_1 = edx + (arg1 << 2)
    
    if (edx_1 != result)
        int32_t* result_1 = result
        
        if (result != result)
            do
                *edx_1 = *result_1
                result_1 = &result_1[1]
                edx_1 = &edx_1[1]
            while (result_1 != result)
            
            arg2[1] = edx_1
            return result
        
        arg2[1] = edx_1
else if (ecx_3 u< arg1)
    sub_658180(arg2, arg1 - ecx_3)
    int32_t* eax = arg2[1]
    int32_t ecx
    int32_t var_c_1 = ecx
    int32_t edx_6 = (eax - *arg2) s>> 2
    sub_6582b0(eax, edx_6, arg1 - edx_6)
    result = arg2[1]
    arg2[1] = &result[arg1 - ((result - *arg2) s>> 2)]

return result
