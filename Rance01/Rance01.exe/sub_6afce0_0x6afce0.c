// 函数: sub_6afce0
// 地址: 0x6afce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_6c
int32_t eax_1 = data_78c474 ^ &var_6c
int32_t result = 0xffffffff

if (arg1[0x18] == 0xffffffff && arg1[0x19] == 0xffffffff)
    int32_t esi_1 = 0
    result = (arg1[0x1f] - arg1[0x1e]) s>> 2
    
    if (result s> 0)
        int32_t* edx_1 = arg1[0x1e]
        int32_t* ecx = edx_1
        
        while (*(*ecx + 0x9b) == 0)
            esi_1 += 1
            ecx = &ecx[1]
            
            if (esi_1 s>= result)
                sub_6b4885(eax_1 ^ &var_6c)
                return result
        
        arg1[0x18] = esi_1
        WINDOWPLACEMENT lpwndpl
        int32_t ecx_3
        
        if (esi_1 != result - 1)
            GetWindowPlacement(*(edx_1[esi_1 + 1] + 0x34), &lpwndpl)
            ecx_3 = arg1[0xb]
            *arg1 = lpwndpl.rcNormalPosition.left - arg1[0xa] - ecx_3
        else
            void var_68
            int32_t edx_3 = *sub_6af540(arg1, &var_68) - arg1[0xa]
            ecx_3 = arg1[0xb]
            *arg1 = edx_3 - ecx_3
        
        WINDOWPLACEMENT lpwndpl_1
        
        if (esi_1 != 0)
            GetWindowPlacement(*(*(arg1[0x1e] + (esi_1 << 2) - 4) + 0x34), &lpwndpl_1)
            int32_t left = lpwndpl_1.rcNormalPosition.left
            GetWindowPlacement(*(*(arg1[0x1e] + (esi_1 << 2) - 4) + 0x34), &lpwndpl)
            arg1[1] =
                arg1[0xb] - lpwndpl.rcNormalPosition.left + lpwndpl.rcNormalPosition.right + left
        else
            arg1[1] = ecx_3
        
        result = GetWindowPlacement(*(*(arg1[0x1e] + (esi_1 << 2)) + 0x34), &lpwndpl_1)
        arg1[0x16] = lpwndpl_1.rcNormalPosition.left

sub_6b4885(eax_1 ^ &var_6c)
return result
