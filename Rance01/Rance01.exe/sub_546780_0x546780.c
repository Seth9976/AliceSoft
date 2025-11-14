// 函数: sub_546780
// 地址: 0x546780
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg4 + 0x2b0) -= 4
int32_t edi = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t eax_2 = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
int32_t ebp
int32_t* esi = sub_5466f0("A_ERASE", **(arg4 + 0x2b0), ebp, arg2, edi, arg4, eax_2)
int32_t* eax_4

if (esi == 0)
    eax_4.b = 0
    return eax_4

if (edi s>= 0)
    if (esi[0x10].b != 0)
        eax_4 = esi[1] u>> 2
    else
        eax_4 = nullptr
    
    if (edi s< eax_4)
        int32_t eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_5516d0(esi, edi)
        
        if (eax_6.b == 0)
            return sub_53d1c0(eax_6, edx_1, arg4, "array.Erase")
        
        int32_t edx_2
        
        if (esi[1] != 0)
            edx_2 = *esi
        else
            edx_2 = 0
        
        uint32_t eax_9 = sub_550c30(esi)
        
        if (edi + 1 s< eax_9)
            int32_t ecx_3 = edi + 1
            
            do
                *(edx_2 + (ecx_3 << 2) - 4) = *(edx_2 + (ecx_3 << 2))
                ecx_3 += 1
                eax_9 = sub_550c30(esi)
            while (ecx_3 s< eax_9)
        
        if (esi[0x10].b != 0)
            eax_9 = esi[1] u>> 2
        
        if (esi[0x10].b != 0 && eax_9 s> 1)
            int32_t entry_ebx
            
            if (eax_9 - 1 s<= 0)
                return sub_53d0e0(arg4, 0x74fddc, arg3, arg2, entry_ebx, arg1, __return_addr)
            
            if (sub_427ad0(esi, (eax_9 - 1) << 2).b == 0)
                return sub_53d0e0(arg4, 0x74fddc, arg3, arg2, entry_ebx, arg1, __return_addr)
        else
            esi[1] = 0
        
        **(arg4 + 0x2b0) = 1
        *(arg4 + 0x2b0) += 4
        eax_9.b = 1
        return eax_9

**(arg4 + 0x2b0) = 0
*(arg4 + 0x2b0) += 4
eax_4.b = 1
return eax_4
