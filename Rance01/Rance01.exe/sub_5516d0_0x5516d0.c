// 函数: sub_5516d0
// 地址: 0x5516d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_3 = arg1[0xd]
int32_t result

if (eax_3 == 0x10)
    result = arg1[1]
    
    if (arg2 u< result u>> 2)
        if (result != 0)
            result = *arg1
        
        if (sub_552880(arg1[5], *(result + (arg2 << 2))).b != 0
                && sub_54f950(arg1, arg2, 0xffffffff).b != 0)
            result.b = 1
            return result
else
    if (eax_3 != 0x11)
        result.b = 1
        return result
    
    result = arg1[1]
    
    if (arg2 u< result u>> 2)
        if (result != 0)
            result = *arg1
        
        if (sub_552880(arg1[5], *(result + (arg2 << 2))).b != 0
                && sub_54f950(arg1, arg2, 0xffffffff).b != 0)
            result.b = 1
            return result

result.b = 0
return result
