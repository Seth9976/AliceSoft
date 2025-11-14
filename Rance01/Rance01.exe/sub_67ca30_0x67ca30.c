// 函数: sub_67ca30
// 地址: 0x67ca30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 0x14)
char eax_2

if (*(eax + 0x2c) != 0)
    eax_2 = (*(**(eax + 0x2c) + 0x10))()

if (*(eax + 0x2c) == 0 || eax_2 == 0)
    void* eax_3 = *(arg1 + 0x18)
    char eax_5
    
    if (*(eax_3 + 0x2c) != 0)
        eax_5 = (*(**(eax_3 + 0x2c) + 0x10))()
    
    if (*(eax_3 + 0x2c) == 0 || eax_5 == 0)
        return 0

return 1
