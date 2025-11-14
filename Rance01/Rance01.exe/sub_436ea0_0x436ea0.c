// 函数: sub_436ea0
// 地址: 0x436ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool cond:0 = *(arg1 + 0x7c) == 0
*arg1 = 0

if (not(cond:0))
    int32_t eax_1 = *(arg1 + 8)
    int32_t ecx_1 = *(arg1 + 4)
    *(arg1 + 0x30) = arg3
    *(arg1 + 0x34) = arg4
    *(arg1 + 0x38) = ecx_1
    *(arg1 + 0x3c) = eax_1
    
    if ((*(**(arg1 + 0x7c) + 0x28))() == 0)
        int32_t var_14_3 = arg2
        
        if (sub_4357d0(arg5, &arg1[0xc]) == 0)
            return 0
        
        sub_4356f0(&arg1[0x44])
    else
        int32_t eax_4 = *(arg1 + 8)
        int32_t ecx_3 = *(arg1 + 4)
        *(arg1 + 0x68) = arg3
        *(arg1 + 0x74) = eax_4
        *(arg1 + 0x6c) = arg4
        *(arg1 + 0x70) = ecx_3
        int32_t var_14_1 = arg2
        
        if (sub_4357d0(arg5, &arg1[0xc]) == 0)
            return 0
        
        int32_t var_14_2 = arg2
        
        if (sub_4357d0(arg6, &arg1[0x44]) == 0)
            return 0
    
    *arg1 = 1

return 1
