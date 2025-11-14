// 函数: sub_4eb380
// 地址: 0x4eb380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    float* edx = &result[6]
    float* ecx_1 = arg1 + 0x18
    
    do
        if (result != 0)
            *result = ecx_1[-6]
            edx[-5] = ecx_1[-5]
            edx[-4] = &sealengine::CEmitterPos::`vftable'
            edx[-3] = ecx_1[-3]
            edx[-2] = ecx_1[-2]
            edx[-1] = ecx_1[-1]
            *edx = fconvert.s(fconvert.t(*ecx_1))
            edx[1] = fconvert.s(fconvert.t(ecx_1[1]))
            int32_t eax_4
            eax_4.b = ecx_1[2].b
            edx[2].b = eax_4.b
        
        ecx_1 = &ecx_1[9]
        result = &result[9]
        edx = &edx[9]
    while (&ecx_1[-6] != arg4)

return result
