// 函数: sub_546ef0
// 地址: 0x546ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = arg2[1]

if (ecx_2 u< 1)
    **(arg4 + 0x2b0) = 0xffffffff
    *(arg4 + 0x2b0) += 4
    int32_t* eax
    eax.b = 1
    return eax

int32_t edi

if (ecx_2 != 0)
    edi = *arg2
else
    edi = 0

if (arg3 s< 0)
    arg3 = 0

if (arg7 == 0)
    uint32_t ecx
    
    if (arg2[0x10].b != 0)
        ecx = ecx_2 u>> 2
    else
        ecx = 0
    
    if (arg3 s< arg5)
        while (arg3 s< ecx)
            if (*(edi + (arg3 << 2)) == arg6)
                **(arg4 + 0x2b0) = arg3
                *(arg4 + 0x2b0) += 4
                arg3.b = 1
                return arg3
            
            arg3 += 1
            
            if (arg3 s>= arg5)
                break
    
    **(arg4 + 0x2b0) = 0xffffffff
    *(arg4 + 0x2b0) += 4

arg3.b = 1
return arg3
