// 函数: sub_622ca0
// 地址: 0x622ca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_2 = (*(**(arg1 + 4) + 0x14))(arg3) + 1

if (eax_2 u> 6)
    sub_401270(arg2, 3, 0x733dec)
    int32_t* eax_25
    eax_25.b = 1
    return eax_25

switch (eax_2)
    case 0
        sub_401270(arg2, 7, "(empty)")
        int32_t* eax_24
        eax_24.b = 1
        return eax_24
    case 1
        sub_401270(arg2, 0xc, 0x733da8)
        int32_t* eax_3
        eax_3.b = 1
        return eax_3
    case 2
        int128_t* eax_7
        char ecx_3
        eax_7, ecx_3 = (***(arg1 + 8))((*(**(arg1 + 4) + 0x18))(arg3))
        
        if (eax_7 == 0)
            sub_401140(ecx_3, 0x733dbc, arg2)
            int32_t* eax_9
            eax_9.b = 1
            return eax_9
        
        sub_405e30(sub_401140(ecx_3, eax_7, arg2), 0x733db8, arg2)
        int32_t* eax_8
        eax_8.b = 1
        return eax_8
    case 3
        int32_t* eax_11
        char ecx_6
        eax_11, ecx_6 = (*(**(arg1 + 4) + 4))(arg3)
        
        if (eax_11 == 0)
            sub_401140(ecx_6, 0x733dc4, arg2)
            int32_t* eax_12
            eax_12.b = 1
            return eax_12
        
        sub_401140(ecx_6, 0x733dc8, arg2)
        int128_t* eax_14
        char ecx_8
        eax_14, ecx_8 = (*(*eax_11 + 0x18))()
        sub_405e30(sub_405e30(ecx_8, eax_14, arg2), 0x733dcc, arg2)
        int32_t* eax_15
        eax_15.b = 1
        return eax_15
    case 4
        sub_623c20(arg1, arg2, arg3)
        uint32_t eax_16
        eax_16.b = 1
        return eax_16
    case 5
        int128_t* eax_20
        char ecx_13
        eax_20, ecx_13 = (*(**(arg1 + 8) + 4))((*(**(arg1 + 4) + 0x1c))(arg3))
        
        if (eax_20 == 0)
            sub_401140(ecx_13, 0x733dd0, arg2)
            int32_t* eax_22
            eax_22.b = 1
            return eax_22
        
        sub_401140(ecx_13, eax_20, arg2)
        int32_t* eax_21
        eax_21.b = 1
        return eax_21
    case 6
        sub_401270(arg2, 8, "delegate")
        int32_t* eax_23
        eax_23.b = 1
        return eax_23
