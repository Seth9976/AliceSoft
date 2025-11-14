// 函数: sub_61e0a0
// 地址: 0x61e0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0xb4)

if (eax != *(arg1 + 0xb8))
    int32_t ebx_1 = (zx.d(arg2) - 0x190) << 2
    void* eax_3
    
    if (SendMessageA(*(eax + ((zx.d(arg2) - 0x190) << 2)), 0xf0, 0, 0) != 1)
        SendMessageA(*(ebx_1 + *(arg1 + 0xb4)), 0xf1, 1, 0)
        eax_3 = *(arg1 + 0xb0)
        
        if (zx.d(arg2) - 0x190 s>= 0
                && zx.d(arg2) - 0x190 s<= (*(eax_3 + 0x68) - *(eax_3 + 0x64)) s>> 2)
            *(ebx_1 + *(eax_3 + 0x64)) = 1
            sub_624ee0(eax_3, nullptr)
    else
        SendMessageA(*(ebx_1 + *(arg1 + 0xb4)), 0xf1, 0, 0)
        eax_3 = *(arg1 + 0xb0)
        
        if (zx.d(arg2) - 0x190 s>= 0
                && zx.d(arg2) - 0x190 s<= (*(eax_3 + 0x68) - *(eax_3 + 0x64)) s>> 2)
            *(ebx_1 + *(eax_3 + 0x64)) = 0
            sub_624ee0(eax_3, nullptr)
    SendMessageA(*(arg1 + 0x7c), 0x111, 0x190, 0)

return 0
