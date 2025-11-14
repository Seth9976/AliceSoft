// 函数: sub_5d47d0
// 地址: 0x5d47d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_c = arg1
(*(*arg1 + 0x3c))()
(*(*arg1 + 0x18))()
int32_t* eax_2 = arg1[7]

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    arg1[7] = 0

int32_t* eax_3 = arg1[6]

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    arg1[6] = 0

arg1[0x11] = 0
char result = sub_5d4fd0(arg1, arg2, arg3)

if (result != 0)
    return sub_5d4f40(arg1) != 0

return result
