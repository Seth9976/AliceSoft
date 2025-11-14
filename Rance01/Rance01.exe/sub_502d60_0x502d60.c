// 函数: sub_502d60
// 地址: 0x502d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* ecx_1 = *(arg2 + 0xd8)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg2 + 0xd8) = 0

int32_t* result = (*(*arg1 + 0x20))()
*(arg2 + 0xd8) = result

if (result == 0)
    result.b = 0
    return result

int32_t eax_2
int32_t edx_3
edx_3:eax_2 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0x38) - *(arg2 + 0x34))
int32_t edx_4 = edx_3 s>> 4
int32_t ecx_5
ecx_5.b = (edx_4 u>> 0x1f) + edx_4 s> 0xffff
var_4.b = ecx_5.b
return (*(*result + 8))(sub_4cee60(arg2 + 0x24), var_4) != 0
