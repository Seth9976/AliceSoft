// 函数: sub_6b0d00
// 地址: 0x6b0d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u> 0x200)
    if (arg3 != 0x201)
        if (arg3 != 0x202)
            return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
        
        arg1[0x22].b = 0
        *arg1[0x23] = 1
        *arg1[0x24] = 0
        ReleaseCapture()
        return 0
    
    arg1[0x22].b = 1
    SetCapture(arg2)
else
    if (arg3 == 0x200)
        return (*(*arg1 + 8))(arg2, arg4, arg5, 0)
    
    if (arg3 != 5)
        if (arg3 == 0xf)
            return (*(*arg1 + 0xc))(arg2, arg4, arg5)
        
        return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
    
    uint32_t eax_2 = zx.d(arg5.w)
    HGDIOBJ ecx_4 = arg5 u>> 0x10
    
    if (eax_2 s> 0 && ecx_4 s> 0 && sub_6a4b20(eax_2, &arg1[0x18], arg2, ecx_4) == 0)
        arg1[0x27].b = 1

return 0
