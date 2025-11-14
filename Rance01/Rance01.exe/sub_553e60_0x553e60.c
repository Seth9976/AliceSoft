// 函数: sub_553e60
// 地址: 0x553e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
    uint32_t edi_1 = *(*(arg2 + 8) + (arg3 << 2))
    
    if (edi_1 != 0)
        arg3 = *arg4
        uint32_t ecx_5 = *(edi_1 + 4) u>> 2
        
        if (arg3 == ecx_5)
            arg3.b = 1
            return arg3
        
        if (arg3 s<= ecx_5)
            arg3 = sub_554040(ecx_5, edi_1, arg2, arg3)
            
            if (arg3.b == 0)
                return arg3
            
            arg3.b = 1
            return arg3
        
        if (sub_553ec0(arg2, edi_1, ecx_5, arg3).b != 0)
            arg3.b = 1
            return arg3

arg3.b = 0
return arg3
