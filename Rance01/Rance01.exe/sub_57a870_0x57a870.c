// 函数: sub_57a870
// 地址: 0x57a870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t* ecx = *(arg1 + 0x64)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x64) = 0

int32_t* ecx_1 = *(arg1 + 0x60)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x60) = 0

sub_57b9e0(arg1 + 0x4c, &var_4, *(arg1 + 0x4c), *(arg1 + 0x50))
int32_t* result
result.b = 1
return result
