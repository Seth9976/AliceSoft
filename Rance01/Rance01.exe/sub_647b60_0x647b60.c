// 函数: sub_647b60
// 地址: 0x647b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

while (arg1 != arg2)
    arg2 -= 0x28
    
    if (arg1 == arg2)
        break
    
    void var_28
    __builtin_memcpy(&var_28, arg1, 0x28)
    __builtin_memcpy(arg1, arg2, 0x28)
    arg1 += 0x28
    __builtin_memcpy(arg2, &var_28, 0x28)
