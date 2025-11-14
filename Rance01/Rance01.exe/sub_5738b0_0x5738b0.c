// 函数: sub_5738b0
// 地址: 0x5738b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x38) s<= 0 || *(arg1 + 0x3c) s<= 0)
    int32_t eax
    eax.b = 0
    return eax

char* eax_2 = (*(*(arg1 + 8) + 8))(0, 0)
int32_t esi = *(arg1 + 0x38)
char* edi = eax_2
int32_t i = 0
int32_t eax_5 = (*(*(arg1 + 8) + 0x1c))() - esi

if (*(arg1 + 0x3c) s> 0)
    do
        int32_t ecx_2 = 0
        
        if (esi s> 0)
            do
                *edi = 0
                esi = *(arg1 + 0x38)
                ecx_2 += 1
                edi = &edi[1]
            while (ecx_2 s< esi)
        
        i += 1
        edi = &edi[eax_5]
    while (i s< *(arg1 + 0x3c))

eax_5.b = 1
return eax_5
