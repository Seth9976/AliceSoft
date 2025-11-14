// 函数: sub_5807f0
// 地址: 0x5807f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_7 = arg2[1]
int32_t eax

if (arg1 u< ecx_7)
    eax = *arg2

int32_t* result

if (arg1 u>= ecx_7 || eax u> arg1)
    if (ecx_7 == arg2[2])
        sub_580980(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        result[2] = arg1[2]
        result[3] = arg1[3]
        result[4] = arg1[4]
else
    if (ecx_7 == arg2[2])
        sub_580980(arg2)
    
    int32_t* ecx_2 = *arg2 + (arg1 - eax) s/ 0x14 * 0x14
    result = arg2[1]
    
    if (result != 0)
        *result = *ecx_2
        result[1] = ecx_2[1]
        result[2] = ecx_2[2]
        result[3] = ecx_2[3]
        result[4] = ecx_2[4]
        arg2[1] += 0x14
        return result

arg2[1] += 0x14
return result
