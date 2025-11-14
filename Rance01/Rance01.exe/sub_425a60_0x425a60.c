// 函数: sub_425a60
// 地址: 0x425a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 1) == 0 || *(arg1 + 0x38) != 0)
    return 

int32_t* ecx_1 = *(arg1 + 0x3c)
int32_t eax_2

if (ecx_1 == 0)
    eax_2 = 0
else
    eax_2 = (**ecx_1)()

if (eax_2 - *(arg1 + 0x34) u< 0x3e8)
    return 

bool cond:0_1 = *(arg1 + 0x3b) == 0
*(arg1 + 0x38) = 1

if (not(cond:0_1))
    ShowCursor(0)
    *(arg1 + 0x3b) = 0

int32_t* ecx_2 = *(arg1 + 0x3c)

if (ecx_2 != 0)
    *(arg1 + 0x34) = (**ecx_2)()
    return 

*(arg1 + 0x34) = 0
