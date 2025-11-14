// 函数: sub_59a980
// 地址: 0x59a980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *arg1
*arg1 = eax + 1
*arg3 = *(*arg2 + (eax << 2))

if (sub_59a0b0(arg2, arg1, &arg3[1]) != 0 && sub_59abe0(&arg3[8], arg2, arg1) != 0)
    int32_t eax_4 = *arg1
    *arg1 = eax_4 + 1
    arg3[0xc] = *(*arg2 + (eax_4 << 2))
    int32_t eax_5 = *arg1
    *arg1 = eax_5 + 1
    arg3[0xd] = *(*arg2 + (eax_5 << 2))
    int32_t eax_7 = *arg1
    *arg1 = eax_7 + 1
    arg3[0xe] = *(*arg2 + (eax_7 << 2))
    int32_t eax_9 = *arg1
    *arg1 = eax_9 + 1
    arg3[0xf] = *(*arg2 + (eax_9 << 2))
    int32_t eax_11 = *arg1
    *arg1 = eax_11 + 1
    arg3[0x10] = *(*arg2 + (eax_11 << 2))
    
    if (sub_59ab90(&arg3[0x11], arg1, arg2) != 0)
        return sub_59ab90(&arg3[0x15], arg1, arg2) != 0

return 0
