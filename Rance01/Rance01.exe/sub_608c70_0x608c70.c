// 函数: sub_608c70
// 地址: 0x608c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_10
int32_t* var_c
int32_t* eax
int32_t* ecx_6
void* esi_2
bool cond:0_1
bool cond:1_1

switch (*(arg1 + 0xac8))
    case 0
        if (sub_60c7a0(arg1 + 0x7e4, arg2, &var_10, &var_c).b != 0)
            if (data_797db4 == 0)
                (*(**(arg1 + 0xa74) + 4))()
                data_797db4 = 1
            
            HMENU hMenu = *(arg1 + 0x84)
            
            if (hMenu != 0)
                EnableMenuItem(hMenu, 0x9c64, 0x3)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c64, 0)
            HMENU hMenu_1 = *(arg1 + 0x84)
            
            if (hMenu_1 != 0)
                EnableMenuItem(hMenu_1, 0x9c65, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c65, 1)
            HMENU hMenu_2 = *(arg1 + 0x84)
            
            if (hMenu_2 != 0)
                EnableMenuItem(hMenu_2, 0x9c66, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c66, 1)
            HMENU hMenu_3 = *(arg1 + 0x84)
            
            if (hMenu_3 != 0)
                EnableMenuItem(hMenu_3, 0x9c67, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c67, 1)
            HMENU hMenu_4 = *(arg1 + 0x84)
            
            if (hMenu_4 != 0)
                EnableMenuItem(hMenu_4, 0x9c69, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c69, 1)
            HMENU hMenu_5 = *(arg1 + 0x84)
            
            if (hMenu_5 != 0)
                EnableMenuItem(hMenu_5, 0x9c6b, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c6b, 1)
            HMENU hMenu_6 = *(arg1 + 0x84)
            
            if (hMenu_6 != 0)
                EnableMenuItem(hMenu_6, 0x9c6d, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c6d, 1)
            HMENU hMenu_7 = *(arg1 + 0x84)
            
            if (hMenu_7 != 0)
                EnableMenuItem(hMenu_7, 0x9c6f, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c6f, 1)
            HMENU hMenu_8 = *(arg1 + 0x84)
            
            if (hMenu_8 != 0)
                EnableMenuItem(hMenu_8, 0x9c71, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c71, 1)
            HMENU hMenu_9 = *(arg1 + 0x84)
            
            if (hMenu_9 != 0)
                EnableMenuItem(hMenu_9, 0x9c73, MF_BYCOMMAND)
            
            SendMessageA(*(arg1 + 0x8c8), 0x401, 0x9c73, 1)
            sub_6091e0(arg1 - 4, *(arg1 + 0x8c), 1)
            BOOL eax_5
            eax_5.b = 1
            return eax_5
    case 1
        esi_2 = arg1 - 4
        sub_6081c0(esi_2, &var_10, &var_c, arg2)
        eax = var_10
        
        if (eax != 0xffffffff)
            ecx_6 = var_c
        label_608ee0:
            
            if (ecx_6 != 0xffffffff)
                if (*(arg1 + 0xacc) != eax)
                label_608fc1:
                    sub_60cee0(arg1 + 0xa70)
                    *(arg1 + 0xac8) = 0
                    goto label_608fd0
                
                cond:1_1 = *(arg1 + 0xad0) == ecx_6
            label_608fb3:
                
                if (not(cond:1_1))
                    goto label_608fc1
    case 2
        esi_2 = arg1 - 4
        sub_6081c0(esi_2, &var_c, &var_10, arg2)
        eax = var_c
        
        if (eax != 0xffffffff)
            ecx_6 = var_10
            goto label_608ee0
    case 3
        if ((*(**(arg1 + 0xa7c) + 0x2c))() s< *(arg1 + 0xad4))
        label_6091bc:
            sub_60cee0(arg1 + 0xa70)
            *(arg1 + 0xac8) = 0
            esi_2 = arg1 - 4
        label_608fd0:
            HMENU hMenu_10 = *(esi_2 + 0x88)
            
            if (hMenu_10 != 0)
                EnableMenuItem(hMenu_10, 0x9c64, 0x3)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c64, 0)
            HMENU hMenu_11 = *(esi_2 + 0x88)
            
            if (hMenu_11 != 0)
                EnableMenuItem(hMenu_11, 0x9c65, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c65, 1)
            HMENU hMenu_12 = *(esi_2 + 0x88)
            
            if (hMenu_12 != 0)
                EnableMenuItem(hMenu_12, 0x9c66, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c66, 1)
            HMENU hMenu_13 = *(esi_2 + 0x88)
            
            if (hMenu_13 != 0)
                EnableMenuItem(hMenu_13, 0x9c67, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c67, 1)
            HMENU hMenu_14 = *(esi_2 + 0x88)
            
            if (hMenu_14 != 0)
                EnableMenuItem(hMenu_14, 0x9c69, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c69, 1)
            HMENU hMenu_15 = *(esi_2 + 0x88)
            
            if (hMenu_15 != 0)
                EnableMenuItem(hMenu_15, 0x9c6b, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c6b, 1)
            HMENU hMenu_16 = *(esi_2 + 0x88)
            
            if (hMenu_16 != 0)
                EnableMenuItem(hMenu_16, 0x9c6d, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c6d, 1)
            HMENU hMenu_17 = *(esi_2 + 0x88)
            
            if (hMenu_17 != 0)
                EnableMenuItem(hMenu_17, 0x9c6f, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c6f, 1)
            HMENU hMenu_18 = *(esi_2 + 0x88)
            
            if (hMenu_18 != 0)
                EnableMenuItem(hMenu_18, 0x9c71, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c71, 1)
            HMENU hMenu_19 = *(esi_2 + 0x88)
            
            if (hMenu_19 != 0)
                EnableMenuItem(hMenu_19, 0x9c73, MF_BYCOMMAND)
            
            SendMessageA(*(esi_2 + 0x8cc), 0x401, 0x9c73, 1)
            sub_6091e0(esi_2, *(arg1 + 0x8c), 1)
    case 4
        eax = (*(**(arg1 + 0xa7c) + 0x2c))()
        int32_t ecx_9 = *(arg1 + 0xad4)
        cond:0_1 = eax != ecx_9
        
        if (eax s< ecx_9)
            goto label_6091bc
        
    label_608f77:
        
        if (not(cond:0_1))
            esi_2 = arg1 - 4
            sub_6081c0(esi_2, &var_c, &var_10, arg2)
            
            if (var_c != 0xffffffff)
                eax = var_10
                
                if (eax != 0xffffffff)
                    cond:1_1 = *(arg1 + 0xad0) == eax
                    goto label_608fb3
    case 5
        eax = (*(**(arg1 + 0xa7c) + 0x2c))()
        int32_t ecx_15 = *(arg1 + 0xad4)
        cond:0_1 = eax != ecx_15
        
        if (eax s>= ecx_15)
            goto label_608f77
        
        goto label_6091bc

eax.b = 1
return eax
