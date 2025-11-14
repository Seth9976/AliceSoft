// 函数: sub_40b770
// 地址: 0x40b770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0 || arg2 == 0)
    arg2.b = 0
    return arg2

int32_t* eax_1 = (*(*arg1 + 8))(arg2, 0)

if (eax_1 != 0)
    int32_t* var_8_1 = eax_1
    char eax_2 = sub_40b650(arg3)
    int32_t eax_3 = *(*eax_1 + 4)
    
    if (eax_2 != 0)
        eax_3()
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    
    eax_3()

eax_1.b = 0
return eax_1
