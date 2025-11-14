// 函数: sub_406b20
// 地址: 0x406b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg2[3]
*arg2 += 1
uint32_t result

if (ecx == 0)
    result = GetTickCount()
else
    result = (**ecx)(arg1)

int32_t ecx_2 = result - arg2[1]

if (ecx_2 u>= 0x3e8)
    long double x87_r6_1 = float.t(ecx_2)
    
    if (ecx_2 s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_2 = float.t(*arg2 * 0x3e8) / x87_r6_1
    *arg2 = 0
    arg2[1] = result
    arg2[2] = fconvert.s(x87_r7_2)

return result
