// 函数: sub_56d730
// 地址: 0x56d730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(**(arg1 + 0x18) + 0x10))()
int32_t eax_3 = (*(**(arg1 + 0x18) + 0x14))()
int32_t ebp = *(arg1 + 0x2c)

if (ebp s< eax_1 || *(arg1 + 0x30) s< eax_3)
    *(arg1 + 0x34) = eax_1
    *(arg1 + 0x38) = eax_3

int32_t result = divs.dp.d(sx.q(ebp * eax_3), eax_1)
int32_t ebx = *(arg1 + 0x30)

if (result s> ebx)
    result = divs.dp.d(sx.q(ebx * eax_1), eax_3)
    
    if (result s>= eax_1)
        *(arg1 + 0x38) = ebx
        *(arg1 + 0x34) = result
        return result
else if (result s>= eax_3)
    *(arg1 + 0x34) = ebp
    *(arg1 + 0x38) = result
    return result

*(arg1 + 0x34) = eax_1
*(arg1 + 0x38) = eax_3
return result
