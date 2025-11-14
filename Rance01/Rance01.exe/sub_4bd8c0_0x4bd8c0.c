// 函数: sub_4bd8c0
// 地址: 0x4bd8c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* ebp = arg6
*ebp = fconvert.s(float.t(0))
int32_t esi = 0

if (arg4 s<= 0)
    return 

do
    int32_t ecx
    int32_t var_44_1 = ecx
    arg6 = fconvert.s(sub_4bda50(arg4 - 1, esi, fconvert.s(fconvert.t(arg5))))
    int32_t ecx_3 = (arg3 + esi) * 9
    int32_t* ebx_1 = *arg2 + (ecx_3 << 2)
    int32_t var_44_3 = ecx_3
    struct sealengine::CEmitterPos::VTable* var_30
    struct sealengine::CEmitterPos::VTable** eax = &var_30
    sub_4bde10(&ebx_1[2], eax, fconvert.s(fconvert.t(arg6)))
    
    if (esi != 0)
        struct sealengine::CEmitterPos::VTable* var_18
        eax = &var_18
        sub_4bdd50(&var_30, eax, arg1)
        int32_t var_14
        *(arg1 + 4) = var_14
        int32_t var_10
        ecx = var_10
        *(arg1 + 8) = ecx
        int32_t var_c
        *(arg1 + 0xc) = var_c
    else
        int32_t var_2c
        *(arg1 + 4) = var_2c
        int32_t var_28
        *(arg1 + 8) = var_28
        int32_t var_24
        ecx = var_24
        *(arg1 + 0xc) = ecx
    
    esi += 1
    *(arg1 + 0x10) = fconvert.s(fconvert.t(eax[4]))
    *(arg1 + 0x14) = fconvert.s(fconvert.t(eax[5]))
    *ebp = fconvert.s(float.t(*ebx_1) * fconvert.t(arg6) + fconvert.t(*ebp))
while (esi s< arg4)
