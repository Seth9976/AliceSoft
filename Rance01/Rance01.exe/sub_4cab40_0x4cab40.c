// 函数: sub_4cab40
// 地址: 0x4cab40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx

switch (*arg1 - 1)
    case 0
        if (arg1[2] != 0)
            edx.b = arg1[3].b
            
            if (edx.b == 0)
                arg2 = *(arg2 + 0x1d0)
                
                if (arg2 == 0 || *(arg1[2] + 0x10) != arg2)
                    arg2.b = 0
                    return arg2
    case 1
        if (arg1[5] != 0)
            edx.b = arg1[6].b
            
            if (edx.b == 0)
                arg2 = *(arg2 + 0x1d0)
                
                if (arg2 == 0)
                    arg2.b = 0
                    return arg2
                
                void* ecx_1 = arg1[5]
                
                if (*(ecx_1 + 0x10) != arg2)
                    arg2.b = 0
                    return arg2
                
                if (sub_4d9a70(ecx_1, arg3, arg4).b == 0)
                    arg2.b = 0
                    return arg2
    case 2
        if (arg1[0xa] != 0)
            edx.b = arg1[0xb].b
            
            if (edx.b == 0)
                arg2 = sub_4b31f0(arg1[0xa], *(arg2 + 0x260))
                
                if (arg2.b == 0)
                    return arg2
    case 7
        if (arg1[0x14] != 0)
            edx.b = arg1[0x15].b
            
            if (edx.b == 0)
                void* edx_3 = *(arg2 + 0x26c)
                
                if (edx_3 == 0)
                    arg2.b = 0
                    return arg2
                
                if (sub_4eb9b0(arg1[0x14], *(edx_3 + 8)).b == 0)
                    arg2.b = 0
                    return arg2

arg2.b = 1
return arg2
