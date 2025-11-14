// 函数: sub_692d30
// 地址: 0x692d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0x20)

if (result == 0 || *(arg1 + 0x24) == 0)
    result.b = 0
    return result

char eax_1

if (*(result + 0x2c) != 0)
    eax_1 = (*(**(result + 0x2c) + 0x10))()

if (*(result + 0x2c) == 0 || eax_1 == 0)
    void* eax_2 = *(arg1 + 0x24)
    char eax_4
    
    if (*(eax_2 + 0x2c) != 0)
        eax_4 = (*(**(eax_2 + 0x2c) + 0x10))()
    
    if (*(eax_2 + 0x2c) == 0 || eax_4 == 0)
        void* eax_5 = *(arg1 + 0x10)
        char eax_7
        
        if (*(eax_5 + 0x2c) != 0)
            eax_7 = (*(**(eax_5 + 0x2c) + 0x10))()
        
        if ((*(eax_5 + 0x2c) == 0 || eax_7 == 0) && sub_413690(*(arg1 + 0x14)) == 0
                && sub_413690(*(arg1 + 0x18)) == 0 && sub_413690(*(arg1 + 0x1c)) == 0)
            return 0

return 1
