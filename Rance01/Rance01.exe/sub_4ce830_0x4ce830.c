// 函数: sub_4ce830
// 地址: 0x4ce830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (arg1 == 0 || *(arg1 + 0x74) == 0)
    void** eax_9 = *ebp
    int32_t ecx_4 = ebp[1]
    
    while (eax_9 != ecx_4)
        void* edx_3 = *eax_9
        eax_9 = &eax_9[1]
        *(edx_3 + 0xb8) = fconvert.s(fconvert.t(arg3))
    
    return 

void** i = *ebp

if (i == ebp[1])
    return 

do
    int32_t* esi_2 = *i + 8
    void** eax_1
    int32_t ecx_1
    eax_1, ecx_1 = sub_4d3aa0(arg1 + 0x6c, esi_2)
    arg2 = eax_1
    char eax_3
    
    if (eax_1 != *(arg1 + 0x70))
        eax_3, ecx_1 = sub_405dd0(&eax_1[3], esi_2)
    
    void*** eax_4
    
    if (eax_1 == *(arg1 + 0x70) || eax_3 != 0)
        void** var_c = *(arg1 + 0x70)
        eax_4 = &var_c
    else
        eax_4 = &arg2
    
    void** eax_6 = *eax_4
    
    if (eax_6 == *(arg1 + 0x70))
        *(*i + 0xb8) = fconvert.s(fconvert.t(arg3))
    else
        int32_t var_24_2 = ecx_1
        struct sealengine::CFrameMulAlpha::VTable* const var_8
        void* eax_8
        long double st0_1
        st0_1, eax_8 = sub_4cf0d0(&var_8, &eax_6[0xa], fconvert.s(fconvert.t(arg4)))
        void* ecx_3 = *i
        arg2 = fconvert.s(fconvert.t(*(eax_8 + 4)) * fconvert.t(arg3))
        *(ecx_3 + 0xb8) = fconvert.s(fconvert.t(arg2))
        var_8 = &sealengine::CFrameMulAlpha::`vftable'
    
    i = &i[1]
while (i != ebp[1])
