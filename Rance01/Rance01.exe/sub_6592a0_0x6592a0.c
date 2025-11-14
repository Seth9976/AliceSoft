// 函数: sub_6592a0
// 地址: 0x6592a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_40
int32_t eax_1 = data_78c474 ^ &var_40
arg2[1] = 0
*arg2 = 0
int32_t* ecx = *(arg1 + 0x98)
int32_t eax_2 = *(arg1 + 0x9c)

if (ecx != eax_2)
    void* eax_4 = (eax_2 - ecx) & 0xfffffff0
    int32_t* edx_1 = *(eax_4 + ecx - 0x10)
    
    if (edx_1 != *(eax_4 + ecx - 0xc) && *edx_1 != 0
            && *(*ecx + ((ecx[1] - *ecx) s>> 2 << 2) - 4) != 0)
        WINDOWPLACEMENT lpwndpl
        GetWindowPlacement(*(**(eax_4 + ecx - 0x10) + 0x34), &lpwndpl)
        *arg2 = *sub_65e6a0(&var_40, 
            **(((*(arg1 + 0x9c) - *(arg1 + 0x98)) & 0xfffffff0) + *(arg1 + 0x98) - 0x10))
            + lpwndpl.rcNormalPosition.left
        int32_t* eax_11 = *(arg1 + 0x98)
        GetWindowPlacement(*(*(*eax_11 + ((eax_11[1] - *eax_11) s>> 2 << 2) - 4) + 0x34), &lpwndpl)
        int32_t* edi_1 = *(arg1 + 0x98)
        arg2[1] = sub_65e6a0(&var_40, *(*edi_1 + ((edi_1[1] - *edi_1) s>> 2 << 2) - 4))[1]
            + lpwndpl.rcNormalPosition.top

sub_6b4885(eax_1 ^ &var_40)
return arg2
