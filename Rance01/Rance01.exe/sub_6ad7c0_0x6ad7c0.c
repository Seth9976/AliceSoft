// 函数: sub_6ad7c0
// 地址: 0x6ad7c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = arg3
int32_t ebx = arg5
int32_t esi = arg3 * 2 + 2
int32_t var_4 = arg3
bool cond:0 = esi != ebx

if (esi s< ebx)
    do
        int32_t eax = esi * 5
        
        if (*(arg4 + (eax << 3) + 0xc) s< *(arg4 + (eax << 3) - 0x1c))
            esi -= 1
        
        int32_t eax_2 = esi * 5
        void* edi_1 = arg4 + (eax_2 << 3)
        int32_t* ebx_1 = arg4 + arg3 * 0x28
        *ebx_1 = *(arg4 + (eax_2 << 3))
        ebx_1[1] = *(edi_1 + 4)
        ebx_1[2] = *(edi_1 + 8)
        ebx_1[3] = *(edi_1 + 0xc)
        sub_4b55f0(&ebx_1[4], edi_1 + 0x10)
        ebx_1[8].b = *(edi_1 + 0x20)
        arg3 = esi
        esi = esi * 2 + 2
        ebx_1[9] = *(edi_1 + 0x24)
    while (esi s< arg5)
    
    ebx = arg5
    cond:0 = esi != ebx

if (not(cond:0))
    int32_t eax_6 = ebx * 5
    int32_t* edi_2 = arg4 + arg3 * 0x28
    *edi_2 = *(arg4 + (eax_6 << 3) - 0x28)
    edi_2[1] = *(arg4 + (eax_6 << 3) - 0x24)
    edi_2[2] = *(arg4 + (eax_6 << 3) - 0x20)
    edi_2[3] = *(arg4 + (eax_6 << 3) - 0x1c)
    sub_4b55f0(&edi_2[4], arg4 + (eax_6 << 3) - 0x18)
    edi_2[8].b = *(arg4 + (eax_6 << 3) - 8)
    edi_2[9] = *(arg4 + (eax_6 << 3) - 4)
    arg3 = ebx - 1

int32_t var_18_3 = arg7
return sub_6ade70(var_4, arg6, arg3, arg4, var_4, arg6)
