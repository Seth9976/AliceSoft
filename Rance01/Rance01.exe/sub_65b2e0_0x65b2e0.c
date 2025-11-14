// 函数: sub_65b2e0
// 地址: 0x65b2e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x10c) == 0 || *(arg1 + 0x108) == 0)
    return 

sub_64de50(arg1 + 0x88, 0, *(arg1 + 0x7c), *(arg1 + 0x6c), *(arg1 + 0x70))
int32_t eax_2 = *(arg1 + 0x84)

if (eax_2 == 0)
    sub_643f40(*(arg1 + 0x108))
else if (eax_2 == 1)
    sub_64cf30(*(arg1 + 0x10c))

int32_t* eax_5 = *(*(arg1 + 0x108) + 0x8c)

if (eax_5 != 0 && eax_5[0x12f] != 0)
    int32_t* ecx_3 = eax_5
    
    if (ecx_3 != 0)
        ecx_3 = ecx_3[0x12f]
    
    void* eax_7 = *(*(arg1 + 0x10c) + 0xa0)
    
    if (eax_7 != 0)
        sub_646680(eax_7, ecx_3)

InvalidateRect(*(arg1 + 0x34), nullptr, 0)
UpdateWindow(*(arg1 + 0x34))
