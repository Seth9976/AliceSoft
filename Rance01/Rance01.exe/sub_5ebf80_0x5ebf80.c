// 函数: sub_5ebf80
// 地址: 0x5ebf80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_410070(arg2, &arg1[4]) != 0)
    char eax
    int32_t ecx_2
    eax, ecx_2 = sub_410070(arg2, &arg1[0xb])
    
    if (eax != 0)
        int32_t ecx_3
        eax, ecx_3 = sub_40ff40(ecx_2, arg2, arg1)
        
        if (eax != 0 && sub_40ff40(ecx_3, arg2, &arg1[1]) != 0 && sub_5546f0(arg2, &arg1[2]) != 0
                && sub_5546f0(arg2, &arg1[3]) != 0)
            arg1[0x12].b = 0
            return 1

return 0
