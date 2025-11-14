// 函数: sub_659a20
// 地址: 0x659a20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
int32_t result = 0xffffffff

if (arg1[0x18] == 0xffffffff && arg1[0x19] == 0xffffffff)
    result = (arg1[0x1f] - arg1[0x1e]) s>> 2
    
    if (result != 0)
        int32_t* edx_1 = arg1[0x1e]
        int32_t* ecx_1 = edx_1
        int32_t edi_1 = 0
        
        while (*(*ecx_1 + 0x9b) == 0)
            edi_1 += 1
            ecx_1 = &ecx_1[1]
            
            if (edi_1 u>= result)
                sub_6b4885(eax_1 ^ &var_68)
                return result
        
        arg1[0x18] = edi_1
        WINDOWPLACEMENT lpwndpl
        int32_t ecx_5
        
        if (edi_1 != ((arg1[0x1f] - edx_1) s>> 2) - 1)
            GetWindowPlacement(*(edx_1[edi_1 + 1] + 0x34), &lpwndpl)
            ecx_5 = arg1[0xb]
            *arg1 = lpwndpl.rcNormalPosition.left - arg1[0xa] - ecx_5
        else
            int32_t edx_3 = *sub_6592a0(arg1, &var_68) - arg1[0xa]
            ecx_5 = arg1[0xb]
            *arg1 = edx_3 - ecx_5
        
        WINDOWPLACEMENT lpwndpl_1
        
        if (edi_1 != 0)
            GetWindowPlacement(*(*(arg1[0x1e] + (edi_1 << 2) - 4) + 0x34), &lpwndpl_1)
            int32_t left = lpwndpl_1.rcNormalPosition.left
            GetWindowPlacement(*(*(arg1[0x1e] + (edi_1 << 2) - 4) + 0x34), &lpwndpl)
            arg1[1] =
                arg1[0xb] - lpwndpl.rcNormalPosition.left + lpwndpl.rcNormalPosition.right + left
        else
            arg1[1] = ecx_5
        
        result = GetWindowPlacement(*(*(arg1[0x1e] + (edi_1 << 2)) + 0x34), &lpwndpl_1)
        arg1[0x16] = lpwndpl_1.rcNormalPosition.left

sub_6b4885(eax_1 ^ &var_68)
return result
