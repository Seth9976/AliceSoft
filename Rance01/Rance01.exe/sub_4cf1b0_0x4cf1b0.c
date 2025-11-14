// 函数: sub_4cf1b0
// 地址: 0x4cf1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_1 = arg1[1]
int32_t* ebx = *arg1

if (ebx == edx_1)
    arg2[1] = 0
    *arg2 = &sealengine::CFrameIndex::`vftable'
    return arg2

long double x87_r7 = fconvert.t(arg3)
int32_t* ecx = ebx
int32_t* esi_1

while (true)
    if (ecx == edx_1)
        arg2[1] = ebx[3]
        *arg2 = &sealengine::CFrameIndex::`vftable'
        return arg2
    
    long double x87_r6_1 = float.t(*ecx)
    x87_r6_1 - x87_r7
    arg1.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3800
    
    if ((arg1:1.b & 0x41) != 0)
        esi_1 = ecx
        ecx = &ecx[5]
        
        if (ecx == edx_1)
            arg2[1] = esi_1[3]
            *arg2 = &sealengine::CFrameIndex::`vftable'
            return arg2
        
        long double x87_r6_2 = float.t(*ecx)
        x87_r6_2 - x87_r7
        arg1.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            break
    else
        ecx = &ecx[5]

arg2[1] = esi_1[3]
*arg2 = &sealengine::CFrameIndex::`vftable'
return arg2
