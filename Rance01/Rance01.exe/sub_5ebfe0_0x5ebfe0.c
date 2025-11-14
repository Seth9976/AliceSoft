// 函数: sub_5ebfe0
// 地址: 0x5ebfe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_3 = arg3
float* esi = *arg3
int32_t edi = arg3[1]

if (esi == edi)
    return float.t(0)

float var_4 = fconvert.s(fconvert.t(*esi))

while (esi != edi)
    int32_t edx = esi[3]
    
    if (arg1 s< esi[2])
        break
    
    if (arg1 == edx)
        return fconvert.t(esi[1])
    
    if (arg1 s< edx)
        float var_4_1 = fconvert.s(sub_5eb5a0(arg1, edx, esi))
        return fconvert.t(fconvert.s((fconvert.t(esi[1]) - fconvert.t(*esi)) * fconvert.t(var_4_1)
            + fconvert.t(*esi)))
    
    long double x87_r7_2 = fconvert.t(esi[1])
    esi = &esi[0x1b]
    var_4 = fconvert.s(x87_r7_2)

return fconvert.t(var_4)
