// 函数: sub_54b7c0
// 地址: 0x54b7c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t* ecx = *(arg1 + 0x28)

if (ecx != 0)
    (**ecx)()

int32_t result
result.b = 0
bool cond:0 = *(arg1 + 0x29c) != 0
*(arg1 + 0x298) = 0
*(arg1 + 0x23c) = 0

if (not(cond:0))
    *(arg1 + 0x29c) = 1

return result
