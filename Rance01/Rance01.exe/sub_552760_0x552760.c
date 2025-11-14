// 函数: sub_552760
// 地址: 0x552760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0

if (((*(arg1 + 0xc) - *(arg1 + 8)) & 0xfffffffc) s> 0)
    do
        int32_t ecx_1 = *(arg1 + 8)
        
        if (*(ecx_1 + (i << 2)) != 0)
            int32_t* ebx_1 = *(ecx_1 + (i << 2))
            
            if (ebx_1 != 0)
                sub_54f810(ebx_1)
                int32_t* var_c_1 = ebx_1
                sub_6b4d5b()
        
        i += 1
    while (i s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)

int128_t* ecx_2 = *(arg1 + 0xc)
int128_t* esi = *(arg1 + 8)

if (esi != ecx_2)
    int32_t ebx_2 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx_2, ebx_2)
    *(arg1 + 0xc) = ebx_2 + esi

int128_t* result = sub_552290(arg1 + 0x20)
*(arg1 + 0x3c) = 0
return result
