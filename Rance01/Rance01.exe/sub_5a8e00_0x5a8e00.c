// 函数: sub_5a8e00
// 地址: 0x5a8e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_4 = *arg1
int32_t esi = arg3
arg3.b = arg1[2].b

if (arg3.b == 6)
    void* eax = arg1[1]
    
    if (*(arg1 + 9) != 8)
        arg1 = eax + esi
        
        if (i_4 != 0)
            int32_t i_5 = i_4
            int32_t i
            
            do
                i_4.b = 0xff
                i_4.b = 0xff - *(arg1 - 1)
                arg1 -= 8
                *(arg1 + 7) = i_4.b
                i_4.b = 0xff
                i_4.b = 0xff - *(arg1 + 6)
                i = i_5
                i_5 -= 1
                *(arg1 + 6) = i_4.b
            while (i != 1)
    else
        arg1 = eax + esi
        
        if (i_4 != 0)
            int32_t i_1
            
            do
                arg3.b = 0xff
                arg3.b = 0xff - *(arg1 - 1)
                arg1 -= 4
                i_1 = i_4
                i_4 -= 1
                *(arg1 + 3) = arg3.b
            while (i_1 != 1)
else if (arg3.b == 4)
    void* eax_1 = arg1[1]
    
    if (*(arg1 + 9) != 8)
        arg1 = eax_1 + esi
        
        if (i_4 != 0)
            int32_t i_7 = i_4
            int32_t i_2
            
            do
                i_4.b = 0xff
                i_4.b = 0xff - *(arg1 - 1)
                arg1 -= 4
                *(arg1 + 3) = i_4.b
                i_4.b = 0xff
                i_4.b = 0xff - *(arg1 + 2)
                i_2 = i_7
                i_7 -= 1
                *(arg1 + 2) = i_4.b
            while (i_2 != 1)
    else
        arg1 = eax_1 + esi
        int32_t* ecx = arg1
        
        if (i_4 != 0)
            int32_t i_6 = i_4
            int32_t i_3
            
            do
                i_4.b = 0xff
                i_4.b = 0xff - *(arg1 - 1)
                arg1 -= 2
                *(ecx - 1) = i_4.b
                i_4.b = *arg1
                ecx -= 2
                i_3 = i_6
                i_6 -= 1
                *ecx = i_4.b
            while (i_3 != 1)
