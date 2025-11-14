// 函数: sub_659b40
// 地址: 0x659b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_68
int32_t eax_1 = data_78c474 ^ &var_68
int32_t result = 0xffffffff

if (*(arg1 + 0x60) == 0xffffffff && *(arg1 + 0x64) == 0xffffffff)
    int32_t edi_1 = 0
    result = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s>> 2
    
    if (result != 0)
        int32_t* edx_1 = *(arg1 + 0x88)
        int32_t* ecx_1 = edx_1
        
        while (*(*ecx_1 + 0x9b) == 0)
            edi_1 += 1
            ecx_1 = &ecx_1[1]
            
            if (edi_1 u>= result)
                sub_6b4885(eax_1 ^ &var_68)
                return result
        
        *(arg1 + 0x64) = edi_1
        WINDOWPLACEMENT lpwndpl
        int32_t ebx_2
        
        if (edi_1 != ((*(arg1 + 0x8c) - edx_1) s>> 2) - 1)
            GetWindowPlacement(*(edx_1[edi_1 + 1] + 0x34), &lpwndpl)
            ebx_2 = *(arg1 + 0x30)
            *(arg1 + 8) = lpwndpl.rcNormalPosition.top - *(arg1 + 0x28) - ebx_2
        else
            ebx_2 = *(arg1 + 0x30)
            *(arg1 + 8) = sub_6592a0(arg1, &var_68)[1] - *(arg1 + 0x28) - ebx_2
        
        WINDOWPLACEMENT lpwndpl_1
        
        if (edi_1 != 0)
            GetWindowPlacement(*(*(*(arg1 + 0x88) + (edi_1 << 2) - 4) + 0x34), &lpwndpl_1)
            int32_t top = lpwndpl_1.rcNormalPosition.top
            GetWindowPlacement(*(*(*(arg1 + 0x88) + (edi_1 << 2) - 4) + 0x34), &lpwndpl)
            *(arg1 + 0xc) = *(arg1 + 0x30) - lpwndpl.rcNormalPosition.top + top
                + lpwndpl.rcNormalPosition.bottom
        else
            *(arg1 + 0xc) = ebx_2
        
        result = GetWindowPlacement(*(*(*(arg1 + 0x88) + (edi_1 << 2)) + 0x34), &lpwndpl_1)
        *(arg1 + 0x5c) = lpwndpl_1.rcNormalPosition.top

sub_6b4885(eax_1 ^ &var_68)
return result
