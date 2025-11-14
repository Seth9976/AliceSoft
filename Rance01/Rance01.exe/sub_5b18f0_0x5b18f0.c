// 函数: sub_5b18f0
// 地址: 0x5b18f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*arg1)
int32_t edi_4 = ((((edx & 7) + eax_1) s>> 3) * arg1[1] + 3) & 0xfffffffc
int16_t* esi = (*(*arg2 + 8))(0, 0)
int32_t* eax_4 = arg1[1]
int32_t eax_6 = (*(*arg2 + 0x1c))()
int32_t edx_4 = arg1[2]
char* ecx_5 = (edx_4 - 1) * edi_4 + arg1[3]
arg2 = nullptr

if (edx_4 s> 0)
    int32_t edx_5 = arg1[1]
    void* i
    
    do
        int32_t edi_5 = 0
        
        if (edx_5 s> 0)
            do
                *esi = 0xffff
                esi[1].b = 0xff
                edx_5.b = *ecx_5
                *(esi + 3) = edx_5.b
                edx_5 = arg1[1]
                edi_5 += 1
                esi = &esi[2]
                ecx_5 = &ecx_5[1]
            while (edi_5 s< edx_5)
        
        i = arg2 + 1
        esi += eax_6 - (eax_4 << 2)
        ecx_5 = &ecx_5[neg.d(eax_4 + edi_4)]
        arg2 = i
    while (i s< arg1[2])

int32_t result
result.b = 1
return result
