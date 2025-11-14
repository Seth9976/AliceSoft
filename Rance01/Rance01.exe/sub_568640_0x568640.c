// 函数: sub_568640
// 地址: 0x568640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HMENU hMenu_3
int32_t eax_1 = data_78c474 ^ &hMenu_3
hMenu_3 = arg2

if (arg2 s> 0)
    HMENU hMenu = GetMenu(*(arg1 + 8))
    bool cond:1_1 = *(arg1 + 0x398) == 0
    HMENU hMenu_4 = hMenu
    HWND hWnd
    int32_t var_28
    int32_t var_14
    
    if (cond:1_1)
        HMENU hMenu_1 = *(arg1 + 0x398)
        
        if (hMenu_1 != 0)
            DestroyMenu(hMenu_1)
            *(arg1 + 0x398) = 0
        
        int32_t* eax_7 = CreatePopupMenu()
        *(arg1 + 0x398) = eax_7
        
        if (eax_7 == 0)
        label_5687fd:
            eax_7.b = 0
            sub_6b4885(eax_1 ^ &hMenu_3)
            return eax_7
        
        uint32_t esi_1 = 0
        
        if (hMenu_3 s> 0)
            while (true)
                sub_562640(hMenu_3, &var_28, esi_1)
                
                if (sub_6b31c0(arg1 + 0x398, &var_28, esi_1, esi_1.w - 0x63b6).b == 0)
                    if (var_14 u>= 0x10)
                        int32_t var_44_11 = var_28
                        sub_6b4d5b()
                    
                    break
                
                if (var_14 u>= 0x10)
                    int32_t var_44_7 = var_28
                    sub_6b4d5b()
                
                esi_1 += 1
                
                if (esi_1 s>= hMenu_3)
                    goto label_56875b
            
            goto label_5687fd
        
    label_56875b:
        HMENU hMenu_2 = hMenu_4
        HMENU eax_11 = GetSubMenu(hMenu_2, 2)
        int32_t ebx_3
        
        if (eax_11 == 0)
            hMenu_4 = hMenu_2
            int32_t var_14_1 = 0xf
            HMENU var_18_1 = eax_11
            var_28.b = eax_11.b
            sub_401270(&var_28, eax_11 + 0x12, 0x74b84c)
            ebx_3.b = sub_6b3240(&hMenu_4, &var_28, *(arg1 + 0x398)).b == 0
            
            if (var_14_1 u>= 0x10)
                int32_t var_44_9 = var_28
                sub_6b4d5b()
        
        if (eax_11 == 0 && ebx_3.b != 0)
            goto label_5687fd
        
        hWnd = *(arg1 + 8)
    else
        HMENU eax_4 = GetSubMenu(hMenu, 2)
        int32_t ebx_2
        
        if (eax_4 == 0)
            hMenu_3 = hMenu
            sub_402be0(&var_28, 0x74b838)
            ebx_2.b = sub_6b3240(&hMenu_3, &var_28, *(arg1 + 0x398)).b == 0
            
            if (var_14 u>= 0x10)
                int32_t var_44_3 = var_28
                sub_6b4d5b()
        
        if (eax_4 == 0 && ebx_2.b != 0)
            goto label_5687fd
        
        hWnd = *(arg1 + 8)
    DrawMenuBar(hWnd)

HMENU eax_2
eax_2.b = 1
sub_6b4885(eax_1 ^ &hMenu_3)
return eax_2
