// 函数: sub_6af230
// 地址: 0x6af230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t eax_1 = data_78c474 ^ &var_38
BOOL result = (*(arg2 + 0x9c) - *(arg2 + 0x98)) s>> 4

if (result u> arg1)
    int32_t eax_4 = *(arg2 + 0x98)
    int32_t ebx_2 = arg1 * 2
    int32_t edi_1 = 0
    int32_t ebp_3 = (*(eax_4 + (ebx_2 << 3) + 4) - *(eax_4 + (ebx_2 << 3))) s>> 2
    
    if (ebp_3 s> 0)
        do
            WINDOWPLACEMENT lpwndpl
            GetWindowPlacement(*(*(*(*(arg2 + 0x98) + (ebx_2 << 3)) + (edi_1 << 2)) + 0x34), 
                &lpwndpl)
            SetWindowPos(*(*(*(*(arg2 + 0x98) + (ebx_2 << 3)) + (edi_1 << 2)) + 0x34), nullptr, 0, 
                0, arg3, lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top, SWP_NOMOVE)
            edi_1 += 1
        while (edi_1 s< ebp_3)
    
    result = sub_6af880(arg2, arg1)

sub_6b4885(eax_1 ^ &var_38)
return result
