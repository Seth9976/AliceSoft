// 函数: sub_66faf0
// 地址: 0x66faf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_6 = arg2[1]
int32_t eax

if (arg1 u< ecx_6)
    eax = *arg2

int32_t* result

if (arg1 u>= ecx_6 || eax u> arg1)
    if (ecx_6 == arg2[2])
        sub_66fb70(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        result[2] = arg1[2]
else
    if (ecx_6 == arg2[2])
        sub_66fb70(arg2)
    
    int32_t* ecx_2 = *arg2 + (arg1 - eax) s/ 0xc * 0xc
    result = arg2[1]
    
    if (result != 0)
        *result = *ecx_2
        result[1] = ecx_2[1]
        result[2] = ecx_2[2]
        arg2[1] += 0xc
        return result

arg2[1] += 0xc
return result
