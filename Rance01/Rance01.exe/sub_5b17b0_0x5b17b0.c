// 函数: sub_5b17b0
// 地址: 0x5b17b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*arg1)
int32_t edi_4 = ((((edx & 7) + eax_1) s>> 3) * arg1[1] + 3) & 0xfffffffc
char* esi = (*(*arg2 + 8))(0, 0)
int32_t* eax_4 = arg1[1]
int32_t eax_6 = (*(*arg2 + 0x1c))()
int32_t ebp_1 = arg1[2]
void* ecx_5 = (ebp_1 - 1) * edi_4 + arg1[3]
int32_t i = 0

if (ebp_1 s> 0)
    int32_t edx_6 = arg1[1]
    
    do
        int32_t ebp_2 = 0
        
        if (edx_6 s> 0)
            do
                *esi = *ecx_5
                esi[1] = *(ecx_5 + 1)
                esi[2] = *(ecx_5 + 2)
                esi[3] = 0xff
                edx_6 = arg1[1]
                ebp_2 += 1
                esi = &esi[4]
                ecx_5 += 3
            while (ebp_2 s< edx_6)
        
        ecx_5 += neg.d(edi_4) - eax_4 * 3
        i += 1
        esi = &esi[eax_6 - (eax_4 << 2)]
    while (i s< arg1[2])

int32_t result
result.b = 1
return result
