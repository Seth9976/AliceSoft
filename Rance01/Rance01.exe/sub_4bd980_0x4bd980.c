// 函数: sub_4bd980
// 地址: 0x4bd980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ebx = arg6
*ebx = fconvert.s(float.t(0))
void* ebp = arg4
int32_t esi = 0

if (ebp s<= 0)
    return 

void* ecx_1 = *arg1
arg4 = ecx_1

do
    void* var_38_1 = ecx_1
    arg6 = fconvert.s(sub_4bda50(ebp - 1, esi, fconvert.s(fconvert.t(arg5))))
    int32_t ecx_4 = (esi + arg3) * 7
    int32_t var_38_3 = ecx_4
    int32_t* edx_3 = arg4 + (ecx_4 << 2)
    float var_38_4 = fconvert.s(fconvert.t(arg6))
    ecx_1 = &edx_3[2]
    long double x87_r7_6
    
    if (esi != 0)
        struct sealengine::CEmitterRotate::VTable* var_14
        sub_4bdf70(ecx_1, &var_14, var_38_4)
        float var_10
        *(arg2 + 4) = fconvert.s(fconvert.t(var_10) + fconvert.t(*(arg2 + 4)))
        float var_c
        *(arg2 + 8) = fconvert.s(fconvert.t(var_c) + fconvert.t(*(arg2 + 8)))
        var_14 = &sealengine::CEmitterRotate::`vftable'
        float var_8
        x87_r7_6 = fconvert.t(var_8) + fconvert.t(*(arg2 + 0xc))
    else
        struct sealengine::CEmitterRotate::VTable* var_24
        sub_4bdf70(ecx_1, &var_24, var_38_4)
        float var_20
        *(arg2 + 4) = fconvert.s(fconvert.t(var_20))
        float var_1c
        *(arg2 + 8) = fconvert.s(fconvert.t(var_1c))
        float var_18
        x87_r7_6 = fconvert.t(var_18)
        var_24 = &sealengine::CEmitterRotate::`vftable'
    
    *(arg2 + 0xc) = fconvert.s(x87_r7_6)
    esi += 1
    *ebx = fconvert.s(float.t(*edx_3) * fconvert.t(arg6) + fconvert.t(*ebx))
while (esi s< ebp)
