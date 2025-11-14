// 函数: sub_65a090
// 地址: 0x65a090
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx_7 = arg1[1]
int32_t edx = *arg1
int32_t eax_2 = (ecx_7 - edx) s>> 2

if (eax_2 u> arg2)
    int128_t* edi_1 = edx + (arg2 << 2)
    
    if (edi_1 != ecx_7)
        int32_t ebx_1 = 0 s>> 2 << 2
        int128_t* eax_6 = sub_6b49d0(edi_1, ecx_7, ebx_1)
        arg1[1] = ebx_1 + edi_1
        return eax_6
else if (eax_2 u< arg2)
    sub_40d3d0(arg1, edx, arg2 - eax_2)
    int32_t edi_2 = arg1[1]
    int32_t eax_10 = (edi_2 - *arg1) s>> 2
    
    if (arg2 != eax_10)
        __builtin_memset(edi_2, 0, (arg2 - eax_10) << 2)
    
    eax_2 = arg1[1]
    arg1[1] = eax_2 + ((arg2 - ((eax_2 - *arg1) s>> 2)) << 2)

return eax_2
