// 函数: sub_5a09f0
// 地址: 0x5a09f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0)
    void* esi_1 = *(arg1 + 0x1c)
    
    if (esi_1 != 0)
        int32_t eax_1 = *(esi_1 + 0x34)
        
        if (eax_1 != 0 && *(esi_1 + 0x24) != 0xf)
            (*(arg1 + 0x24))(*(arg1 + 0x28), eax_1)
            *(esi_1 + 0x34) = 0
        
        *(esi_1 + 8) = 1
        *(esi_1 + 0x24) = 0xf
        void* eax_3 = *(arg1 + 0x1c)
        
        if (eax_3 != 0)
            *(eax_3 + 0x28) = 0
            *(eax_3 + 0x2c) = 0
            *(eax_3 + 0x30) = 0
            return sub_5a0980(arg1) __tailcall

return 0xfffffffe
