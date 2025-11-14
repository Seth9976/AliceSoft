// 函数: sub_5ee080
// 地址: 0x5ee080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *arg3
int32_t edi = arg3[1]

if (esi == edi)
    return float.t(0)

int32_t var_c = *esi

while (esi != edi)
    int32_t edx = esi[3]
    
    if (arg1 s< esi[2])
        break
    
    if (arg1 == edx)
        return float.t(esi[1])
    
    if (arg1 s< edx)
        float var_8 = fconvert.s(sub_5eb5a0(arg1, edx, esi))
        int32_t eax = *esi
        return fconvert.t(fconvert.s(float.t(esi[1] - eax) * fconvert.t(var_8) + float.t(eax)))
    
    int32_t edx_1 = esi[1]
    esi = &esi[0x1b]
    var_c = edx_1

return float.t(var_c)
