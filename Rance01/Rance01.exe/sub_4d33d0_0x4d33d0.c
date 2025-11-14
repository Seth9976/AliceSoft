// 函数: sub_4d33d0
// 地址: 0x4d33d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_5 = arg2[1]
int32_t eax

if (arg1 u< ecx_5)
    eax = *arg2

int32_t* result

if (arg1 u>= ecx_5 || eax u> arg1)
    if (ecx_5 == arg2[2])
        sub_4d3970(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        result[2] = &sealengine::CFrameMulAlpha::`vftable'
        result[3] = fconvert.s(fconvert.t(arg1[3]))
        int32_t edx_5
        edx_5.b = arg1[4].b
        result[4].b = edx_5.b
else
    if (ecx_5 == arg2[2])
        sub_4d3970(arg2)
    
    int32_t* ecx_2 = *arg2 + (arg1 - eax) s/ 0x14 * 0x14
    result = arg2[1]
    
    if (result != 0)
        *result = *ecx_2
        result[1] = ecx_2[1]
        result[2] = &sealengine::CFrameMulAlpha::`vftable'
        result[3] = fconvert.s(fconvert.t(ecx_2[3]))
        ecx_2.b = ecx_2[4].b
        result[4].b = ecx_2.b
        arg2[1] += 0x14
        return result

arg2[1] += 0x14
return result
