// 函数: sub_617930
// 地址: 0x617930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t ecx
eax, ecx = GetWindowLongA(arg1, 0xffffffeb)

if (eax == 0)
    return DefWindowProcA(arg1, arg2, arg3, arg4)

uint32_t Msg = arg2

if (Msg u> 0x101)
    if (Msg == 0x111)
        if (arg3 u>> 0x10 != 0)
            return 0
        
        int32_t* ecx_10 = *(eax + 4)
        
        if (ecx_10 == 0)
            return 0
        
        if ((**ecx_10)(arg1, arg3, arg4) == 0)
            return 0
        
        Msg = arg2
    else if (Msg == 0x203)
        if (sub_617880(arg1, arg4) != 0)
            int32_t* ecx_7 = *(eax + 4)
            
            if (ecx_7 != 0 && (*(*ecx_7 + 4))(arg1, arg3, arg4) != 0)
                return 0
        
        Msg = arg2
else if (Msg == 0x101)
    if (sub_617830(ecx, arg4, arg3, eax, arg1) != 0)
        return 0
    
    Msg = arg2
else if (Msg == 2)
    int32_t* ecx_6 = *(eax + 4)
    
    if (ecx_6 != 0)
        if ((*(*ecx_6 + 8))(arg1, arg3, arg4) == 0)
            return 0
        
        Msg = arg2
else if (Msg == 7)
    int16_t eax_3
    eax_3.b = (GetAsyncKeyState(0xd) u>> 0xf).b & 1
    *(eax + 9) = eax_3.b
    *(eax + 8) = 0
    Msg = arg2
else if (Msg == 0x100 && arg3 == 0xd && *(eax + 9) == (Msg - 7).b + 7)
    *(eax + 8) = 1

return CallWindowProcA(*(eax + 0xc), arg1, Msg, arg3, arg4)
