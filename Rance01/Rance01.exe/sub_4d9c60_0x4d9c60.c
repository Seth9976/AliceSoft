// 函数: sub_4d9c60
// 地址: 0x4d9c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_2 = *(arg2 + 0x84)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg2 + 0x84) = 0

int32_t* result = (*(*arg1 + 0x20))()
*(arg2 + 0x84) = result

if (result != 0)
    return (*(*result + 8))(sub_4cee60(arg2 + 0x28), 0) != 0

result.b = 0
return result
