// 函数: sub_4cefd0
// 地址: 0x4cefd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t* ebx = *arg2
int32_t edi = arg2[1]
struct sealengine::CFrameAddColor::VTable** esi = arg1

if (ebx == edi)
    long double x87_r7 = float.t(0)
    *esi = &sealengine::CFrameAddColor::`vftable'
    esi[1] = fconvert.s(x87_r7)
    esi[2] = fconvert.s(x87_r7)
    esi[3] = fconvert.s(x87_r7)
    esi[4] = fconvert.s(x87_r7)
    return 

long double x87_r7_1 = fconvert.t(arg3)
int32_t* ecx_1 = ebx
int32_t* edx_1

while (true)
    if (ecx_1 == edi)
        *esi = &sealengine::CFrameAddColor::`vftable'
        esi[1] = ebx[3]
        esi[2] = ebx[4]
        esi[3] = ebx[5]
        esi[4] = ebx[6]
        return 
    
    long double x87_r6_1 = float.t(*ecx_1)
    x87_r6_1 - x87_r7_1
    arg2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((arg2:1.b & 0x41) != 0)
        edx_1 = ecx_1
        ecx_1 = &ecx_1[8]
        
        if (ecx_1 == edi)
            break
        
        long double x87_r6_2 = float.t(*ecx_1)
        x87_r6_2 - x87_r7_1
        arg2.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            int32_t edi_1 = *edx_1
            int32_t eax_2 = *ecx_1 - edi_1
            
            if (eax_2 s<= 0)
                break
            
            int32_t eax_3 = edx_1[1]
            long double x87_r7_3
            
            if (eax_3 == 0 || eax_3 - 1 u> 1)
                x87_r7_3 = float.t(0)
            else
                x87_r7_3 = (x87_r7_1 - float.t(edi_1)) / float.t(eax_2)
            
            int32_t* var_14 = ecx_1
            sub_4bf5b0(eax_3, esi, &edx_1[2], &ecx_1[2], 
                fconvert.s(fconvert.t(fconvert.s(x87_r7_3))))
            return 
    else
        ecx_1 = &ecx_1[8]

*esi = &sealengine::CFrameAddColor::`vftable'
esi[1] = edx_1[3]
esi[2] = edx_1[4]
esi[3] = edx_1[5]
esi[4] = edx_1[6]
