// 函数: sub_5b0230
// 地址: 0x5b0230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = arg2

if (eax == 0 || arg1 == 0)
    return eax

if (arg3 != 1 && arg3 != 2)
    sub_5a5c60(eax, "Invalid sCAL unit")
    noreturn

if (arg4 != 0)
    int32_t eax_1 = lstrlenA(arg4)
    
    if (eax_1 != 0 && *arg4 != 0x2d && sub_5a5190(eax_1, arg4) != 0)
        char* lpString = arg5
        
        if (lpString != 0)
            int32_t eax_3 = lstrlenA(lpString)
            
            if (eax_3 != 0 && *lpString != 0x2d && sub_5a5190(eax_3, lpString) != 0)
                int32_t eax_4
                eax_4.b = arg3.b
                *(arg1 + 0xdc) = eax_4.b
                int128_t* eax_5 = sub_5a6370(eax_1 + 1, arg2)
                *(arg1 + 0xe0) = eax_5
                
                if (eax_5 == 0)
                    return sub_5a5de0("Memory allocation failed while processing sCAL", arg2)
                
                sub_6c02a0(eax_5, arg4, eax_1 + 1)
                int128_t* eax_6 = sub_5a6370(eax_3 + 1, arg2)
                *(arg1 + 0xe4) = eax_6
                
                if (eax_6 == 0)
                    sub_5a6340(arg2, *(arg1 + 0xe0))
                    *(arg1 + 0xe0) = 0
                    return sub_5a5de0("Memory allocation failed while processing sCAL", arg2)
                
                int128_t* eax_8 = sub_6c02a0(eax_6, arg5, eax_3 + 1)
                *(arg1 + 8) |= 0x4000
                *(arg1 + 0xb8) |= 0x100
                return eax_8
        
        sub_5a5c60(arg2, "Invalid sCAL height")
        noreturn
    
    eax = arg2

sub_5a5c60(eax, "Invalid sCAL width")
noreturn
