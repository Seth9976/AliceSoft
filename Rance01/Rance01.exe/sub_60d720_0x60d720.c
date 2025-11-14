// 函数: sub_60d720
// 地址: 0x60d720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = GetScrollPos(arg2, SB_VERT)
int32_t temp0 = divs.dp.d(sx.q(arg3 u>> 0x10), arg1[0x2e] + arg1[0x2d])
int32_t ecx_3 = temp0 + eax_1

if (temp0 + eax_1 s>= 0)
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x38e38e39, arg1[0x31] - arg1[0x30])
    int32_t edx_5 = edx_4 s>> 3
    
    if (ecx_3 s< (edx_5 u>> 0x1f) + edx_5)
        int32_t edx_6 = arg1[0x30]
        int32_t ecx_4 = ecx_3 * 9
        void* esi_1 = edx_6 + (ecx_4 << 2)
        
        if (*(edx_6 + (ecx_4 << 2)) == 0)
            sub_60dbe0(arg1, *(esi_1 + 0x20))
            InvalidateRect(arg2, nullptr, 1)
            arg1[0x3b] = *(esi_1 + 0x20)
            int32_t esi_2 = *(esi_1 + 0x20)
            data_797dc0 = esi_2
            data_78f500 = esi_2
            data_797dc4 = 0
            int32_t var_c_1 = 0
            HWND eax_14 = GetParent(GetParent(GetParent(arg2)))
            HMENU hMenu = CreatePopupMenu()
            HMENU hMenu_1 = hMenu
            
            if (hMenu != 0)
                HWND var_c_2 = eax_14
                AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c62, 0x7351c8)
                AppendMenuA(hMenu, MF_SEPARATOR, 0, nullptr)
                AppendMenuA(hMenu, MF_BYCOMMAND, 0x9d0b, 0x7351dc)
                sub_6105e0(&hMenu_1)
                arg1[0x3b] = 0xffffffff

return 0
