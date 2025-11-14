// 函数: sub_5875e0
// 地址: 0x5875e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = *arg1
int32_t esi = arg1[1]
int32_t result = 0

if (edx != esi)
    while (true)
        int32_t ecx = *edx
        
        if (ecx u> 0xa)
            break
        
        switch (ecx)
            case 0, 0xa
                result += 0x10
            case 1, 2, 3
                result += 0xc
            case 4, 5, 9
                result += 4
            case 6, 7, 8
                result += 8
        
        edx = &edx[1]
        
        if (edx == esi)
            return result

return 0
