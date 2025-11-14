// 函数: sub_563110
// 地址: 0x563110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1

if (arg3 u<= 0x111)
    uint32_t Msg
    WPARAM wParam
    LPARAM lParam
    
    if (arg3 == 0x111)
        lParam = arg5
        wParam = arg4
        Msg = 0x111
    label_5631f2:
        PostMessageA(GetParent(arg2), Msg, wParam, lParam)
        PostMessageA(arg2, 0x7fff, 0, 0)
        return 0
    
    if (arg3 - 1 u<= 0x23)
        switch (arg3 + &jump_table_5632e0[4]:3)
            case &lookup_table_5632f4
                sub_563320(arg1, arg2)
                return 0
            case &lookup_table_5632f4[1]
                uint32_t uIDEvent = *(arg1 + 0x94)
                
                if (uIDEvent != 0)
                    KillTimer(arg2, uIDEvent)
                    *(arg1 + 0x94) = 0
                
                SetMenu(arg2, nullptr)
                *(arg1 + 0xa8) = 1
                return 0
            case &lookup_table_5632f4[0xf]
                lParam = arg5
                wParam = arg4
                Msg = 0x10
                goto label_5631f2
            case &lookup_table_5632f4[0x23]
                int32_t edi_1 = neg.d(*(arg1 + 0xb0))
                int32_t eax_1 = GetSystemMetrics(SM_CXSCREEN)
                int32_t esi_1 = *(arg1 + 0xb0)
                *(arg5 + 8) = eax_1
                *(arg5 + 0x10) = 0
                *(arg5 + 0x14) = edi_1
                *(arg5 + 0xc) = esi_1
                return 0
else
    if (arg3 == 0x216)
        *arg5 = 0
        *(arg5 + 4) = 0
        *(arg5 + 8) = GetSystemMetrics(SM_CXSCREEN)
        *(arg5 + 0xc) = *(arg1 + 0xb0)
        return 1
    
    if (arg3 == 0x7fff)
        DestroyWindow(arg2)
        return 0
    
    if (arg3 == 0x116)
        EnableMenuItem(GetSystemMenu(arg2, 0), 0xf010, MF_GRAYED)
        return 0
    
    if (arg3 == 0x112)
        return sub_5633b0(arg4, arg5, arg2)
    
    if (arg3 == 0x113)
        sub_563400(arg1, arg2)
        return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
