// 函数: sub_54d120
// 地址: 0x54d120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg4 + 0x2b0) -= 4
int32_t ebp = **(arg4 + 0x2b0)
int32_t entry_ebx

if (ebp u< (*(arg4 + 0x1e8) - *(arg4 + 0x1e4)) s>> 2)
    int32_t* eax_4 = *(*(arg4 + 0x1e4) + (ebp << 2))
    
    if (eax_4 != 0)
        int128_t* edx
        
        if (eax_4[1] != 0)
            edx = *eax_4
        else
            edx = nullptr
        
        char* eax_6 = edx
        int32_t ecx_1
        
        do
            ecx_1.b = *eax_6
            eax_6 = &eax_6[1]
        while (ecx_1.b != 0)
        sub_401270(arg5, eax_6 - &eax_6[1], edx)
        
        if (sub_552880(arg4 + 0x1dc, ebp) != 0)
            return 1
        
        sub_53d0e0(arg4, 0x75115c, arg3, arg2, arg1, entry_ebx, __return_addr)
        int32_t eax_9
        eax_9.b = 0
        return eax_9

sub_53d0e0(arg4, 0x751138, ebp, arg3, arg2, arg1, entry_ebx)
int32_t eax_5
eax_5.b = 0
return eax_5
