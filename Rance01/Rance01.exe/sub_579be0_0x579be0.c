// 函数: sub_579be0
// 地址: 0x579be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = 0xfe
int32_t eax_2 = sub_70c710(float.t(*(arg1 + 0x38) + 0xfe) * fconvert.t(arg2))
float ebx_1 = eax_2 - 0xfe
arg2 = ebx_1
void* eax_3

if (eax_2 - 0xfe s< 0)
    ebp = ebx_1 i+ 0xfe
    ebx_1 = 0f
    arg2 = 0f
    eax_3 = ebp

if (eax_2 - 0xfe s>= 0 || ebp s>= 0xfe)
    eax_3 = 0xff

int32_t eax_5 = eax_3 << 0x18 | 0xffffff
void* result = *(arg1 + 0x38)
int32_t esi = 0xffffff

if (ebx_1 i+ ebp s> result)
    ebp = result i- ebx_1
    esi = (0xffffffff - ebp) << 0x18 | 0xffffff

int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 0x14))()
    
    if (result != 0)
        float var_8 = fconvert.s(float.t(*(arg1 + 0x30)))
        long double x87_r6 = fconvert.t(0.5)
        *result = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r6)
        *(result + 4) = fconvert.s(fconvert.t(var_8) - x87_r6)
        long double x87_r6_4 = fconvert.t(0.5f)
        *(result + 8) = fconvert.s(x87_r6_4)
        long double x87_r5 = float.t(1)
        *(result + 0xc) = fconvert.s(x87_r5)
        long double x87_r4 = float.t(0)
        *(result + 0x10) = 0xffffffff
        *(result + 0x14) = fconvert.s(x87_r4)
        *(result + 0x18) = fconvert.s(x87_r4)
        float var_c_1 = fconvert.s(float.t(*(arg1 + 0x30)))
        *(result + 0x1c) = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c)))) - x87_r6)
        *(result + 0x20) = fconvert.s(fconvert.t(var_c_1) - x87_r6)
        *(result + 0x24) = fconvert.s(x87_r6_4)
        *(result + 0x28) = fconvert.s(x87_r5)
        *(result + 0x2c) = 0xffffffff
        *(result + 0x30) = fconvert.s(x87_r5)
        *(result + 0x34) = fconvert.s(x87_r4)
        long double x87_r2 = fconvert.t(fconvert.s(float.t(arg2)))
        arg2 = fconvert.s(float.t(*(arg1 + 0x30)) + x87_r2)
        *(result + 0x38) = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r6)
        *(result + 0x3c) = fconvert.s(fconvert.t(arg2) - x87_r6)
        *(result + 0x40) = fconvert.s(x87_r6_4)
        *(result + 0x44) = fconvert.s(x87_r5)
        *(result + 0x48) = eax_5
        arg2 = fconvert.s(x87_r2 / float.t(*(arg1 + 0x38)))
        *(result + 0x4c) = fconvert.s(x87_r4)
        *(result + 0x50) = fconvert.s(fconvert.t(arg2))
        float var_4_1 = fconvert.s(float.t(*(arg1 + 0x30)) + x87_r2)
        *(result + 0x54) = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c)))) - x87_r6)
        *(result + 0x58) = fconvert.s(fconvert.t(var_4_1) - x87_r6)
        *(result + 0x5c) = fconvert.s(x87_r6_4)
        *(result + 0x60) = fconvert.s(x87_r5)
        *(result + 0x64) = eax_5
        arg2 = fconvert.s(x87_r2 / float.t(*(arg1 + 0x38)))
        *(result + 0x68) = fconvert.s(x87_r5)
        *(result + 0x6c) = fconvert.s(fconvert.t(arg2))
        *(result + 0x70) = fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r6)
        long double x87_r3_21 = fconvert.t(fconvert.s(float.t(ebx_1 i+ ebp)))
        long double x87_r2_20 = fconvert.t(fconvert.s(x87_r3_21 - x87_r6))
        *(result + 0x74) = fconvert.s(x87_r2_20)
        *(result + 0x78) = fconvert.s(x87_r6_4)
        *(result + 0x7c) = fconvert.s(x87_r5)
        *(result + 0x80) = esi
        arg2 = fconvert.s(x87_r3_21 / float.t(*(arg1 + 0x38)))
        *(result + 0x84) = fconvert.s(x87_r4)
        *(result + 0x88) = fconvert.s(fconvert.t(arg2))
        *(result + 0x8c) = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c)))) - x87_r6)
        *(result + 0x90) = fconvert.s(x87_r2_20)
        *(result + 0x94) = fconvert.s(x87_r6_4)
        *(result + 0x98) = fconvert.s(x87_r5)
        *(result + 0x9c) = esi
        arg2 = fconvert.s(x87_r3_21 / float.t(*(arg1 + 0x38)))
        *(result + 0xa0) = fconvert.s(x87_r5)
        *(result + 0xa4) = fconvert.s(fconvert.t(arg2))
        int32_t* edi_1 = *(arg1 + 4)
        
        if (edi_1 != 0)
            (*(*edi_1 + 0x18))()
        
        result.b = 1
        return result

result.b = 0
return result
