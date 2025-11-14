// 函数: sub_52e9f0
// 地址: 0x52e9f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx - 1)
int32_t edi_1 = (eax_1 - edx) s>> 1

while (arg3 s< ebx)
    int32_t* esi_1 = arg1 + edi_1 * 0x38
    int32_t eax_6
    uint32_t edx_2
    eax_6, edx_2 = __allmul(arg4[0xc], arg4[0xd], 0x3e8, 0)
    uint32_t eax_7
    int32_t edx_3
    eax_7, edx_3 = __alldiv(eax_6, edx_2, data_797de8, data_797dec)
    int32_t eax_9
    uint32_t edx_5
    eax_9, edx_5 = __allmul(esi_1[0xc], esi_1[0xd], 0x3e8, 0)
    uint32_t eax_10
    int32_t edx_6
    eax_10, edx_6 = __alldiv(eax_9, edx_5, data_797de8, data_797dec)
    
    if (edx_6 s< edx_3)
        break
    
    if (edx_6 s<= edx_3 && eax_10 u<= eax_7)
        break
    
    int32_t* ebx_1 = arg1 + ebx * 0x38
    sub_401180(ebx_1, 0xffffffff, esi_1, 0)
    ebx_1[7] = esi_1[7]
    sub_52d8c0(&ebx_1[8], &esi_1[8])
    ebx_1[0xc] = esi_1[0xc]
    ebx_1[0xd] = esi_1[0xd]
    int32_t eax_14
    int32_t edx_11
    edx_11:eax_14 = sx.q(edi_1 - 1)
    ebx = edi_1
    edi_1 = (eax_14 - edx_11) s>> 1

int32_t* esi_2 = arg1 + ebx * 0x38
sub_401180(esi_2, 0xffffffff, arg4, 0)
esi_2[7] = arg4[7]
sub_52d8c0(&esi_2[8], &arg4[8])
esi_2[0xc] = arg4[0xc]
int32_t result = arg4[0xd]
esi_2[0xd] = result
return result
