// 函数: sub_4fed90
// 地址: 0x4fed90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg3

if (edi s<= 0x20)
    int32_t* var_24 = arg5
    return sub_4ff4f0(arg1, arg2)

uint32_t ecx_1 = arg1
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(edi + 1)
void* eax_5 = *(arg4 + 0x10)
int32_t esi_1 = (eax_3 - edx_1) s>> 1
int128_t* edx_2 = ecx_1 + (esi_1 << 2)
uint32_t var_14 = edx_2

if (*eax_5 == 0)
    int32_t eax_6 = *(eax_5 + 0xc)
    
    if (eax_6 s> 0)
        int32_t var_10
        sub_4dd000(eax_6, &var_10)
        int32_t eax_7 = var_10
        edi = arg3
        **(arg4 + 0x10) = eax_7
        *(*(arg4 + 0x10) + 4) = eax_7
        *(*(arg4 + 0x10) + 8) = eax_7
        ecx_1 = arg1
        int32_t var_c
        *(*(arg4 + 0x10) + 0xc) = var_c
        edx_2 = var_14

int32_t edi_4

if (esi_1 s> *(*(arg4 + 0x10) + 0xc))
    sub_4fed90(ecx_1, edx_2, esi_1, arg4, arg5)
    edi_4 = edi - esi_1
    sub_4fed90(var_14, arg2, edi_4, arg4, arg5)
else
    sub_4ff1e0(esi_1, ecx_1, edx_2, arg4, arg5)
    edi_4 = arg3 - esi_1
    sub_4ff1e0(edi_4, var_14, arg2, arg4, arg5)

return sub_4ff2a0(arg1, var_14, arg2, esi_1, edi_4, arg4, arg5)
