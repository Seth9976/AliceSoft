// 函数: sub_575eb0
// 地址: 0x575eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char ecx = *arg2
char edx = *arg1

if (ecx u<= edx)
    if (ecx u< edx)
        arg1.b = 0
        return arg1
    
    ecx = arg2[1]
    edx = arg1[1]
    
    if (ecx u<= edx)
        if (ecx u< edx)
            arg1.b = 0
            return arg1
        
        ecx = arg2[2]
        edx = arg1[2]
        
        if (ecx u<= edx && (ecx u< edx || arg2[3] u<= arg1[3]))
            arg1.b = 0
            return arg1

arg1.b = 1
return arg1
