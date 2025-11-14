// 函数: sub_5b1860
// 地址: 0x5b1860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
uint32_t result
int32_t edx
edx:result = sx.q(*arg1)
int32_t ebp_4 = ((((edx & 7) + result) s>> 3) * arg1[1] + 3) & 0xfffffffc
int32_t i = 0
int32_t var_4 = ebp_4

if (arg1[2] s> 0)
    do
        result = (*(*arg2 + 8))(0, i)
        char* ecx_6 = (arg1[2] - i - 1) * ebp_4 + arg1[3]
        
        if (arg1[1] s> 0)
            char* edx_3 = result + 2
            void* ebp_5 = result - ecx_6 - 2
            int32_t j = 0
            
            do
                *(ecx_6 + ebp_5 + 2) = *ecx_6
                edx_3[0xffffffff] = ecx_6[1]
                *edx_3 = ecx_6[2]
                edx_3[1] = 0xff
                j += 1
                edx_3 = &edx_3[4]
                ecx_6 = &ecx_6[4]
            while (j s< arg1[1])
            
            ebp_4 = var_4
        
        i += 1
    while (i s< arg1[2])

result.b = 1
return result
