// 函数: sub_659c80
// 地址: 0x659c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t left
int32_t eax_1 = data_78c474 ^ &left
BOOL eax_2 = 0xffffffff

if (arg1[0x18] == 0xffffffff && arg1[0x19] == 0xffffffff)
    int32_t ebp_1 = 0
    int32_t left_3 = (arg1[0x2b] - arg1[0x2a]) s>> 4
    left = left_3
    
    if (left_3 != 0)
        int32_t* edx_1 = arg1[0x2a]
        int32_t eax_5
        int32_t edi_1
        
        while (true)
            edi_1 = 0
            eax_5 = (edx_1[1] - *edx_1) s>> 2
            
            if (eax_5 != 0)
                break
            
        label_659cf7:
            ebp_1 += 1
            edx_1 = &edx_1[4]
            
            if (ebp_1 u>= left_3)
                sub_6b4885(eax_1 ^ &left)
                return eax_5
        
        int32_t* ecx_3 = *edx_1
        
        while (*(*ecx_3 + 0x9b) == 0)
            edi_1 += 1
            ecx_3 = &ecx_3[1]
            
            if (edi_1 u>= eax_5)
                left_3 = left
                goto label_659cf7
        
        arg1[0x18] = ebp_1
        arg1[0x19] = edi_1
        void var_68
        WINDOWPLACEMENT lpwndpl_1
        
        if (edi_1 != ((arg1[0x23] - arg1[0x22]) s>> 2) - 1)
            GetWindowPlacement(*(*(arg1[0x22] + (edi_1 << 2) + 4) + 0x34), &lpwndpl_1)
            int32_t left_2 = arg1[0xc]
            int32_t edx_5 = lpwndpl_1.rcNormalPosition.top - left_2 - arg1[0xa]
            left = left_2
            arg1[2] = edx_5
        else
            left = arg1[0xc]
            arg1[2] = sub_6592a0(arg1, &var_68)[1] - left - arg1[0xa]
        
        WINDOWPLACEMENT lpwndpl
        
        if (edi_1 != 0)
            GetWindowPlacement(*(*(arg1[0x22] + (edi_1 << 2) - 4) + 0x34), &lpwndpl)
            int32_t top = lpwndpl.rcNormalPosition.top
            GetWindowPlacement(*(*(arg1[0x22] + (edi_1 << 2) - 4) + 0x34), &lpwndpl_1)
            arg1[3] =
                arg1[0xc] - lpwndpl_1.rcNormalPosition.top + top + lpwndpl_1.rcNormalPosition.bottom
        else
            arg1[3] = left
        
        int32_t left_1
        
        if (ebp_1 != ((arg1[0x1f] - arg1[0x1e]) s>> 2) - 1)
            GetWindowPlacement(*(*(arg1[0x1e] + (ebp_1 << 2) + 4) + 0x34), &lpwndpl)
            left_1 = lpwndpl.rcNormalPosition.left
        else
            left_1 = *sub_6592a0(arg1, &var_68)
        
        int32_t ecx_17 = arg1[0xb]
        *arg1 = left_1 - ecx_17 - arg1[0xa]
        
        if (ebp_1 != 0)
            GetWindowPlacement(*(*(arg1[0x1e] + (ebp_1 << 2) - 4) + 0x34), &lpwndpl)
            int32_t eax_21 = arg1[0x1e]
            left = lpwndpl.rcNormalPosition.left
            GetWindowPlacement(*(*(eax_21 + (ebp_1 << 2) - 4) + 0x34), &lpwndpl_1)
            arg1[1] = lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left + left
                + arg1[0xb]
        else
            arg1[1] = ecx_17
        
        GetWindowPlacement(*(*(arg1[0x1e] + (ebp_1 << 2)) + 0x34), &lpwndpl)
        int32_t ecx_22 = arg1[0x22]
        arg1[0x16] = lpwndpl.rcNormalPosition.left
        eax_2 = GetWindowPlacement(*(*(ecx_22 + (edi_1 << 2)) + 0x34), &lpwndpl)
        arg1[0x17] = lpwndpl.rcNormalPosition.top

sub_6b4885(eax_1 ^ &left)
return eax_2
