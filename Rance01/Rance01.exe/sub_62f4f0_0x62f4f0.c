// 函数: sub_62f4f0
// 地址: 0x62f4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

switch (arg3)
    case 1
        return sub_62f610(arg1, arg2)
    case 2
        uint32_t uIDEvent = *(arg1 + 0x1b0)
        
        if (uIDEvent != 0)
            KillTimer(arg2, uIDEvent)
            *(arg1 + 0x1b0) = 0
        
        return 0
    case 5
        uint32_t ecx_1 = zx.d(arg5.w)
        
        if (ecx_1 s<= 0)
            return 0
        
        sub_62f790(arg1, arg5, ecx_1)
        return 0
    case 0xf
        sub_62f680(arg1, arg2)
        return 0
    case 0x113
        sub_62f820(arg1, arg2)
        return 0
    case 0x200
        int32_t edx
        sub_62f8c0(arg1, edx, arg5)
        return 0
    case 0x202
        BOOL eax_16 = sub_62f920(sx.d((arg5 u>> 0x10).w), arg1, sx.d(arg5.w))
        
        if (eax_16 != 0xffffffff)
            sub_630420(arg1, eax_16)
        
        return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
