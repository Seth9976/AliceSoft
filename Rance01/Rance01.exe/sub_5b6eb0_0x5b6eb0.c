// 函数: sub_5b6eb0
// 地址: 0x5b6eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

int32_t* eax_1 = *(arg1 + 8)

if (eax_1 != 0)
    if (*eax_1 != 0)
        __free_base(*eax_1)
    
    void* eax_3 = *(arg1 + 8)
    
    if (*(eax_3 + 4) != 0)
        __free_base(*(eax_3 + 4))
    
    __free_base(*(arg1 + 8))

__builtin_memset(arg1, 0, 0x20)
__free_base(arg1)
