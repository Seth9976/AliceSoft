// 函数: sub_544c00
// 地址: 0x544c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
*(arg1 + 0x2b0) -= 4
int32_t edi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t eax_2 = **(arg1 + 0x2b0)
int32_t edx

if (eax_2 == 0xffffffff)
    return sub_53d1c0(eax_2, edx, arg1, 0x74f020)

if (edi == 0xffffffff)
    return sub_53d1c0(eax_2, edx, arg1, 0x74f03c)

uint32_t eax_5
int32_t edx_1
eax_5, edx_1 = sub_553d70(arg1 + 0x1dc, eax_2, edi)

if (eax_5.b == 0)
    return sub_53d1c0(eax_5, edx_1, arg1, 0x74f058)

**(arg1 + 0x2b0) = edi
*(arg1 + 0x2b0) += 4
int32_t* result
result.b = 1
return result
