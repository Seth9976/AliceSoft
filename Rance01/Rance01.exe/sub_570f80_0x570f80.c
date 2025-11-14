// 函数: sub_570f80
// 地址: 0x570f80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *(arg1 + 0x3c)
int32_t i_2 = edi s/ 0xc
int32_t eax_2
int32_t edx_2
edx_2:eax_2 = sx.q(edi)
int32_t ebx_1 = ((edx_2 & 0xf) + eax_2) s>> 4
int32_t edi_2 = *(arg1 + 0x38) - ebx_1 * 2
int32_t i_1 = i_2

if (i_2 s<= 1)
    i_1 = 1

int32_t eax_6
int32_t edx_4
edx_4:eax_6 = sx.q(*(arg1 + 0x3c) - i_1)
void* ebx_2 = (*(*(arg1 + 8) + 8))(ebx_1, (eax_6 - edx_4) s>> 1)
void* esi_2 = (*(*(arg1 + 8) + 0x1c))() - edi_2

if (i_1 s> 0)
    int32_t i
    
    do
        if (edi_2 s> 0)
            sub_6bc670(ebx_2, 0xff, edi_2)
            ebx_2 += edi_2
        
        ebx_2 += esi_2
        i = i_1
        i_1 -= 1
    while (i != 1)

int128_t* result
result.b = 1
return result
