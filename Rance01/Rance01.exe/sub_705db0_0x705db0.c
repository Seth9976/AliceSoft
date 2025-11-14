// 函数: sub_705db0
// 地址: 0x705db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_1 = *(arg1 + 0xc)
char* eax = arg1[2].d

if (i_1 != 0)
    uint64_t st0 = *arg1
    int32_t i
    
    do
        int32_t ecx_1 = _m_psrlqi(st0, 0x38).d
        *eax = ecx_1.b
        eax = &eax[1]
        
        if (ecx_1 == 0xff)
            *eax = 0
            *(arg1 + 0x1c) += 1
            eax = &eax[1]
        
        *(arg1 + 0x1c) += 1
        st0 = _m_psllqi(st0, 8)
        i = i_1
        i_1 -= 8
    while (i s> 8)
    *(arg1 + 0xc) = 0
    *arg1 = 0

char* ecx_2 = nullptr

if (arg2 != 0)
    do
        i_1.b = ecx_2[arg2]
        ecx_2 = &ecx_2[1]
        *eax = i_1.b
        eax = &eax[1]
    while (ecx_2 != arg3)
else
    arg1[2].d = eax

arg1[2].d = eax
return 0
