// 函数: sub_6aff30
// 地址: 0x6aff30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_74
int32_t eax_1 = data_78c474 ^ &var_74
int32_t eax_2 = 0xffffffff

if (arg1[0x18] == 0xffffffff && arg1[0x19] == 0xffffffff)
    int32_t edx_2 = arg1[0x2b] - arg1[0x2a]
    int32_t left = (arg1[0x1f] - arg1[0x1e]) s>> 2
    int32_t edx_3 = edx_2 s>> 4
    eax_2 = (arg1[0x23] - arg1[0x22]) s>> 2
    int32_t ebp_1 = 0
    int32_t var_68 = eax_2
    
    if (edx_3 s> 0)
        int32_t* ecx = arg1[0x2a]
        var_74 = ecx
        int32_t eax_10
        int32_t esi_1
        
        while (true)
            esi_1 = 0
            eax_10 = (ecx[1] - *ecx) s>> 2
            
            if (eax_10 s> 0)
                break
            
        label_6affc7:
            ebp_1 += 1
            ecx = &ecx[4]
            var_74 = ecx
            
            if (ebp_1 s>= edx_3)
                sub_6b4885(eax_1 ^ &var_74)
                return eax_10
        
        int32_t* ecx_1 = *ecx
        
        while (*(*ecx_1 + 0x9b) == 0)
            esi_1 += 1
            ecx_1 = &ecx_1[1]
            
            if (esi_1 s>= eax_10)
                ecx = var_74
                goto label_6affc7
        
        int32_t eax_12 = var_68 - 1
        arg1[0x18] = ebp_1
        arg1[0x19] = esi_1
        WINDOWPLACEMENT lpwndpl_1
        
        if (esi_1 != eax_12)
            GetWindowPlacement(*(*(arg1[0x22] + (esi_1 << 2) + 4) + 0x34), &lpwndpl_1)
            int32_t* eax_18 = arg1[0xc]
            void* edx_7 = lpwndpl_1.rcNormalPosition.top - eax_18 - arg1[0xa]
            var_74 = eax_18
            arg1[2] = edx_7
        else
            var_74 = arg1[0xc]
            arg1[2] = sub_6af540(arg1, &var_68)[1] - var_74 - arg1[0xa]
        
        WINDOWPLACEMENT lpwndpl
        
        if (esi_1 != 0)
            GetWindowPlacement(*(*(arg1[0x22] + (esi_1 << 2) - 4) + 0x34), &lpwndpl)
            int32_t top = lpwndpl.rcNormalPosition.top
            GetWindowPlacement(*(*(arg1[0x22] + (esi_1 << 2) - 4) + 0x34), &lpwndpl_1)
            arg1[3] =
                arg1[0xc] - lpwndpl_1.rcNormalPosition.top + top + lpwndpl_1.rcNormalPosition.bottom
        else
            arg1[3] = var_74
        
        int32_t left_1
        
        if (ebp_1 != left - 1)
            GetWindowPlacement(*(*(arg1[0x1e] + (ebp_1 << 2) + 4) + 0x34), &lpwndpl)
            left_1 = lpwndpl.rcNormalPosition.left
        else
            left_1 = *sub_6af540(arg1, &left)
        
        int32_t ecx_13 = arg1[0xb]
        *arg1 = left_1 - ecx_13 - arg1[0xa]
        
        if (ebp_1 != 0)
            GetWindowPlacement(*(*(arg1[0x1e] + (ebp_1 << 2) - 4) + 0x34), &lpwndpl)
            int32_t eax_25 = arg1[0x1e]
            left = lpwndpl.rcNormalPosition.left
            GetWindowPlacement(*(*(eax_25 + (ebp_1 << 2) - 4) + 0x34), &lpwndpl_1)
            arg1[1] = lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left + left
                + arg1[0xb]
        else
            arg1[1] = ecx_13
        
        GetWindowPlacement(*(*(arg1[0x1e] + (ebp_1 << 2)) + 0x34), &lpwndpl)
        int32_t ecx_18 = arg1[0x22]
        arg1[0x16] = lpwndpl.rcNormalPosition.left
        eax_2 = GetWindowPlacement(*(*(ecx_18 + (esi_1 << 2)) + 0x34), &lpwndpl)
        arg1[0x17] = lpwndpl.rcNormalPosition.top

sub_6b4885(eax_1 ^ &var_74)
return eax_2
