// 函数: sub_436d10
// 地址: 0x436d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_3 = arg5
int32_t ebp = arg4
int32_t eax = ebp * 2 + 2
arg4 = ebp
bool cond:0 = eax != edx_3

if (eax s< edx_3)
    do
        void* edx_1 = **(arg3 + (eax << 2) - 4)
        void* esi_2 = **(arg3 + (eax << 2))
        int32_t edi_1 = *(esi_2 + 0x10)
        int32_t ebx_1 = *(edx_1 + 0x10)
        
        if (edi_1 s< ebx_1)
            eax -= 1
        else if (edi_1 s<= ebx_1)
            int32_t edi_2 = *(esi_2 + 0xc)
            int32_t ebx_2 = *(edx_1 + 0xc)
            
            if (edi_2 s< ebx_2)
                eax -= 1
            else if (edi_2 s<= ebx_2 && *(esi_2 + 8) s< *(edx_1 + 8))
                eax -= 1
        
        *(arg3 + (ebp << 2)) = *(arg3 + (eax << 2))
        ebp = eax
        eax = eax * 2 + 2
    while (eax s< arg5)
    
    edx_3 = arg5
    cond:0 = eax != edx_3

if (not(cond:0))
    *(arg3 + (ebp << 2)) = *(arg3 + (edx_3 << 2) - 4)
    ebp = edx_3 - 1

int32_t __saved_ebx = arg7
return sub_436da0(arg3, ebp, arg4, arg6)
