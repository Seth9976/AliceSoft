// 函数: sub_6af540
// 地址: 0x6af540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_44
int32_t eax_1 = data_78c474 ^ &var_44
arg2[1] = 0
*arg2 = 0
int32_t eax_4 = (*(arg1 + 0x9c) - *(arg1 + 0x98)) s>> 4

if (eax_4 != 0)
    int32_t eax_5 = eax_4 << 4
    int32_t eax_6 = *(arg1 + 0x98)
    
    if (((*(eax_5 + eax_6 - 0xc) - *(eax_5 + eax_6 - 0x10)) & 0xfffffffc) != 0
            && **(eax_5 + eax_6 - 0x10) != 0)
        int32_t* ecx_3 = *(arg1 + 0x98)
        int32_t ebp_3 = (ecx_3[1] - *ecx_3) s>> 2
        
        if (*(*ecx_3 + (ebp_3 << 2) - 4) != 0)
            WINDOWPLACEMENT lpwndpl
            GetWindowPlacement(*(**(eax_5 + eax_6 - 0x10) + 0x34), &lpwndpl)
            int32_t var_38
            *arg2 = *sub_65e6a0(&var_38, **(eax_5 + *(arg1 + 0x98) - 0x10))
                + lpwndpl.rcNormalPosition.left
            GetWindowPlacement(*(*(**(arg1 + 0x98) + (ebp_3 << 2) - 4) + 0x34), &lpwndpl)
            arg2[1] = sub_65e6a0(&var_38, *(**(arg1 + 0x98) + (ebp_3 << 2) - 4))[1]
                + lpwndpl.rcNormalPosition.top

sub_6b4885(eax_1 ^ &var_44)
return arg2
