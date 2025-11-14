// 函数: sub_5ed8f0
// 地址: 0x5ed8f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = arg3
int32_t eax = arg5
int32_t ebx = arg3 * 2 + 2
int32_t var_4 = arg3
bool cond:0 = ebx != eax

if (ebx s< eax)
    do
        int32_t eax_2 = ebx * 0x6c
        
        if (*(eax_2 + arg4 + 8) s< *(eax_2 + arg4 - 0x64))
            ebx -= 1
        
        float* ecx = arg3 * 0x6c
        float* esi_2 = ebx * 0x6c
        *(ecx + arg4) = fconvert.s(fconvert.t(*(esi_2 + arg4)))
        *(ecx + arg4 + 4) = fconvert.s(fconvert.t(*(esi_2 + arg4 + 4)))
        void* esi_3 = esi_2 + arg4
        void* edi_1 = ecx + arg4
        *(edi_1 + 8) = *(esi_3 + 8)
        *(edi_1 + 0xc) = *(esi_3 + 0xc)
        sub_401180(edi_1 + 0x10, 0xffffffff, esi_3 + 0x10, 0)
        sub_401180(edi_1 + 0x2c, 0xffffffff, esi_3 + 0x2c, 0)
        *(edi_1 + 0x48) = *(esi_3 + 0x48)
        sub_5ec870(edi_1 + 0x4c, esi_3 + 0x4c)
        sub_4b55f0(edi_1 + 0x5c, esi_3 + 0x5c)
        arg3 = ebx
        ebx = ebx * 2 + 2
    while (ebx s< arg5)
    
    eax = arg5
    cond:0 = ebx != eax

if (not(cond:0))
    int32_t eax_7 = eax * 0x6c
    float* ecx_5 = arg3 * 0x6c
    *(ecx_5 + arg4) = fconvert.s(fconvert.t(*(eax_7 + arg4 - 0x6c)))
    *(ecx_5 + arg4 + 4) = fconvert.s(fconvert.t(*(eax_7 + arg4 - 0x68)))
    void* edi_2 = ecx_5 + arg4
    *(edi_2 + 8) = *(eax_7 + arg4 - 0x64)
    *(edi_2 + 0xc) = *(eax_7 + arg4 - 0x60)
    sub_401180(edi_2 + 0x10, 0xffffffff, eax_7 + arg4 - 0x5c, 0)
    sub_401180(edi_2 + 0x2c, 0xffffffff, eax_7 + arg4 - 0x40, 0)
    *(edi_2 + 0x48) = *(eax_7 + arg4 - 0x24)
    sub_5ec870(edi_2 + 0x4c, eax_7 + arg4 - 0x20)
    sub_4b55f0(edi_2 + 0x5c, eax_7 + arg4 - 0x10)
    arg3 = arg5 - 1

return sub_5eda30(var_4, arg6, arg3, arg4, var_4, arg6)
