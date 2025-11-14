// 函数: sub_66c6d0
// 地址: 0x66c6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char result

if (arg1[0xb] != 0)
    void* eax = &arg1[7]
    
    if (arg1[0xc] u>= 0x10)
        eax = *eax
    
    result = (*(*arg1 + 8))(eax)
    
    if (result == 0)
        return result
else if (arg1[0x12] != 0)
    void* eax_2 = &arg1[0xe]
    
    if (arg1[0x13] u>= 0x10)
        eax_2 = *eax_2
    
    result = (*(*arg1 + 0xc))(eax_2)
    
    if (result == 0)
        return result
else if (arg1[0x19] != 0)
    void* eax_4 = &arg1[0x15]
    
    if (arg1[0x1a] u>= 0x10)
        eax_4 = *eax_4
    
    result = (*(*arg1 + 0x10))(eax_4)
    
    if (result == 0)
        return result
return 1
