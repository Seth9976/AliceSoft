// 函数: sub_10001220
// 地址: 0x10001220
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void* edx = *arg1

if (edx == 0)
    return 

if (arg1[2] - edx u>= 0x1000)
    if ((edx.b & 0x1f) != 0)
        __invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* eax_3 = *(edx - 4)
    
    if (eax_3 u>= edx)
        __invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* edx_1 = edx - eax_3
    
    if (edx_1 u< 4)
        __invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (edx_1 u> 0x23)
        __invalid_parameter_noinfo_noreturn()
        noreturn
    
    edx = eax_3

_free(edx)
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
