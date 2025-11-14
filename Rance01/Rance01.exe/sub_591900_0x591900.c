// 函数: sub_591900
// 地址: 0x591900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x10)

if (eax != 0)
    (*(*eax + 8))(eax)
    *(arg1 + 0x10) = 0

int32_t* result = *(arg1 + 0xc)

if (result != 0)
    result = (*(*result + 8))(result)
    *(arg1 + 0xc) = 0

*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x3c) = 0
return result
