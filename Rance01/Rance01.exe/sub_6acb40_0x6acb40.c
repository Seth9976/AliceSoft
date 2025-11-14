// 函数: sub_6acb40
// 地址: 0x6acb40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4 = ecx
int32_t* edi = arg3
int32_t result = (edi - arg1) s/ 0x28

if (result s<= 0x28)
    if (arg2[8].b == 0 && arg1[8].b == 1)
        result = sub_6ad4d0(arg1, arg2)
        edi = arg3
    
    if (edi[8].b == 0 && arg2[8].b == 1)
        result = sub_6ad4d0(arg2, edi)
    
    if (arg2[8].b == 0 && arg1[8].b == 1)
        return sub_6ad4d0(arg1, arg2)
else
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(result + 1)
    result = (eax_4 + (edx_2 & 7)) s>> 3
    int32_t esi_3 = result * 0x28
    int32_t* edi_1 = &arg1[result * 0xa]
    int32_t ebx_2 = result * 0x50
    
    if (edi_1[8].b == 0 && arg1[8].b == 1)
        result = sub_6ad4d0(arg1, edi_1)
    
    if (arg1[result * 0x14 + 8].b == 0 && edi_1[8].b == 1)
        result = sub_6ad4d0(edi_1, &arg1[result * 0x14])
    
    if (edi_1[8].b == 0 && arg1[8].b == 1)
        result = sub_6ad4d0(arg1, edi_1)
    
    int32_t* ecx_7 = arg2 - esi_3
    var_4 = ecx_7
    
    if (arg2[8].b == 0 && ecx_7[8].b == 1)
        result = sub_6ad4d0(ecx_7, arg2)
        ecx_7 = var_4
    
    if (arg2[result * 0xa + 8].b == 0 && arg2[8].b == 1)
        result = sub_6ad4d0(arg2, &arg2[result * 0xa])
        ecx_7 = var_4
    
    if (arg2[8].b == 0 && ecx_7[8].b == 1)
        result = sub_6ad4d0(ecx_7, arg2)
    
    int32_t* edi_8 = arg3
    int32_t* ebp_3 = edi_8 - esi_3
    int32_t* esi_5 = edi_8 - ebx_2
    
    if (ebp_3[8].b == 0 && esi_5[8].b == 1)
        result = sub_6ad4d0(esi_5, ebp_3)
        edi_8 = arg3
    
    if (edi_8[8].b == 0 && ebp_3[8].b == 1)
        result = sub_6ad4d0(ebp_3, edi_8)
    
    if (ebp_3[8].b == 0 && esi_5[8].b == 1)
        result = sub_6ad4d0(esi_5, ebp_3)
    
    if (arg2[8].b == 0 && edi_1[8].b == 1)
        result = sub_6ad4d0(edi_1, arg2)
    
    if (ebp_3[8].b == 0 && arg2[8].b == 1)
        result = sub_6ad4d0(arg2, ebp_3)
    
    if (arg2[8].b == 0 && edi_1[8].b == 1)
        return sub_6ad4d0(edi_1, arg2)

return result
