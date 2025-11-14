// 函数: sub_579380
// 地址: 0x579380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg1
void* ebx = 0xfe
int32_t eax_2 = sub_70c710(float.t(*(ebp + 0x34) + 0xfe) * fconvert.t(arg2))
int32_t edi_1 = eax_2 - 0xfe
arg1 = edi_1
void* eax_3

if (eax_2 - 0xfe s< 0)
    ebx = edi_1 + 0xfe
    edi_1 = 0
    arg1 = 0
    eax_3 = ebx

if (eax_2 - 0xfe s>= 0 || ebx s>= 0xfe)
    eax_3 = 0xff

int32_t eax_5 = eax_3 << 0x18 | 0xffffff
void* result = *(ebp + 0x34)
int32_t esi = 0xffffff

if (edi_1 + ebx s> result)
    ebx = result - edi_1
    esi = (0xffffffff - ebx) << 0x18 | 0xffffff

int32_t* ecx_1 = *(ebp + 4)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 0x14))()
    
    if (result != 0)
        float var_8 = fconvert.s(float.t(*(ebp + 0x30)) + float.t(*(ebp + 0x38)))
        long double x87_r6 = fconvert.t(0.5)
        long double x87_r6_2 = fconvert.t(fconvert.s(float.t(0) - x87_r6))
        *result = fconvert.s(x87_r6_2)
        *(result + 4) = fconvert.s(fconvert.t(var_8) - x87_r6)
        long double x87_r5_2 = fconvert.t(0.5f)
        *(result + 8) = fconvert.s(x87_r5_2)
        long double x87_r4 = float.t(1)
        *(result + 0xc) = fconvert.s(x87_r4)
        long double x87_r3 = float.t(0)
        *(result + 0x10) = 0xffffffff
        *(result + 0x14) = fconvert.s(x87_r3)
        *(result + 0x18) = fconvert.s(x87_r4)
        arg2 = fconvert.s(float.t(*(ebp + 0x30)))
        *(result + 0x1c) = fconvert.s(x87_r6_2)
        *(result + 0x20) = fconvert.s(fconvert.t(arg2) - x87_r6)
        *(result + 0x24) = fconvert.s(x87_r5_2)
        *(result + 0x28) = fconvert.s(x87_r4)
        *(result + 0x2c) = 0xffffffff
        *(result + 0x30) = fconvert.s(x87_r3)
        *(result + 0x34) = fconvert.s(x87_r3)
        arg2 = fconvert.s(float.t(*(ebp + 0x30)) + float.t(*(ebp + 0x38)))
        long double x87_r3_8 = fconvert.t(fconvert.s(float.t(arg1)))
        long double x87_r2_3 = fconvert.t(fconvert.s(x87_r3_8 - x87_r6))
        *(result + 0x38) = fconvert.s(x87_r2_3)
        *(result + 0x3c) = fconvert.s(fconvert.t(arg2) - x87_r6)
        *(result + 0x40) = fconvert.s(x87_r5_2)
        *(result + 0x44) = fconvert.s(x87_r4)
        *(result + 0x48) = eax_5
        *(result + 0x4c) = fconvert.s(x87_r3_8 / float.t(*(ebp + 0x34)))
        *(result + 0x50) = fconvert.s(x87_r4)
        arg1 = fconvert.s(float.t(*(ebp + 0x30)))
        *(result + 0x54) = fconvert.s(x87_r2_3)
        *(result + 0x58) = fconvert.s(fconvert.t(arg1) - x87_r6)
        *(result + 0x5c) = fconvert.s(x87_r5_2)
        *(result + 0x60) = fconvert.s(x87_r4)
        *(result + 0x64) = eax_5
        *(result + 0x68) = fconvert.s(x87_r3_8 / float.t(*(ebp + 0x34)))
        *(result + 0x6c) = fconvert.s(x87_r3)
        arg2 = fconvert.s(float.t(*(ebp + 0x30)) + float.t(*(ebp + 0x38)))
        long double x87_r3_15 = fconvert.t(fconvert.s(float.t(edi_1 + ebx)))
        long double x87_r2_12 = fconvert.t(fconvert.s(x87_r3_15 - x87_r6))
        *(result + 0x70) = fconvert.s(x87_r2_12)
        *(result + 0x74) = fconvert.s(fconvert.t(arg2) - x87_r6)
        *(result + 0x78) = fconvert.s(x87_r5_2)
        *(result + 0x7c) = fconvert.s(x87_r4)
        *(result + 0x80) = esi
        *(result + 0x84) = fconvert.s(x87_r3_15 / float.t(*(ebp + 0x34)))
        *(result + 0x88) = fconvert.s(x87_r4)
        arg1 = fconvert.s(float.t(*(ebp + 0x30)))
        *(result + 0x8c) = fconvert.s(x87_r2_12)
        *(result + 0x90) = fconvert.s(fconvert.t(arg1) - x87_r6)
        *(result + 0x94) = fconvert.s(x87_r5_2)
        *(result + 0x98) = fconvert.s(x87_r4)
        *(result + 0x9c) = esi
        *(result + 0xa0) = fconvert.s(x87_r3_15 / float.t(*(ebp + 0x34)))
        *(result + 0xa4) = fconvert.s(x87_r3)
        int32_t* ebp_1 = *(ebp + 4)
        
        if (ebp_1 != 0)
            (*(*ebp_1 + 0x18))()
        
        result.b = 1
        return result

result.b = 0
return result
