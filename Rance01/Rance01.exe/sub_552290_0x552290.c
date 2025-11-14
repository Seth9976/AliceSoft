// 函数: sub_552290
// 地址: 0x552290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = *(arg1 + 8) - *(arg1 + 4)
int32_t i = 0

if ((result & 0xfffffffc) s> 0)
    do
        int32_t* ebx_1 = *(*(arg1 + 4) + (i << 2))
        
        if (ebx_1 != 0)
            sub_54f810(ebx_1)
            int32_t* var_c_1 = ebx_1
            result = sub_6b4d5b()
        
        i += 1
    while (i s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)

int128_t* ecx_2 = *(arg1 + 8)
int128_t* edi = *(arg1 + 4)

if (edi != ecx_2)
    int32_t ebx_2 = 0 s>> 2 << 2
    result = sub_6b49d0(edi, ecx_2, ebx_2)
    *(arg1 + 8) = ebx_2 + edi

return result
