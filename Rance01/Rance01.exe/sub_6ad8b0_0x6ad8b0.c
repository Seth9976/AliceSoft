// 函数: sub_6ad8b0
// 地址: 0x6ad8b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = arg3
int32_t ebp = arg5
int32_t esi = arg3 * 2 + 2
int32_t var_4 = arg3
bool cond:0 = esi != ebp

if (esi s< ebp)
    do
        int32_t eax = esi * 5
        
        if (*(arg4 + (eax << 3) + 0x20) == 0 && *(arg4 + (eax << 3) - 8) == 1)
            esi -= 1
        
        int32_t* ebp_1 = arg4 + arg3 * 0x28
        int32_t edx = esi * 5
        void* edi_1 = arg4 + (edx << 3)
        *ebp_1 = *(arg4 + (edx << 3))
        ebp_1[1] = *(edi_1 + 4)
        ebp_1[2] = *(edi_1 + 8)
        ebp_1[3] = *(edi_1 + 0xc)
        sub_4b55f0(&ebp_1[4], edi_1 + 0x10)
        int32_t* eax_4
        eax_4.b = *(edi_1 + 0x20)
        ebp_1[8].b = eax_4.b
        ebp_1[9] = *(edi_1 + 0x24)
        arg3 = esi
        esi = esi * 2 + 2
    while (esi s< arg5)
    
    ebp = arg5
    cond:0 = esi != ebp

if (not(cond:0))
    int32_t* edi_2 = arg4 + arg3 * 0x28
    int32_t edx_3 = ebp * 5
    *edi_2 = *(arg4 + (edx_3 << 3) - 0x28)
    edi_2[1] = *(arg4 + (edx_3 << 3) - 0x24)
    edi_2[2] = *(arg4 + (edx_3 << 3) - 0x20)
    edi_2[3] = *(arg4 + (edx_3 << 3) - 0x1c)
    sub_4b55f0(&edi_2[4], arg4 + (edx_3 << 3) - 0x18)
    int32_t* eax_7
    eax_7.b = *(arg4 + (edx_3 << 3) - 8)
    edi_2[8].b = eax_7.b
    edi_2[9] = *(arg4 + (edx_3 << 3) - 4)
    arg3 = ebp - 1

int32_t var_18_3 = arg7
return sub_6ae030(arg6, var_4, arg3, arg4, var_4, arg6)
