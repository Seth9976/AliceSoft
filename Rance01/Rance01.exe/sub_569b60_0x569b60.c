// 函数: sub_569b60
// 地址: 0x569b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx

if (arg2.w == 0 || arg2 u>> 0x10 != 0)
    ebx.b = 0
else
    ebx.b = 1

*(arg3 + 0xc4) = ebx.b

if (ebx.b == 0)
    if (*(arg3 + 0xee) != 0 && *(arg3 + 0x2a1) != 0 && arg2.w == 0)
        char eax
        
        if (arg1 != 0)
            eax = sub_56b070(arg1, arg4)
        
        if (arg1 == 0 || eax == 0)
            sub_6b3080(arg3 + 0x35c)
            CloseWindow(arg4)
    
    if (*(arg3 + 0x298) s> 0)
        ReleaseCapture()
        *(arg3 + 0x298) = 0
else
    SetFocus(arg4)
    InvalidateRect(arg4, nullptr, 0)
    UpdateWindow(arg4)

void* edi_3 = *(arg3 + 0x284)

if (edi_3 != 0)
    for (int32_t* i = *(edi_3 + 0x10); i != *(edi_3 + 0x14); i = &i[1])
        int32_t* eax_2 = **i
        
        if (eax_2 != 0)
            void* ecx = *eax_2
            int32_t edx_3
            
            if (ebx.b == 0)
                edx_3 = *(ecx + 0x20)
            else
                edx_3 = *(ecx + 0x1c)
            
            edx_3(eax_2)

if (ebx.b != 0)
    void* eax_3 = data_797d94
    
    if (eax_3 != 0 && *(eax_3 + 4) != ebx.b)
        void* ecx_1 = *(eax_3 + 0x38)
        *(eax_3 + 4) = ebx.b
        
        if (ecx_1 != 0)
            *(ecx_1 + 0x36) = ebx.b
            sub_5d7f70(*(eax_3 + 0x38))
        
        void* eax_5 = *(eax_3 + 0x3c)
        
        if (eax_5 != 0)
            *(eax_5 + 0x3a) = ebx.b
            sub_5d9010(*(eax_3 + 0x3c))

return 0
