// 函数: sub_424720
// 地址: 0x424720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx_10 = arg1[1]
int32_t edx = *arg1
int32_t eax_2 = (ecx_10 - edx) s>> 1

if (eax_2 u> arg2)
    int128_t* edi_1 = edx + (arg2 << 1)
    
    if (edi_1 != ecx_10)
        int32_t ebx_1 = (0 s>> 1) * 2
        int128_t* eax_6 = sub_6b49d0(edi_1, ecx_10, ebx_1)
        arg1[1] = ebx_1 + edi_1
        return eax_6
else if (eax_2 u< arg2)
    sub_424800(arg1, edx, arg2 - eax_2)
    int32_t edi_2 = arg1[1]
    int32_t eax_10 = (edi_2 - *arg1) s>> 1
    int32_t ecx_3 = arg2 - eax_10
    
    if (arg2 != eax_10)
        int32_t ecx_5
        int32_t edi_3
        edi_3, ecx_5 = __builtin_memset(edi_2, 0, ecx_3 u>> 1 << 2)
        __builtin_memset(edi_3, 0, adc.d(ecx_5, ecx_5, (ecx_3 & 1) != 0) << 1)
    
    eax_2 = arg1[1]
    arg1[1] = eax_2 + ((arg2 - ((eax_2 - *arg1) s>> 1)) << 1)

return eax_2
