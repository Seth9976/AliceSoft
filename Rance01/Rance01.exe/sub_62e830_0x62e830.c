// 函数: sub_62e830
// 地址: 0x62e830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_10 = edi

if (sub_62f3c0(arg3 + 0xa0, arg2, *(arg3 + 0x9c)) == 0)
    return 0xffffffff

int32_t ebx_1 = 0

if (((*(arg3 + 0x258) - *(arg3 + 0x254)) & 0xfffffffc) s<= 0)
    return 0

while (true)
    void* edi_3 = *(*(arg3 + 0x254) + (ebx_1 << 2))
    
    if (sub_630880(edi_3, *(arg3 + 0xa4), *(arg3 + 0x9c)) == 0)
        return 0xffffffff
    
    int128_t* ecx_3 = edi_3 + 0x160
    
    if (*(edi_3 + 0x174) u>= 0x10)
        ecx_3 = *ecx_3
    
    sub_630310(ecx_3, arg3 + 0xa0, *(edi_3 + 4))
    ebx_1 += 1
    
    if (ebx_1 s>= (*(arg3 + 0x258) - *(arg3 + 0x254)) s>> 2)
        return 0
