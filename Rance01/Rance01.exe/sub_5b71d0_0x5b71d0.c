// 函数: sub_5b71d0
// 地址: 0x5b71d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
void* ebp = *(ebx + 0x14)
float esi = arg1
int32_t eax_1 = sub_5b4d20(*(ebp + 0xc), esi i+ 4)

if (eax_1 s<= 0)
    return 

uint32_t i_2 = *(ebp + 0x14)
int32_t eax_4 = 0
arg1 = fconvert.s(float.t(eax_1) / float.t((1 << (*(ebp + 0xc)).b) - 1) * float.t(*(ebp + 0x10)))

if (i_2 != 0)
    uint32_t i = i_2
    
    do
        eax_4 += 1
        i u>>= 1
    while (i != 0)

int32_t eax_5 = sub_5b4d20(eax_4, esi i+ 4)

if (eax_5 == 0xffffffff || eax_5 s>= *(ebp + 0x14))
    return 

arg2 = fconvert.s(float.t(0))
int32_t* ebp_2 = *(*(*(*(esi i+ 0x40) + 4) + 0x1c) + 0xb20) + *(ebp + (eax_5 << 2) + 0x18) * 0x38
int32_t eax_11 = sub_5b4eb0(((*ebp_2 + *(ebx + 4)) << 2) + 4, esi)

if (sub_5b6930(ebp_2, eax_11, esi i+ 4, *(ebx + 4)) == 0xffffffff)
    return 

int32_t edx_3 = *(ebx + 4)
int32_t eax_13 = 0

if (edx_3 s> 0)
    do
        int32_t i_1 = 0
        
        if (eax_13 s< edx_3)
            while (i_1 s< *ebp_2)
                long double x87_r6_1 = fconvert.t(*(eax_11 + (eax_13 << 2)))
                eax_13 += 1
                i_1 += 1
                *(eax_11 + (eax_13 << 2) - 4) = fconvert.s(x87_r6_1 + fconvert.t(arg2))
                
                if (eax_13 s>= *(ebx + 4))
                    break
        
        edx_3 = *(ebx + 4)
        arg2 = fconvert.s(fconvert.t(*(eax_11 + (eax_13 << 2) - 4)))
    while (eax_13 s< edx_3)

*(eax_11 + (*(ebx + 4) << 2)) = fconvert.s(fconvert.t(arg1))
