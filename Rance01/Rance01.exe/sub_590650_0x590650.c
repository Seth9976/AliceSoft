// 函数: sub_590650
// 地址: 0x590650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax_8 = sub_5904d0(arg1, 
    (*(*arg2 + 0x10))((*(*arg2 + 0x14))(zx.d((*(*arg2 + 0x24))(zx.d((*(*arg2 + 0x28))(arg3)))))))

if (eax_8 == 0)
    return eax_8

arg1[4] = arg2
(**arg2)()
int32_t* eax_10 = arg1[3]

if (eax_10 != 0)
    int32_t var_14_1 = arg1[8]
    
    if (sub_590b40(eax_10, arg1[5], arg1[6], arg1[4], arg1[7]).b != 0)
        arg1[0xa].b = 0
        eax_10.b = 1
        return eax_10

eax_10.b = 0
return eax_10
