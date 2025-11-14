// 函数: sub_519180
// 地址: 0x519180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x10)
int32_t edi = (*(arg1 + 4) - 2) * *(arg1 + 8) * 3

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x10) = 0

int32_t* result = (*(*arg2 + 0x20))()
*(arg1 + 0x10) = result

if (result != 0)
    return (*(*result + 8))(edi * 2, 0) != 0

result.b = 0
return result
