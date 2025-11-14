// 函数: sub_4e92d0
// 地址: 0x4e92d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_5 = arg2[1]
int32_t eax

if (arg1 u< ecx_5)
    eax = *arg2

int32_t* result

if (arg1 u>= ecx_5 || eax u> arg1)
    if (ecx_5 == arg2[2])
        sub_4e95c0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        result[2] = &sealengine::CEmitterRotate::`vftable'
        result[3] = fconvert.s(fconvert.t(arg1[3]))
        result[4] = fconvert.s(fconvert.t(arg1[4]))
        result[5] = fconvert.s(fconvert.t(arg1[5]))
        int32_t edx_6
        edx_6.b = arg1[6].b
        result[6].b = edx_6.b
else
    if (ecx_5 == arg2[2])
        sub_4e95c0(arg2)
    
    int32_t* ecx_2 = *arg2 + (arg1 - eax) s/ 0x1c * 0x1c
    result = arg2[1]
    
    if (result != 0)
        *result = *ecx_2
        result[1] = ecx_2[1]
        result[2] = &sealengine::CEmitterRotate::`vftable'
        result[3] = fconvert.s(fconvert.t(ecx_2[3]))
        result[4] = fconvert.s(fconvert.t(ecx_2[4]))
        result[5] = fconvert.s(fconvert.t(ecx_2[5]))
        ecx_2.b = ecx_2[6].b
        result[6].b = ecx_2.b
        arg2[1] += 0x1c
        return result

arg2[1] += 0x1c
return result
