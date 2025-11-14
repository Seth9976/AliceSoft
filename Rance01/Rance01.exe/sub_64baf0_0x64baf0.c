// 函数: sub_64baf0
// 地址: 0x64baf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg4
int32_t eax = arg3 * 2 + 2
arg4 = arg3
bool cond:0 = eax != ebp

while (eax s< ebp)
    int32_t esi_1 = eax * 5
    int32_t edi_1 = *(arg2 + (esi_1 << 3) + 4)
    int32_t ebx_1 = *(arg2 + (esi_1 << 3) - 0x24)
    int32_t* esi_2 = arg2 + (esi_1 << 3)
    
    if (edi_1 s< ebx_1)
        eax -= 1
    else if (edi_1 s<= ebx_1 && *esi_2 s< esi_2[-0xa])
        eax -= 1
    
    __builtin_memcpy(arg2 + arg3 * 0x28, arg2 + eax * 0x28, 0x28)
    arg3 = eax
    eax = eax * 2 + 2
    cond:0 = eax != ebp

if (not(cond:0))
    __builtin_memcpy(arg2 + arg3 * 0x28, arg2 + ebp * 0x28 - 0x28, 0x28)
    arg3 = ebp - 1

int32_t __saved_ebx = arg6
return sub_64c6e0(arg4, arg2, arg3, arg2, arg4, arg5)
