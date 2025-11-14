// 函数: sub_53fb70
// 地址: 0x53fb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, *(arg2 + 0xcc) - *(arg2 + 0xc8))
int32_t edx_1 = edx s>> 5
void* ecx_1

if (arg1 u< (edx_1 u>> 0x1f) + edx_1)
    ecx_1 = arg1 * 0x4c + *(arg2 + 0xc8)
else
    ecx_1 = nullptr

int32_t eax_4
int32_t edx_4
edx_4:eax_4 = muls.dp.d(0x6bca1af3, *(arg2 + 0xbc) - *(arg2 + 0xb8))
int32_t edx_5 = edx_4 s>> 5
void* result

if (arg3 u< (edx_5 u>> 0x1f) + edx_5)
    result = arg3 * 0x4c + *(arg2 + 0xb8)
else
    result = nullptr

if (ecx_1 != 0 && result != 0)
    return sub_52f2a0(result, edx_5, ecx_1)

result.b = 0
return result
