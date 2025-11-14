// 函数: sub_4b5eb0
// 地址: 0x4b5eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_6 = arg2[1]
int32_t eax

if (arg1 u< ecx_6)
    eax = *arg2

struct sealengine::CBone::VTable** result

if (arg1 u>= ecx_6 || eax u> arg1)
    int32_t edx
    
    if (ecx_6 == arg2[2])
        edx = sub_4b5fa0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        sub_4b6320(result, edx, arg1)
else
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2fa0be83, arg1 - eax)
    int32_t edx_2 = edx_1 s>> 5
    
    if (ecx_6 == arg2[2])
        edx_2 = sub_4b5fa0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        sub_4b6320(result, edx_2, (arg1 - eax) s/ 0xac * 0xac + *arg2)
        arg2[1] += 0xac
        return result

arg2[1] += 0xac
return result
