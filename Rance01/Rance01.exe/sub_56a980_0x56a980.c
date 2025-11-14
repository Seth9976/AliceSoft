// 函数: sub_56a980
// 地址: 0x56a980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t esi = arg1

if (*(esi + 0xac) == 0 && *(*(esi + 0x3b8) + 0x694) == 0)
    MSG msg
    
    if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) == 0)
    label_56aa76:
        sub_563510(esi + 0x2a4)
        BOOL eax_3
        eax_3.b = 1
        return eax_3
    
    while (msg.message != 0x12)
        HACCEL hAccTable = *(esi + 0x390)
        int32_t eax_1
        
        if (hAccTable != 0)
            eax_1.b = TranslateAcceleratorA(*(esi + 8), hAccTable, &msg) == 1
        
        if (hAccTable == 0 || eax_1.b == 0)
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
        
        uint32_t message = msg.message
        bool cond:1_1
        
        if (message u<= 0x205)
            if (message u>= 0x204)
                goto label_56aa76
            
            if (message u<= 0x202)
                if (message u>= 0x201)
                    goto label_56aa76
                
                if (message u>= 0x100)
                    cond:1_1 = message u<= 0x101
                    goto label_56aa53
        else if (message u>= 0x207)
            cond:1_1 = message u<= 0x208
        label_56aa53:
            
            if (cond:1_1)
                goto label_56aa76
        
        if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) == 0)
            goto label_56aa76
    
    arg1 = msg.wParam
    *(esi + 0xac) = 1
    *(esi + 0xb0) = arg1

arg1.b = 0
return arg1
