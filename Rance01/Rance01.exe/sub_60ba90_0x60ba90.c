// 函数: sub_60ba90
// 地址: 0x60ba90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
void* edi = *(arg1 + 0x68)
int32_t ecx_3 = (*(arg1 + 0x6c) - edi) s/ 0x1c
*ebx = 0

if (ecx_3 s> 0)
    int32_t edx_3 = *(arg1 + 0x9c)
    int32_t ebp_1 = *(arg1 + 0x98)
    int32_t* edi_1 = edi + 0x10
    arg2 = ecx_3
    int32_t i
    
    do
        int32_t eax_4 = ((*edi_1 * ebp_1) u>> 1) + edx_3 * 2
        
        if (eax_4 s> *ebx)
            *ebx = eax_4
        
        edi_1 = &edi_1[7]
        i = arg2
        arg2 -= 1
    while (i != 1)

*arg3 = *(arg1 + 0x98) * ecx_3 + (*(arg1 + 0x9c) << 1)
return arg3
