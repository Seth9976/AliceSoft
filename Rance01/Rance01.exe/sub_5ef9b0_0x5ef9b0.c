// 函数: sub_5ef9b0
// 地址: 0x5ef9b0
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
        
        int32_t* esi_2 = ebx * 0x6c
        int32_t* edi_1 = arg3 * 0x6c + arg4
        void* esi_3 = esi_2 + arg4
        *edi_1 = *(esi_2 + arg4)
        edi_1[1] = *(esi_3 + 4)
        edi_1[2] = *(esi_3 + 8)
        edi_1[3] = *(esi_3 + 0xc)
        sub_401180(&edi_1[4], 0xffffffff, esi_3 + 0x10, 0)
        sub_401180(&edi_1[0xb], 0xffffffff, esi_3 + 0x2c, 0)
        edi_1[0x12].b = *(esi_3 + 0x48)
        sub_5ec870(&edi_1[0x13], esi_3 + 0x4c)
        sub_4b55f0(&edi_1[0x17], esi_3 + 0x5c)
        arg3 = ebx
        ebx = ebx * 2 + 2
    while (ebx s< arg5)
    
    eax = arg5
    cond:0 = ebx != eax

if (not(cond:0))
    int32_t* edi_2 = arg3 * 0x6c + arg4
    *edi_2 = *(eax * 0x6c + arg4 - 0x6c)
    edi_2[1] = *(eax * 0x6c + arg4 - 0x68)
    edi_2[2] = *(eax * 0x6c + arg4 - 0x64)
    edi_2[3] = *(eax * 0x6c + arg4 - 0x60)
    sub_401180(&edi_2[4], 0xffffffff, eax * 0x6c + arg4 - 0x5c, 0)
    sub_401180(&edi_2[0xb], 0xffffffff, eax * 0x6c + arg4 - 0x40, 0)
    edi_2[0x12].b = *(eax * 0x6c + arg4 - 0x24)
    sub_5ec870(&edi_2[0x13], eax * 0x6c + arg4 - 0x20)
    sub_4b55f0(&edi_2[0x17], eax * 0x6c + arg4 - 0x10)
    arg3 = arg5 - 1

return sub_5efae0(arg6, var_4, arg3, arg4, var_4, arg6)
