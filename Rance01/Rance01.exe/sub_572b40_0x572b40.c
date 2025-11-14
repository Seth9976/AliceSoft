// 函数: sub_572b40
// 地址: 0x572b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg3[0xd]
int32_t esi_1 = (arg2 + (arg5 << 1)) * eax
int32_t ebx_1 = (arg4 + (arg5 << 1)) * eax

if (esi_1 s> 0 && ebx_1 s> 0)
    int32_t eax_2 = (*(*arg3 + 0x10))()
    int32_t eax_4
    
    if (eax_2 s>= esi_1)
        eax_4 = (*(*arg3 + 0x14))()
    
    if (eax_2 s< esi_1 || eax_4 s< ebx_1)
        eax = sub_572940(arg3, esi_1, ebx_1)
    
    if ((eax_2 s>= esi_1 && eax_4 s>= ebx_1) || eax.b != 0)
        int128_t* ebp = (*(*arg3 + 8))(0, 0)
        int32_t __saved_ecx_1 = (*(*arg3 + 0x1c))() - esi_1
        int32_t __saved_ecx = __saved_ecx_1
        
        if (ebx_1 s> 0)
            arg4 = ebx_1
            int32_t i
            
            do
                if (esi_1 s> 0)
                    sub_6bc670(ebp, 0, esi_1)
                    __saved_ecx_1 = __saved_ecx
                    ebp += esi_1
                
                ebp += __saved_ecx_1
                i = arg4
                arg4 -= 1
            while (i != 1)
        
        arg3[0xa] = esi_1
        arg3[0xb] = ebx_1
        arg3[0xc] = arg5
        int32_t eax_9
        eax_9.b = 1
        return eax_9

eax.b = 0
return eax
