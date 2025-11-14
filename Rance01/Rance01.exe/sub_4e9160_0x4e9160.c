// 函数: sub_4e9160
// 地址: 0x4e9160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_6 = arg2[1]
int32_t eax

if (arg1 u< ecx_6)
    eax = *arg2

int32_t* result

if (arg1 u>= ecx_6 || eax u> arg1)
    if (ecx_6 == arg2[2])
        sub_4e94e0(arg2)
    
    result = arg2[1]
    
    if (result != 0)
        *result = *arg1
        result[1] = arg1[1]
        result[2] = &sealengine::CEmitterPos::`vftable'
        result[3] = arg1[3]
        result[4] = arg1[4]
        result[5] = arg1[5]
        result[6] = fconvert.s(fconvert.t(arg1[6]))
        result[7] = fconvert.s(fconvert.t(arg1[7]))
        int32_t ecx_5
        ecx_5.b = arg1[8].b
        result[8].b = ecx_5.b
else
    if (ecx_6 == arg2[2])
        sub_4e94e0(arg2)
    
    int32_t* ecx_2 = *arg2 + (arg1 - eax) s/ 0x24 * 0x24
    result = arg2[1]
    
    if (result != 0)
        *result = *ecx_2
        result[1] = ecx_2[1]
        result[2] = &sealengine::CEmitterPos::`vftable'
        result[3] = ecx_2[3]
        result[4] = ecx_2[4]
        result[5] = ecx_2[5]
        result[6] = fconvert.s(fconvert.t(ecx_2[6]))
        result[7] = fconvert.s(fconvert.t(ecx_2[7]))
        ecx_2.b = ecx_2[8].b
        result[8].b = ecx_2.b
        arg2[1] += 0x24
        return result

arg2[1] += 0x24
return result
