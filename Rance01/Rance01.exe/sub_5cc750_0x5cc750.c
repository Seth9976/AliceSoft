// 函数: sub_5cc750
// 地址: 0x5cc750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[4] != 0)
    if (arg1[7].b != 0)
        goto label_5cc789
    
    if (sub_5cc7e0(arg1) != 0)
        arg1[7].b = 1
    label_5cc789:
        int32_t edi = arg1[0xd]
        void** eax_2 = sub_5cdae0(&arg1[0xc], arg2)
        
        if (eax_2 != arg1[0xd] && sub_405dd0(&eax_2[3], arg2) == 0)
            int32_t* eax_5
            eax_5.b = eax_2 != edi
            return eax_5
        
        int32_t eax_7
        eax_7.b = arg1[0xd] != edi
        return eax_7
else
    sub_604c90(0x73750c)

return 0
