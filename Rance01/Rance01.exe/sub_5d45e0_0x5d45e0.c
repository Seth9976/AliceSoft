// 函数: sub_5d45e0
// 地址: 0x5d45e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0x3c))()
(*(*arg1 + 0x18))()
int32_t* eax_2 = arg1[7]

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    arg1[7] = 0

int32_t* result = arg1[6]

if (result != 0)
    (*(*result + 8))(result)
    arg1[6] = 0

arg1[0x11] = 0
result.b = 1
return result
