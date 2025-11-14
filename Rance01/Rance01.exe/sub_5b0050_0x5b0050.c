// 函数: sub_5b0050
// 地址: 0x5b0050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx

if (arg2 == 0 || arg1 == 0)
    return 

void* ebp_1 = lstrlenA(arg3) + 1

if (arg6 u> 3)
    sub_5a5c60(arg2, "Invalid pCAL equation type")
    noreturn

int32_t esi_1 = 0
var_4 = 0

if (arg7 s> 0)
    while (true)
        if (sub_5a5190(lstrlenA(*(arg9 + (esi_1 << 2))), *(arg9 + (esi_1 << 2))) == 0)
            sub_5a5c60(arg2, "Invalid format for pCAL parameter")
            noreturn
        
        int32_t eax_6 = var_4 + 1
        var_4 = eax_6
        
        if (eax_6 s>= arg7)
            break
        
        esi_1 = var_4

int128_t* eax_2 = sub_5a6370(ebp_1, arg2)
*(arg1 + 0xa0) = eax_2

if (eax_2 != 0)
    sub_6c02a0(eax_2, arg3, ebp_1)
    *(arg1 + 0xa4) = arg4
    *(arg1 + 0xa8) = arg5
    *(arg1 + 0xb4) = arg6.b
    *(arg1 + 0xb5) = arg7.b
    uint32_t ebp_2 = lstrlenA(arg8) + 1
    int128_t* eax_11 = sub_5a6370(ebp_2, arg2)
    *(arg1 + 0xac) = eax_11
    
    if (eax_11 == 0)
        sub_5a5de0("Insufficient memory for pCAL units", arg2)
        return 
    
    sub_6c02a0(eax_11, arg8, ebp_2)
    int128_t* eax_13 = sub_5a6370((arg7 << 2) + 4, arg2)
    *(arg1 + 0xb0) = eax_13
    
    if (eax_13 == 0)
        sub_5a5de0("Insufficient memory for pCAL params", arg2)
        return 
    
    sub_6bc670(eax_13, 0, (arg7 << 2) + 4)
    int32_t ebp_4 = 0
    
    if (arg7 s> 0)
        do
            void* ebx_3 = lstrlenA(*(arg9 + (ebp_4 << 2))) + 1
            *(*(arg1 + 0xb0) + (ebp_4 << 2)) = sub_5a6370(ebx_3, arg2)
            int32_t edx_5 = *(arg1 + 0xb0)
            
            if (*(edx_5 + (ebp_4 << 2)) == 0)
                sub_5a5de0("Insufficient memory for pCAL parameter", arg2)
                return 
            
            sub_6c02a0(*(edx_5 + (ebp_4 << 2)), *(arg9 + (ebp_4 << 2)), ebx_3)
            ebp_4 += 1
        while (ebp_4 s< arg7)
    
    *(arg1 + 8) |= 0x400
    *(arg1 + 0xb8) |= 0x80
    return 

sub_5a5de0("Insufficient memory for pCAL purpose", arg2)
