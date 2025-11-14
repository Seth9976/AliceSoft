// 函数: sub_5a0a50
// 地址: 0x5a0a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != 0)
    arg1.b = *arg1
    
    if (arg1.b == (*"1.2.7")[0])
        if (arg3 == 0)
            return 0xfffffffe
        
        *(arg3 + 0x18) = 0
        
        if (*(arg3 + 0x20) == 0)
            *(arg3 + 0x20) = sub_5a3e40
            *(arg3 + 0x28) = 0
        
        if (*(arg3 + 0x24) == 0)
            *(arg3 + 0x24) = sub_5a3e60
        
        void* eax_1 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1, 0x1bcc)
        
        if (eax_1 == 0)
            return 0xfffffffc
        
        *(arg3 + 0x1c) = eax_1
        *(eax_1 + 0x34) = 0
        int32_t result = sub_5a09f0(arg3)
        
        if (result != 0)
            (*(arg3 + 0x24))(*(arg3 + 0x28), eax_1)
            *(arg3 + 0x1c) = 0
        
        return result

return 0xfffffffa
