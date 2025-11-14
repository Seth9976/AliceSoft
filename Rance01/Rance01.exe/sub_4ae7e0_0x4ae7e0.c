// 函数: sub_4ae7e0
// 地址: 0x4ae7e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4aef10(*(*(arg1 + 0x28) + 4))
void* eax = *(arg1 + 0x28)
*(eax + 4) = eax
int32_t* eax_1 = *(arg1 + 0x28)
*eax_1 = eax_1
void* eax_2 = *(arg1 + 0x28)
*(eax_2 + 8) = eax_2
void* result = arg1 + 8
*(arg1 + 0x2c) = 0
bool cond:0 = *(result + 0x14) u< 0x10
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
int32_t* ecx_2 = *(arg1 + 4)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *(arg1 + 4) = 0

return result
