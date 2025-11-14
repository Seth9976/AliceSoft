// 函数: sub_5b2d60
// 地址: 0x5b2d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = data_797d74

if (arg6 == 0)
    if (arg5 == 0)
        if (ecx != 0)
            arg3 = (*(*ecx + 0xc))(arg2, arg3, 0x20)
            
            if (arg3 != 0)
                goto label_5b2dc2
            
            arg3.b = 0
            return arg3
    else if (ecx != 0)
        arg3 = (*(*ecx + 8))(arg2, arg3, 0x20)
        
        if (arg3 != 0)
            goto label_5b2dc2
        
        arg3.b = 0
        return arg3
else if (ecx != 0)
    arg3 = (*(*ecx + 0x10))(arg2, arg3)
    
    if (arg3 != 0)
    label_5b2dc2:
        *(arg4 + 0x10) = arg3
        arg3.b = 1
        return arg3

arg3.b = 0
return arg3
