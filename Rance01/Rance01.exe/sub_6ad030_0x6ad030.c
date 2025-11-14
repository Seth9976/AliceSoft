// 函数: sub_6ad030
// 地址: 0x6ad030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3
int32_t eax_3 = (edi - arg1) s/ 0x28
int128_t* result

if (eax_3 s<= 0x28)
    result = arg2[9]
    
    if (result s< arg1[9])
        result = sub_6ad4d0(arg1, arg2)
        edi = arg3
    
    if (edi[9] s< arg2[9])
        result = sub_6ad4d0(arg2, edi)
    
    if (arg2[9] s< arg1[9])
        return sub_6ad4d0(arg1, arg2)
else
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
    int32_t ebx_4 = eax_7 * 0x28
    int32_t* edi_1 = &arg1[eax_7 * 0xa]
    
    if (edi_1[9] s< arg1[9])
        sub_6ad4d0(arg1, edi_1)
    
    if (arg1[eax_7 * 0x14 + 9] s< edi_1[9])
        sub_6ad4d0(edi_1, &arg1[eax_7 * 0x14])
    
    if (edi_1[9] s< arg1[9])
        sub_6ad4d0(arg1, edi_1)
    
    void* esi_2 = arg2 - ebx_4
    
    if (arg2[9] s< *(esi_2 + 0x24))
        sub_6ad4d0(esi_2, arg2)
    
    if (arg2[eax_7 * 0xa + 9] s< arg2[9])
        sub_6ad4d0(arg2, &arg2[eax_7 * 0xa])
    
    if (arg2[9] s< *(esi_2 + 0x24))
        sub_6ad4d0(esi_2, arg2)
    
    int32_t* edi_9 = arg3
    int32_t* esi_4 = edi_9 - ebx_4
    int32_t* ebx_6 = edi_9 - eax_7 * 0x50
    
    if (esi_4[9] s< ebx_6[9])
        sub_6ad4d0(ebx_6, esi_4)
        edi_9 = arg3
    
    if (edi_9[9] s< esi_4[9])
        sub_6ad4d0(esi_4, edi_9)
    
    if (esi_4[9] s< ebx_6[9])
        sub_6ad4d0(ebx_6, esi_4)
    
    if (arg2[9] s< edi_1[9])
        sub_6ad4d0(edi_1, arg2)
    
    result = esi_4[9]
    
    if (result s< arg2[9])
        result = sub_6ad4d0(arg2, esi_4)
    
    if (arg2[9] s< edi_1[9])
        return sub_6ad4d0(edi_1, arg2)

return result
