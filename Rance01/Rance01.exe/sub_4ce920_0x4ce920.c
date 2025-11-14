// 函数: sub_4ce920
// 地址: 0x4ce920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ebp = arg2

if (ebp == 0 || ebp[0x21] == 0)
    int32_t* i = *arg1
    
    while (i != arg1[1])
        void* esi_3 = *i
        i = &i[1]
        *(esi_3 + 0xcc) = 0
    
    return 

int32_t* edi_1 = arg1
int32_t* i_1 = *edi_1

if (i_1 == edi_1[1])
    return 

do
    int32_t* esi_2 = *i_1 + 8
    void** eax_1
    int32_t ecx_1
    eax_1, ecx_1 = sub_4d3aa0(&ebp[0x1f], esi_2)
    arg2 = eax_1
    char eax_3
    
    if (eax_1 != ebp[0x20])
        eax_3, ecx_1 = sub_405dd0(&eax_1[3], esi_2)
    
    void*** eax_4
    
    if (eax_1 == ebp[0x20] || eax_3 != 0)
        void** var_c = ebp[0x20]
        eax_4 = &var_c
    else
        eax_4 = &arg2
    
    void** eax_6 = *eax_4
    
    if (eax_6 == ebp[0x20])
        (*i_1)[0x33] = 0
    else
        int32_t var_24_2 = ecx_1
        edi_1 = arg1
        struct sealengine::CFrameIndex::VTable* var_8
        *(*i_1 + 0xcc) = sub_4cf1b0(&eax_6[0xa], &var_8, fconvert.s(fconvert.t(arg3)))[1]
        var_8 = &sealengine::CFrameIndex::`vftable'
    
    i_1 = &i_1[1]
while (i_1 != edi_1[1])
