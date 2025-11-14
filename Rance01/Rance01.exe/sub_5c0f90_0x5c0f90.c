// 函数: sub_5c0f90
// 地址: 0x5c0f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_2 = *arg1
int32_t edi = arg1[1]
int32_t var_8 = edi
int32_t i_3 = i_2
long double x87_r5 = float.t(1)
int32_t mxcsr
int16_t x87control
int32_t result = sub_70c710(sub_70cb70(mxcsr, 
    sub_70cce0(mxcsr, x87control, x87_r5 / x87_r5, float.t(var_8)), fconvert.d(arg2)))
int32_t esi = result + 1

while (true)
    int32_t ecx_1 = 1
    int32_t edx_1 = 1
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        ecx_1 = 1
        int32_t i
        
        do
            ecx_1 *= result
            edx_1 *= esi
            i = i_1
            i_1 -= 1
        while (i != 1)
        edi = var_8
    
    if (ecx_1 s> edi)
        result -= 1
        esi -= 1
    else
        if (edx_1 s> edi)
            break
        
        result += 1
        esi += 1

return result
