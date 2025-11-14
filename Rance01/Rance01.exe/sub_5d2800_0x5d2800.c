// 函数: sub_5d2800
// 地址: 0x5d2800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0x4c))()
(*(*arg1 + 0x18))()
int32_t* ecx_1 = arg1[0xa]
arg1[0x22] = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[0xa] = 0

int32_t* result = arg1[7]

if (result != 0)
    (*(*result + 8))(result)
    arg1[7] = 0

result.b = 1
return result
