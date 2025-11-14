// 函数: sub_603a80
// 地址: 0x603a80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4 = ecx
int32_t eax_3 = (arg3 - arg1) s/ 0x1c
char result

if (eax_3 s<= 0x28)
    if (sub_405dd0(arg1, arg2) != 0)
        sub_6041d0(arg1, arg2)
    
    if (sub_405dd0(arg2, arg3) != 0)
        sub_6041d0(arg2, arg3)
    
    result = sub_405dd0(arg1, arg2)
    
    if (result != 0)
        return sub_6041d0(arg1, arg2)
else
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
    int32_t esi_4 = eax_7 * 0x1c
    int32_t* edx_5 = &arg1[eax_7 * 7]
    
    if (sub_405dd0(arg1, edx_5) != 0)
        sub_6041d0(arg1, edx_5)
    
    if (sub_405dd0(edx_5, &arg1[eax_7 * 0xe]) != 0)
        sub_6041d0(edx_5, &arg1[eax_7 * 0xe])
    
    if (sub_405dd0(arg1, edx_5) != 0)
        sub_6041d0(arg1, edx_5)
    
    int32_t* edi_2 = arg2 - esi_4
    
    if (sub_405dd0(edi_2, arg2) != 0)
        sub_6041d0(edi_2, arg2)
    
    if (sub_405dd0(arg2, &arg2[eax_7 * 7]) != 0)
        sub_6041d0(arg2, &arg2[eax_7 * 7])
    
    if (sub_405dd0(edi_2, arg2) != 0)
        sub_6041d0(edi_2, arg2)
    
    int32_t* edi_4 = arg3 - esi_4
    int32_t* esi_6 = arg3 - eax_7 * 0x38
    
    if (sub_405dd0(esi_6, edi_4) != 0)
        sub_6041d0(esi_6, edi_4)
    
    if (sub_405dd0(edi_4, arg3) != 0)
        sub_6041d0(edi_4, arg3)
    
    if (sub_405dd0(esi_6, edi_4) != 0)
        sub_6041d0(esi_6, edi_4)
    
    if (sub_405dd0(edx_5, arg2) != 0)
        sub_6041d0(edx_5, arg2)
    
    if (sub_405dd0(arg2, edi_4) != 0)
        sub_6041d0(arg2, edi_4)
    
    result = sub_405dd0(edx_5, arg2)
    
    if (result != 0)
        return sub_6041d0(edx_5, arg2)

return result
