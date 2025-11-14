// 函数: sub_514400
// 地址: 0x514400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = sub_4b40e0(&arg1[0x48])
int32_t* ecx = *(arg1 + 0x24)

if (ecx != 0)
    result = (*(*ecx + 4))()
    *(arg1 + 0x24) = 0

arg1[0x44] = 0
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
arg1[0x18] = 0
*(arg1 + 0x1c) = 0
arg1[0x20] = 0
*(arg1 + 0xac) = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*arg1 = 0
return result
