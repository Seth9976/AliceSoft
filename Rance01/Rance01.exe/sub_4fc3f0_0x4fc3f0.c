// 函数: sub_4fc3f0
// 地址: 0x4fc3f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_2 = arg2[1]
int32_t eax

if (arg1 u< ecx_2)
    eax = *arg2

int32_t result
int32_t (__fastcall* var_8_1)(struct sealengine::CPolyVertex::VTable** arg1)

if (arg1 u>= ecx_2 || eax u> arg1)
    if (ecx_2 == arg2[2])
        sub_4fca80(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        var_8_1 = sub_503520
        result = sub_6b53ec(result, arg1, 0x3c, 3, sub_4fe0b0)
else
    if (ecx_2 == arg2[2])
        sub_4fca80(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        var_8_1 = sub_503520
        result = sub_6b53ec(result, (arg1 - eax) s/ 0xb4 * 0xb4 + *arg2, 0x3c, 3, sub_4fe0b0)
arg2[1] += 0xb4
return result
