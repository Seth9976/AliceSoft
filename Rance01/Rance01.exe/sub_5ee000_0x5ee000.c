// 函数: sub_5ee000
// 地址: 0x5ee000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *arg3
int32_t edi = arg3[1]

if (i == edi)
    return 0

int32_t result = *i

for (; i != edi; i = &i[0x1b])
    int32_t edx = i[3]
    
    if (arg1 s< i[2])
        break
    
    if (arg1 == edx)
        return i[1]
    
    if (arg1 s< edx)
        float var_4 = fconvert.s(sub_5eb5a0(arg1, edx, i))
        int32_t edi_1 = *i
        return sub_70c710(float.t(i[1] - edi_1) * fconvert.t(var_4)) + edi_1
    
    result = i[1]

return result
