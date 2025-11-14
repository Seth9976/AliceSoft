// 函数: sub_4ac080
// 地址: 0x4ac080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_2 = arg5
int32_t ebp = arg4
int32_t eax = ebp * 2 + 2
arg4 = ebp
bool cond:0 = eax != edx_2

if (eax s< edx_2)
    do
        void* edx = *(arg3 + (eax << 2) - 4)
        void* esi_1 = *(arg3 + (eax << 2))
        int32_t edi_1 = *(esi_1 + 0x10)
        int32_t ebx_1 = *(edx + 0x10)
        
        if (edi_1 s< ebx_1)
            eax -= 1
        else if (edi_1 s<= ebx_1)
            int32_t edi_2 = *(esi_1 + 0xc)
            int32_t ebx_2 = *(edx + 0xc)
            
            if (edi_2 s< ebx_2)
                eax -= 1
            else if (edi_2 s<= ebx_2 && *(esi_1 + 8) s< *(edx + 8))
                eax -= 1
        
        *(arg3 + (ebp << 2)) = *(arg3 + (eax << 2))
        ebp = eax
        eax = eax * 2 + 2
    while (eax s< arg5)
    
    edx_2 = arg5
    cond:0 = eax != edx_2

if (not(cond:0))
    *(arg3 + (ebp << 2)) = *(arg3 + (edx_2 << 2) - 4)
    ebp = edx_2 - 1

int32_t __saved_ebx = arg7
return sub_4ac110(arg3, ebp, arg4, arg6)
