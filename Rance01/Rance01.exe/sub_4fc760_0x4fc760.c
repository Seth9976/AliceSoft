// 函数: sub_4fc760
// 地址: 0x4fc760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_8 = arg2[1]
int32_t eax

if (arg1 u< ecx_8)
    eax = *arg2

int32_t* result

if (arg1 u>= ecx_8 || eax u> arg1)
    if (ecx_8 == arg2[2])
        sub_4fcec0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        result[2] = arg1[2]
        result[3] = arg1[3]
        result[4] = arg1[4]
        result[5] = arg1[5]
else
    if (ecx_8 == arg2[2])
        sub_4fcec0(arg2)
    
    int32_t* ecx_2 = *arg2 + (arg1 - eax) s/ 0x18 * 0x18
    result = arg2[1]
    
    if (result != 0)
        *result = *ecx_2
        result[1] = ecx_2[1]
        result[2] = ecx_2[2]
        result[3] = ecx_2[3]
        result[4] = ecx_2[4]
        result[5] = ecx_2[5]
        arg2[1] += 0x18
        return result

arg2[1] += 0x18
return result
