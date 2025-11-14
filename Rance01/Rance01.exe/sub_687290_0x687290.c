// 函数: sub_687290
// 地址: 0x687290
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
        void* eax_6 = *(arg1 + 0x1c)
        char eax_8
        
        if (*(eax_6 + 0x2c) != 0)
            eax_8 = (*(**(eax_6 + 0x2c) + 0x10))()
        
        if (*(eax_6 + 0x2c) == 0 || eax_8 == 0)
            void* eax_9 = *(arg1 + 0x20)
            char eax_11
            
            if (*(eax_9 + 0x2c) != 0)
                eax_11 = (*(**(eax_9 + 0x2c) + 0x10))()
            
            if (*(eax_9 + 0x2c) == 0 || eax_11 == 0)
                return 0

return 1
