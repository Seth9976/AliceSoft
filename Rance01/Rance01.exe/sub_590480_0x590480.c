// 函数: sub_590480
// 地址: 0x590480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *(arg1 + 0xc)

if (result != 0)
    result = (*(*result + 8))(result)
    *(arg1 + 0xc) = 0

int32_t* ecx_1 = *(arg1 + 0x10)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 0x10) = 0

__builtin_memset(arg1 + 0x14, 0, 0x15)
*(arg1 + 0x2c) = 0
return result
