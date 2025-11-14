// 函数: sub_5f5e20
// 地址: 0x5f5e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx_5 = arg1[1]
void* edx = *arg1
int32_t eax_2 = (ecx_5 - edx) s>> 2

if (eax_2 u<= 4)
    if (eax_2 u< 4)
        sub_40d3d0(arg1, edx, 4 - eax_2)
        int32_t edi_2 = arg1[1]
        int32_t eax_10 = (edi_2 - *arg1) s>> 2
        
        if (4 != eax_10)
            __builtin_memset(edi_2, 0, (4 - eax_10) << 2)
        
        int32_t eax_11 = arg1[1]
        eax_2 = eax_11 + ((4 - ((eax_11 - *arg1) s>> 2)) << 2)
        arg1[1] = eax_2
else if (edx + 0x10 != ecx_5)
    int32_t ebx = 0 s>> 2 << 2
    int128_t* eax_6 = sub_6b49d0(edx + 0x10, ecx_5, ebx)
    arg1[1] = ebx + edx + 0x10
    return eax_6

return eax_2
