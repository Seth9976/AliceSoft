// 函数: sub_5466f0
// 地址: 0x5466f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax
int32_t esi

if (arg2 u< (*(arg6 + 0x1e8) - *(arg6 + 0x1e4)) s>> 2)
    esi = *(arg6 + 0x1e4)
    eax = *(esi + (arg2 << 2))

int32_t entry_ebx

if (arg2 u< (*(arg6 + 0x1e8) - *(arg6 + 0x1e4)) s>> 2 && eax != 0)
    int32_t edx_3 = eax[1]
    
    if (arg7 u>= edx_3 u>> 2)
        sub_53d0e0(arg6, 0x74fd84, arg5, arg4, arg3, entry_ebx, arg1)
        return 0
    
    int32_t eax_2
    
    if (edx_3 != 0)
        eax_2 = *eax
    else
        eax_2 = 0
    
    int32_t eax_3 = *(eax_2 + (arg7 << 2))
    
    if (eax_3 u< (*(arg6 + 0x1e8) - esi) s>> 2)
        return *(esi + (eax_3 << 2))
else
    sub_53d0e0(arg6, 0x74fd64, arg5, arg4, arg3, entry_ebx, arg1)
return 0
