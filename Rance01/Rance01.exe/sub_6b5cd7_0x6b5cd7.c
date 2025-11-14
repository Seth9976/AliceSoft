// 函数: sub_6b5cd7
// 地址: 0x6b5cd7
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[3].b = 0

if (arg2 != 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
else
    uint32_t* eax_1 = __getptd()
    arg1[2] = eax_1
    *arg1 = eax_1[0x1b]
    arg1[1] = eax_1[0x1a]
    
    if (*arg1 != data_78ce08 && (eax_1[0x1c] & data_78cbc0) == 0)
        *arg1 = sub_6be662()
    
    if (arg1[1] != data_78cac8 && (*(arg1[2] + 0x70) & data_78cbc0) == 0)
        arg1[1] = sub_6bdee1()
    
    void* eax_6 = arg1[2]
    
    if ((*(eax_6 + 0x70) & 2) == 0)
        *(eax_6 + 0x70) |= 2
        arg1[3].b = 1

return arg1
