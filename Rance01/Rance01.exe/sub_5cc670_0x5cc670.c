// 函数: sub_5cc670
// 地址: 0x5cc670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[4] != 0)
    if (arg1[7].b != 0)
        goto label_5cc6a2
    
    if (sub_5cc7e0(arg1) != 0)
        arg1[7].b = 1
    label_5cc6a2:
        
        if (arg1[0xa] == 0 && arg1[0xe] == 0)
            return 1
        
        sub_58b820(&arg1[8])
        sub_50d890(*(arg1[0xd] + 4))
        void* eax_2 = arg1[0xd]
        *(eax_2 + 4) = eax_2
        int32_t* eax_3 = arg1[0xd]
        *eax_3 = eax_3
        void* eax_4 = arg1[0xd]
        *(eax_4 + 8) = eax_4
        arg1[0xe] = 0
        
        if (sub_5ccb30(arg1) != 0)
            return 1
else
    sub_604c90(0x73750c)

return 0
