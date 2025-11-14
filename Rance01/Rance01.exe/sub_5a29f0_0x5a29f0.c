// 函数: sub_5a29f0
// 地址: 0x5a29f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_24
int32_t eax_1 = data_78c474 ^ &var_24
int16_t ecx = 0
uint32_t i

for (i = 1; i s<= 0xf; i += 1)
    void var_22
    void* esi_1
    esi_1.w = *(&var_24 + arg2 - &var_22 + (i << 1))
    esi_1.w += ecx
    esi_1.w *= 2
    ecx = esi_1.w
    *(&var_24 + (i << 1)) = ecx

int32_t esi_2 = 0

if (arg4 s>= 0)
    do
        uint32_t i_1 = zx.d(*(arg3 + (esi_2 << 2) + 2))
        
        if (i_1 != 0)
            uint32_t eax_2 = zx.d(*(&var_24 + (i_1 << 1)))
            uint32_t ecx_1 = eax_2
            *(&var_24 + (i_1 << 1)) = eax_2.w + 1
            int32_t eax_4 = 0
            
            do
                int32_t eax_5 = eax_4 | (ecx_1 & 1)
                i_1 -= 1
                ecx_1 u>>= 1
                eax_4 = eax_5 * 2
            while (i_1 s> 0)
            
            i = eax_4 u>> 1
            *(arg3 + (esi_2 << 2)) = i.w
        
        esi_2 += 1
    while (esi_2 s<= arg4)

sub_6b4885(eax_1 ^ &var_24)
return i
