// 函数: sub_5a57d0
// 地址: 0x5a57d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edi

if (arg1 == 0)
    edi = nullptr
else
    int32_t eax = *(arg1 + 0x264)
    char* eax_1
    
    if (eax == 0)
        eax_1 = sub_6b5c43(0x100)
    else
        eax_1 = eax(arg1, 0x100)
    
    if (eax_1 == 0 && (*(arg1 + 0x70) & 0x100000) == 0)
        sub_5a5c60(arg1, "Out of Memory")
        noreturn
    
    edi = eax_1

*arg2 = edi

if (arg3 - 0x17318 u<= 0x2710)
    int32_t i
    
    for (i = 0; i u< 0x100; i += 1)
        edi[i] = i.b
    
    return i

char eax_5

for (int32_t i_1 = 0; i_1 u< 0x100; i_1 += 1)
    eax_5 = sub_5a53b0(i_1, arg3)
    int16_t top = top + 1
    edi[i_1] = eax_5

return eax_5
