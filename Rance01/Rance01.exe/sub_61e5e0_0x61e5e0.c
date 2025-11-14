// 函数: sub_61e5e0
// 地址: 0x61e5e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = *arg1

if (eax != 0)
    while (true)
        if (eax u< 0x81)
            if (eax u< 0xe0)
                goto label_61e5f9
            
            arg1 = &arg1[2]
        else if (eax u<= 0x9f || eax u>= 0xe0)
            arg1 = &arg1[2]
        else
        label_61e5f9:
            
            if (eax == 0x5c)
                break
            
            arg1 = &arg1[1]
        
        eax = *arg1
        
        if (eax == 0)
            return 0
    
    if (*arg1 != 0)
        return &arg1[1]

return 0
