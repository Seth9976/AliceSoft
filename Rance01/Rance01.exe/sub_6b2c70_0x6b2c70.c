// 函数: sub_6b2c70
// 地址: 0x6b2c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[5].b != 0)
    int32_t* eax = *arg1
    int32_t eax_1
    
    if (eax != 0)
        eax_1 = (*(*eax + 0x4c))(eax)
    
    if (eax != 0 && eax_1 s< 0)
        sub_604c90("DirectDraw")
        return 0
    
    arg1[5].b = 0

if (*arg1 == 0 && sub_6b2a50(arg1) == 0)
    return 0

HDC eax_4 = GetDC(GetDesktopWindow())
int32_t eax_5 = GetDeviceCaps(eax_4, 0xc)
ReleaseDC(GetDesktopWindow(), eax_4)
int32_t eax_8 = sub_6b2ba0(arg1, arg2, arg3, eax_5)

if (eax_8 s>= 0)
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = muls.dp.d(0x2aaaaaab, arg1[2] - arg1[1])
    int32_t edx_3 = edx_2 s>> 1
    
    if (eax_8 s< (edx_3 u>> 0x1f) + edx_3)
        int32_t* eax_10 = *arg1
        
        if ((*(*eax_10 + 0x50))(eax_10, 0, 8) s< 0)
            sub_604c90("DirectDraw")
            enum MESSAGEBOX_RESULT eax_13
            eax_13.b = 0
            return eax_13
        
        int32_t* eax_14 = arg1[1]
        int32_t* ecx_7 = *arg1
        bool cond:0 = (*(*ecx_7 + 0x54))(ecx_7, eax_14[eax_8 * 3], eax_14[eax_8 * 3 + 1], 
            eax_14[eax_8 * 3 + 2], 0, 0) s>= 0
        int32_t* eax_17 = arg1[1]
        
        if (cond:0)
            *arg4 = eax_17[eax_8 * 3]
            *arg5 = eax_17[eax_8 * 3 + 1]
            int32_t* eax_20
            eax_20.b = 1
            arg1[5].b = 1
            return eax_20
        
        int32_t var_14_3 = eax_17[eax_8 * 3 + 2]
        int32_t var_18_3 = eax_17[eax_8 * 3 + 1]
        int32_t var_1c_3 = eax_17[eax_8 * 3]
        sub_604c90("DirectDraw")
        enum MESSAGEBOX_RESULT eax_19
        eax_19.b = 0
        return eax_19

int32_t var_14_4 = eax_5
int32_t var_18_4 = arg3
int32_t var_1c_4 = arg2
sub_604c90(0x72cd3c)
enum MESSAGEBOX_RESULT eax_21
eax_21.b = 0
return eax_21
