// 函数: sub_63d850
// 地址: 0x63d850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (arg1 != arg2)
    arg2 -= 0x8c
    
    if (arg1 == arg2)
        break
    
    void var_98
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    arg1 += 0x8c
    __builtin_memcpy(arg2, &var_98, 0x8c)
