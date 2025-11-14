// 函数: sub_5b0c10
// 地址: 0x5b0c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg2 = *(arg3 + 8)

if (arg2 == 0)
    int32_t i_3 = *(arg3 + 4)
    
    if (i_3 != 0)
        int32_t i
        
        do
            *arg1 = not.b(*arg1)
            arg1 = &arg1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg2 == 4)
    if (*(arg3 + 9) == 8)
        int32_t ecx = *(arg3 + 4)
        
        if (ecx != 0)
            int32_t i_4 = ((ecx - 1) u>> 1) + 1
            int32_t i_1
            
            do
                *arg1 = not.b(*arg1)
                arg1 = &arg1[2]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    else if (arg2 == 4 && *(arg3 + 9) == 0x10)
        int32_t ecx_3 = *(arg3 + 4)
        
        if (ecx_3 != 0)
            arg1 = &arg1[1]
            int32_t i_5 = ((ecx_3 - 1) u>> 2) + 1
            int32_t i_2
            
            do
                arg1[0xffffffff] = not.b(arg1[0xffffffff])
                *arg1 = not.b(*arg1)
                arg1 = &arg1[4]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
