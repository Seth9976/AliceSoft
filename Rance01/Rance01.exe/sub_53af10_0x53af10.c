// 函数: sub_53af10
// 地址: 0x53af10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (*(arg1 + 0x12c0) u> arg1 + 0xec0)
    int32_t edx_1 = *(*(arg1 + 0x12c0) - 4)
    
    if (edx_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
        eax = *(*(arg1 + 0x1e4) + (edx_1 << 2))
    else
        eax = nullptr
    
    *(arg1 + 0x12c8) = eax
    
    if (eax == 0)
        int32_t var_4 = edx_1
        sub_53d1c0(eax, edx_1, arg1, 0x74cdfc)
        int32_t* eax_6
        eax_6.b = 0
        return eax_6
else
    *(arg1 + 0x12c8) = 0

eax.b = 1
return eax
