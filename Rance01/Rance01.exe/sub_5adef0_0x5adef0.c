// 函数: sub_5adef0
// 地址: 0x5adef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = (*(arg3 + 0x6c)).b

if ((eax & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before sCAL")
    noreturn

if ((eax & 4) != 0)
    sub_5a5de0("Invalid sCAL after IDAT", arg3)
    return sub_5ab650(arg3, arg1)

if (arg4 != 0 && (*(arg4 + 8) & 0x4000) != 0)
    sub_5a5de0("Duplicate sCAL chunk", arg3)
    return sub_5ab650(arg3, arg1)

if (arg1 u< 4)
    sub_5a5de0("sCAL chunk too short", arg3)
    return sub_5ab650(arg3, arg1)

int32_t __saved_ebp_5
int32_t edx
__saved_ebp_5, edx = sub_5a6370(arg1 + 1, arg3)
*(arg3 + 0x2a8) = __saved_ebp_5

if (__saved_ebp_5 == 0)
    sub_5a5de0("Out of memory while processing sCAL chunk", arg3)
    return sub_5ab650(arg3, arg1)

int32_t __saved_ebp_4 = __saved_ebp_5
sub_5ab610(arg1, arg3, edx)
*(arg1 + *(arg3 + 0x2a8)) = 0

if (sub_5ab650(arg3, 0) != 0)
    int32_t eax_10 = sub_5a6340(arg3, *(arg3 + 0x2a8))
    *(arg3 + 0x2a8) = 0
    return eax_10

char* ebp = *(arg3 + 0x2a8)
int32_t eax_9
eax_9.b = *ebp

if (eax_9.b != 1 && eax_9.b != 2)
    sub_5a5de0("Invalid sCAL ignored: invalid unit", arg3)
    int32_t eax_11 = sub_5a6340(arg3, *(arg3 + 0x2a8))
    *(arg3 + 0x2a8) = 0
    return eax_11

void* var_8 = 1
int32_t var_4 = 0

if (sub_5a5000(arg1, ebp, &var_4, &var_8) == 0)
    sub_5a5de0("Invalid sCAL chunk ignored: bad width format", arg3)
else
    char* eax_13 = var_8
    
    if (eax_13 u>= arg1)
        sub_5a5de0("Invalid sCAL chunk ignored: bad width format", arg3)
    else
        char ecx_3 = *(eax_13 + ebp)
        var_8 = &eax_13[1]
        
        if (ecx_3 != 0)
            sub_5a5de0("Invalid sCAL chunk ignored: bad width format", arg3)
        else if ((var_4 & 0x188) == 0x108)
            var_4 = 0
            
            if (sub_5a5000(arg1, ebp, &var_4, &var_8) == 0 || var_8 != arg1)
                sub_5a5de0("Invalid sCAL chunk ignored: bad height format", arg3)
            else
                uint32_t edx_6 = var_4 & 0x188
                
                if (edx_6 == 0x108)
                    int32_t ecx_5 = sx.d(eax_9.b)
                    void* var_20_5 = &eax_13[1] + ebp
                    void* var_24_3 = &ebp[1]
                    sub_5b0230(arg4, edx_6, ecx_5, arg3, ecx_5)
                else
                    sub_5a5de0("Invalid sCAL chunk ignored: non-positive height", arg3)
        else
            sub_5a5de0("Invalid sCAL chunk ignored: non-positive width", arg3)

int32_t eax_18 = sub_5a6340(arg3, *(arg3 + 0x2a8))
*(arg3 + 0x2a8) = 0
return eax_18
