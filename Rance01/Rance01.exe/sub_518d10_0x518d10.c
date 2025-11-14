// 函数: sub_518d10
// 地址: 0x518d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x10) = 0

int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0xc) = 0

void* var_8 = arg1
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0x10
*(arg1 + 8) = 0x10

if (sub_518d90(arg2) != 0 && sub_518e90(arg1) != 0 && sub_519180(arg1, arg2) != 0
        && sub_5191e0(arg1) != 0)
    *(arg1 + 0x14) = 1
    return true

return false
