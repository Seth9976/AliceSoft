// 函数: sub_6afe00
// 地址: 0x6afe00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_6c
int32_t eax_1 = data_78c474 ^ &var_6c
int32_t ebx
int32_t var_70 = ebx
int32_t result = 0xffffffff

if (*(arg1 + 0x60) == 0xffffffff && *(arg1 + 0x64) == 0xffffffff)
    int32_t esi_1 = 0
    result = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s>> 2
    
    if (result s> 0)
        int32_t* edx_1 = *(arg1 + 0x88)
        int32_t* ecx = edx_1
        
        while (*(*ecx + 0x9b) == 0)
            esi_1 += 1
            ecx = &ecx[1]
            
            if (esi_1 s>= result)
                sub_6b4885(eax_1 ^ &var_6c)
                return result
        
        *(arg1 + 0x64) = esi_1
        WINDOWPLACEMENT lpwndpl
        int32_t ebx_4
        
        if (esi_1 != result - 1)
            GetWindowPlacement(*(edx_1[esi_1 + 1] + 0x34), &lpwndpl)
            ebx_4 = *(arg1 + 0x30)
            *(arg1 + 8) = lpwndpl.rcNormalPosition.top - *(arg1 + 0x28) - ebx_4
        else
            ebx_4 = *(arg1 + 0x30)
            void var_68
            *(arg1 + 8) = sub_6af540(arg1, &var_68)[1] - *(arg1 + 0x28) - ebx_4
        
        WINDOWPLACEMENT lpwndpl_1
        
        if (esi_1 != 0)
            GetWindowPlacement(*(*(*(arg1 + 0x88) + (esi_1 << 2) - 4) + 0x34), &lpwndpl_1)
            int32_t top = lpwndpl_1.rcNormalPosition.top
            GetWindowPlacement(*(*(*(arg1 + 0x88) + (esi_1 << 2) - 4) + 0x34), &lpwndpl)
            ebx_4 = top - lpwndpl.rcNormalPosition.top + lpwndpl.rcNormalPosition.bottom
                + *(arg1 + 0x30)
        
        int32_t ecx_9 = *(arg1 + 0x88)
        *(arg1 + 0xc) = ebx_4
        result = GetWindowPlacement(*(*(ecx_9 + (esi_1 << 2)) + 0x34), &lpwndpl_1)
        *(arg1 + 0x5c) = lpwndpl_1.rcNormalPosition.top

sub_6b4885(eax_1 ^ &var_6c)
return result
