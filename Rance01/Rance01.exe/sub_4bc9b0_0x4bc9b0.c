// 函数: sub_4bc9b0
// 地址: 0x4bc9b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct sealengine::CEmitterPos::VTable** var_4_1 = arg1
int32_t* ebx = *arg2
int32_t edi = arg2[1]

if (ebx == edi)
    long double x87_r7 = float.t(0)
    *arg1 = &sealengine::CEmitterPos::`vftable'
    arg1[1] = fconvert.s(x87_r7)
    arg1[2] = fconvert.s(x87_r7)
    arg1[3] = fconvert.s(x87_r7)
    arg1[4] = fconvert.s(x87_r7)
    arg1[5] = fconvert.s(x87_r7)
    return 

long double x87_r7_1 = fconvert.t(arg3)
int32_t* ecx_1 = ebx
int32_t* edx_1

while (true)
    if (ecx_1 == edi)
        *arg1 = &sealengine::CEmitterPos::`vftable'
        arg1[1] = ebx[3]
        arg1[2] = ebx[4]
        arg1[3] = ebx[5]
        arg1[4] = fconvert.s(fconvert.t(ebx[6]))
        arg1[5] = fconvert.s(fconvert.t(ebx[7]))
        return 
    
    long double x87_r6_1 = float.t(*ecx_1)
    x87_r6_1 - x87_r7_1
    arg2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((arg2:1.b & 0x41) != 0)
        edx_1 = ecx_1
        ecx_1 = &ecx_1[9]
        
        if (ecx_1 == edi)
            *arg1 = &sealengine::CEmitterPos::`vftable'
            arg1[1] = edx_1[3]
            arg1[2] = edx_1[4]
            arg1[3] = edx_1[5]
            arg1[4] = fconvert.s(fconvert.t(edx_1[6]))
            arg1[5] = fconvert.s(fconvert.t(edx_1[7]))
            return 
        
        long double x87_r6_2 = float.t(*ecx_1)
        x87_r6_2 - x87_r7_1
        arg2.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            break
    else
        ecx_1 = &ecx_1[9]

int32_t edi_1 = *edx_1
int32_t eax_2 = *ecx_1 - edi_1

if (eax_2 s<= 0)
    *arg1 = &sealengine::CEmitterPos::`vftable'
    arg1[1] = edx_1[3]
    arg1[2] = edx_1[4]
    arg1[3] = edx_1[5]
    arg1[4] = fconvert.s(fconvert.t(edx_1[6]))
    arg1[5] = fconvert.s(fconvert.t(edx_1[7]))
    return 

int32_t eax_8 = edx_1[1]
long double x87_r7_7

if (eax_8 == 0 || eax_8 - 1 u> 1)
    x87_r7_7 = float.t(0)
else
    x87_r7_7 = (x87_r7_1 - float.t(edi_1)) / float.t(eax_2)

int32_t* var_14 = ecx_1
sub_4bde70(eax_8, arg1, &edx_1[2], &ecx_1[2], fconvert.s(fconvert.t(fconvert.s(x87_r7_7))))
