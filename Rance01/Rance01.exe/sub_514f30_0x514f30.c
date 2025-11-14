// 函数: sub_514f30
// 地址: 0x514f30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* result = (*(**(arg1 + 0x274) + 0x14))()

if (result == 0)
    result.b = 0
    return result

int32_t ebx = *(arg1 + 0x278)
int32_t i = 0

if (ebx - 1 s> 0)
    do
        int16_t edx_2 = i.w
        *result = edx_2
        result[1] = edx_2 + 1
        result[2] = ebx.w
        i += 1
        result = &result[3]
    while (i s< *(arg1 + 0x278) - 1)

i.w = *(arg1 + 0x278)
i.w -= 1
*result = i.w
result[1] = 0
result[2] = ebx.w
return (*(**(arg1 + 0x274) + 0x18))() != 0
