// 函数: sub_6062a0
// 地址: 0x6062a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1
void* esi_1
void* esi_2

if (zx.d(arg3) - 0x9c43 u<= 0xc8)
    switch (arg3)
        case 0x9c43
            DestroyWindow(arg2)
        case 0x9c62
            int32_t eax_59 = data_797dc0
            
            if (eax_59 s>= 0)
                int32_t ecx_28 = data_797e1c
                
                if (eax_59 s< (data_797e20 - ecx_28) s>> 2)
                    int32_t edx_25
                    edx_25.b = *(ecx_28 + (eax_59 << 2)) == 0
                    *(ecx_28 + (eax_59 << 2)) = edx_25
            
            InvalidateRect(*(arg1 + 0x6a8), nullptr, 1)
            UpdateWindow(*(arg1 + 0x6a8))
            InvalidateRect(*(arg1 + 0x4d4), nullptr, 1)
            UpdateWindow(*(arg1 + 0x4d4))
        case 0x9c63
            if (sub_6085d0(arg1 - 8, arg2) != 0)
                MessageBoxA(arg2, 0x735400, 0x7353f4, MB_OK)
                return 0
            
            sub_604c90(0x7353d0)
        case 0x9c64
            esi_1 = arg1 - 8
            sub_6091e0(esi_1, arg2, 1)
            sub_60cee0(arg1 + 0xa6c)
            *(arg1 + 0xac4) = 0
            HMENU hMenu = *(esi_1 + 0x88)
            
            if (hMenu != 0)
                EnableMenuItem(hMenu, 0x9c64, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c64, 0)
            HMENU hMenu_1 = *(esi_1 + 0x88)
            
            if (hMenu_1 != 0)
                EnableMenuItem(hMenu_1, 0x9c65, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c65, 1)
            HMENU hMenu_2 = *(esi_1 + 0x88)
            
            if (hMenu_2 != 0)
                EnableMenuItem(hMenu_2, 0x9c66, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c66, 1)
            HMENU hMenu_3 = *(esi_1 + 0x88)
            
            if (hMenu_3 != 0)
                EnableMenuItem(hMenu_3, 0x9c67, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c67, 1)
            HMENU hMenu_4 = *(esi_1 + 0x88)
            
            if (hMenu_4 != 0)
                EnableMenuItem(hMenu_4, 0x9c69, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c69, 1)
            HMENU hMenu_5 = *(esi_1 + 0x88)
            
            if (hMenu_5 != 0)
                EnableMenuItem(hMenu_5, 0x9c6b, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c6b, 1)
            HMENU hMenu_6 = *(esi_1 + 0x88)
            
            if (hMenu_6 != 0)
                EnableMenuItem(hMenu_6, 0x9c6d, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c6d, 1)
            HMENU hMenu_7 = *(esi_1 + 0x88)
            
            if (hMenu_7 != 0)
                EnableMenuItem(hMenu_7, 0x9c6f, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c6f, 1)
            HMENU hMenu_8 = *(esi_1 + 0x88)
            
            if (hMenu_8 != 0)
                EnableMenuItem(hMenu_8, 0x9c71, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c71, 1)
            HMENU hMenu_9 = *(esi_1 + 0x88)
            
            if (hMenu_9 != 0)
                EnableMenuItem(hMenu_9, 0x9c73, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c73, 1)
        case 0x9c65
            esi_2 = arg1 - 8
            sub_6091e0(esi_2, arg2, 1)
            sub_60cf00(arg1 + 0xa6c)
            *(arg1 + 0xac4) = 0
        label_60650e:
            HMENU hMenu_10 = *(esi_2 + 0x88)
            
            if (hMenu_10 != 0)
                EnableMenuItem(hMenu_10, 0x9c64, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c64, 1)
            HMENU hMenu_11 = *(esi_2 + 0x88)
            
            if (hMenu_11 != 0)
                EnableMenuItem(hMenu_11, 0x9c65, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c65, 0)
            HMENU hMenu_12 = *(esi_2 + 0x88)
            
            if (hMenu_12 != 0)
                EnableMenuItem(hMenu_12, 0x9c66, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c66, 0)
            HMENU hMenu_13 = *(esi_2 + 0x88)
            
            if (hMenu_13 != 0)
                EnableMenuItem(hMenu_13, 0x9c67, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c67, 0)
            HMENU hMenu_14 = *(esi_2 + 0x88)
            
            if (hMenu_14 != 0)
                EnableMenuItem(hMenu_14, 0x9c69, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c69, 0)
            HMENU hMenu_15 = *(esi_2 + 0x88)
            
            if (hMenu_15 != 0)
                EnableMenuItem(hMenu_15, 0x9c6b, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c6b, 0)
            HMENU hMenu_16 = *(esi_2 + 0x88)
            
            if (hMenu_16 != 0)
                EnableMenuItem(hMenu_16, 0x9c6d, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c6d, 0)
            HMENU hMenu_17 = *(esi_2 + 0x88)
            
            if (hMenu_17 != 0)
                EnableMenuItem(hMenu_17, 0x9c6f, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c6f, 0)
            HMENU hMenu_18 = *(esi_2 + 0x88)
            
            if (hMenu_18 != 0)
                EnableMenuItem(hMenu_18, 0x9c71, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c71, 0)
            HMENU hMenu_19 = *(esi_2 + 0x88)
            
            if (hMenu_19 != 0)
                EnableMenuItem(hMenu_19, 0x9c73, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c73, 0)
        case 0x9c66
            if (data_797db4 != 0)
                (*(**(arg1 + 0xa70) + 0xc))()
            
            sub_6091e0(arg1 - 8, arg2, 1)
        case 0x9c67
            int32_t eax_21
            
            if (*(arg1 + 0xa70) != 0)
                eax_21 = (***(arg1 + 0xa70))()
            else
                eax_21 = 0xffffffff
            
            esi_2 = arg1 - 8
            sub_6081c0(esi_2, arg1 + 0xac8, arg1 + 0xacc, eax_21)
            sub_60cf00(arg1 + 0xa6c)
            sub_6091e0(esi_2, arg2, 1)
            *(arg1 + 0xac4) = 1
            goto label_60650e
        case 0x9c69
            int32_t eax_26
            
            if (*(arg1 + 0xa70) != 0)
                eax_26 = (***(arg1 + 0xa70))()
            else
                eax_26 = 0xffffffff
            
            esi_2 = arg1 - 8
            sub_6081c0(esi_2, arg1 + 0xac8, arg1 + 0xacc, eax_26)
            sub_60cf00(arg1 + 0xa6c)
            sub_6091e0(esi_2, arg2, 1)
            *(arg1 + 0xac4) = 2
            goto label_60650e
        case 0x9c6b
            *(arg1 + 0xad0) = (*(**(arg1 + 0xa78) + 0x2c))()
            sub_60cf00(arg1 + 0xa6c)
            esi_1 = arg1 - 8
            sub_6091e0(esi_1, arg2, 1)
            *(arg1 + 0xac4) = 3
        label_6067d8:
            HMENU hMenu_20 = *(esi_1 + 0x88)
            
            if (hMenu_20 != 0)
                EnableMenuItem(hMenu_20, 0x9c64, MF_BYCOMMAND)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c64, 1)
            HMENU hMenu_21 = *(esi_1 + 0x88)
            
            if (hMenu_21 != 0)
                EnableMenuItem(hMenu_21, 0x9c65, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c65, 0)
            HMENU hMenu_22 = *(esi_1 + 0x88)
            
            if (hMenu_22 != 0)
                EnableMenuItem(hMenu_22, 0x9c66, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c66, 0)
            HMENU hMenu_23 = *(esi_1 + 0x88)
            
            if (hMenu_23 != 0)
                EnableMenuItem(hMenu_23, 0x9c67, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c67, 0)
            HMENU hMenu_24 = *(esi_1 + 0x88)
            
            if (hMenu_24 != 0)
                EnableMenuItem(hMenu_24, 0x9c69, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c69, 0)
            HMENU hMenu_25 = *(esi_1 + 0x88)
            
            if (hMenu_25 != 0)
                EnableMenuItem(hMenu_25, 0x9c6b, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c6b, 0)
            HMENU hMenu_26 = *(esi_1 + 0x88)
            
            if (hMenu_26 != 0)
                EnableMenuItem(hMenu_26, 0x9c6d, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c6d, 0)
            HMENU hMenu_27 = *(esi_1 + 0x88)
            
            if (hMenu_27 != 0)
                EnableMenuItem(hMenu_27, 0x9c6f, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c6f, 0)
            HMENU hMenu_28 = *(esi_1 + 0x88)
            
            if (hMenu_28 != 0)
                EnableMenuItem(hMenu_28, 0x9c71, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c71, 0)
            HMENU hMenu_29 = *(esi_1 + 0x88)
            
            if (hMenu_29 != 0)
                EnableMenuItem(hMenu_29, 0x9c73, 0x3)
            
            SendMessageA(*(esi_1 + 0x8cc), 0x401, 0x9c73, 0)
        case 0x9c6d
            int32_t eax_37
            
            if (*(arg1 + 0xa70) != 0)
                eax_37 = (***(arg1 + 0xa70))()
            else
                eax_37 = 0xffffffff
            
            esi_1 = arg1 - 8
            sub_6081c0(esi_1, arg1 + 0xac8, arg1 + 0xacc, eax_37)
            *(arg1 + 0xad0) = (*(**(arg1 + 0xa78) + 0x2c))()
            sub_60cf00(arg1 + 0xa6c)
            sub_6091e0(esi_1, arg2, 1)
            *(arg1 + 0xac4) = 4
            goto label_6067d8
        case 0x9c6f
            int32_t eax_44
            
            if (*(arg1 + 0xa70) != 0)
                eax_44 = (***(arg1 + 0xa70))()
            else
                eax_44 = 0xffffffff
            
            esi_1 = arg1 - 8
            sub_6081c0(esi_1, arg1 + 0xac8, arg1 + 0xacc, eax_44)
            *(arg1 + 0xad0) = (*(**(arg1 + 0xa78) + 0x2c))()
            sub_60cf00(arg1 + 0xa6c)
            sub_6091e0(esi_1, arg2, 1)
            *(arg1 + 0xac4) = 5
            goto label_6067d8
        case 0x9c71
            int32_t edx
            sub_608320(arg1 - 8, edx, arg1)
        case 0x9c73
            sub_60c7e0(arg1, arg1 + 0x7e0)
            InvalidateRect(*(arg1 + 0x6a8), nullptr, 0)
            UpdateWindow(*(arg1 + 0x6a8))
        case 0x9c74
            sub_608390(arg2, arg1 - 8, arg2)
        case 0x9c77
            sub_606d00(arg1 - 8, 0x14)
            InvalidateRect(arg2, nullptr, 1)
        case 0x9c78
            sub_606d00(arg1 - 8, 0x10)
            InvalidateRect(arg2, nullptr, 1)
        case 0x9c79
            sub_606d00(arg1 - 8, 0xc)
            InvalidateRect(arg2, nullptr, 1)
        case 0x9c7c
            sub_60c850(arg1 + 0x7e0)
        case 0x9c7d
            sub_60c890(arg1, arg1 + 0x7e0)
        case 0x9d0b
            sub_608b10(arg1 - 8)
return 0
