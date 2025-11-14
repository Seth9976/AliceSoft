// 函数: sub_5b3e10
// 地址: 0x5b3e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == 0)
    int32_t eax_6 = *arg1
    int32_t edx_4 = arg2 + eax_6
    arg1[2] = edx_4
    
    if (edx_4 u< eax_6)
        arg1[2] = eax_6
    else
        eax_6 += arg1[1]
        
        if (edx_4 u> eax_6)
            arg1[2] = eax_6
else
    int32_t ecx
    
    if (arg3 == 1)
        arg1[2] += arg2
        int32_t edx_2 = arg1[2]
        ecx = *arg1
        
        if (edx_2 u< ecx)
            arg1[2] = ecx
            return 0
        
        ecx += arg1[1]
        
        if (edx_2 u> ecx)
            arg1[2] = ecx
    else
        if (arg3 != 2)
            return 0xffffffff
        
        ecx = *arg1
        int32_t esi_2 = arg1[1] + ecx
        int32_t edx_1 = arg2 + esi_2
        arg1[2] = edx_1
        
        if (edx_1 u< ecx)
            arg1[2] = ecx
            return 0
        
        if (edx_1 u> esi_2)
            arg1[2] = esi_2

return 0
