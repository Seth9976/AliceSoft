// 函数: sub_522880
// 地址: 0x522880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    void* eax_1 = data_797d4c
    int32_t edx_3 = (*(eax_1 + 0x44) - *(eax_1 + 0x40)) s>> 2
    
    if (arg1 s< edx_3)
        void* eax_3 = *(*(eax_1 + 0x40) + (arg1 << 2))
        
        if (eax_3 != 0 && eax_3 != 0xfffffff0)
            return sub_4c8cb0(eax_3 + 0x10, edx_3, arg1) __tailcall

return 0xffffffff
