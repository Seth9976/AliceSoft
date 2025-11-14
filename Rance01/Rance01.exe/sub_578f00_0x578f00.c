// 函数: sub_578f00
// 地址: 0x578f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ebp = arg1
void* edi = 0xfe
int32_t eax_2 = sub_70c710(float.t(*(ebp i+ 0x38) + 0xfe) * fconvert.t(arg2))
float esi_1 = eax_2 - 0xfe
arg1 = esi_1
void* eax_3

if (eax_2 - 0xfe s< 0)
    edi = esi_1 i+ 0xfe
    esi_1 = 0f
    arg1 = 0f
    eax_3 = edi

if (eax_2 - 0xfe s>= 0 || edi s>= 0xfe)
    eax_3 = 0xff

int32_t eax_5 = eax_3 << 0x18 | 0xffffff
void* result = *(ebp i+ 0x38)
int32_t ebx = 0xffffff

if (esi_1 i+ edi s> result)
    edi = result i- esi_1
    ebx = (0xffffffff - edi) << 0x18 | 0xffffff

int32_t* ecx_1 = *(ebp i+ 4)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 0x14))()
    
    if (result != 0)
        arg2 = fconvert.s(float.t(*(ebp i+ 0x38) i- esi_1 - edi))
        long double x87_r6 = fconvert.t(0.5)
        *result = fconvert.s(float.t(*(ebp i+ 0x2c)) - x87_r6)
        *(result + 4) = fconvert.s(fconvert.t(arg2) - x87_r6)
        long double x87_r6_4 = fconvert.t(0.5f)
        *(result + 8) = fconvert.s(x87_r6_4)
        long double x87_r5 = float.t(1)
        *(result + 0xc) = fconvert.s(x87_r5)
        *(result + 0x10) = ebx
        long double x87_r4_1 = fconvert.t(fconvert.s(float.t(esi_1 i+ edi)))
        long double x87_r2 = float.t(1)
        arg2 = fconvert.s(x87_r2 - x87_r4_1 / float.t(*(ebp i+ 0x38)))
        long double x87_r2_2 = float.t(0)
        *(result + 0x14) = fconvert.s(x87_r2_2)
        *(result + 0x18) = fconvert.s(fconvert.t(arg2))
        float var_8 = fconvert.s(float.t(*(ebp i+ 0x38) i- esi_1 - edi))
        *(result + 0x1c) = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(ebp i+ 0x34)) + float.t(*(ebp i+ 0x2c)))) - x87_r6)
        *(result + 0x20) = fconvert.s(fconvert.t(var_8) - x87_r6)
        *(result + 0x24) = fconvert.s(x87_r6_4)
        *(result + 0x28) = fconvert.s(x87_r5)
        *(result + 0x2c) = ebx
        arg2 = fconvert.s(x87_r2 - x87_r4_1 / float.t(*(ebp i+ 0x38)))
        *(result + 0x30) = fconvert.s(x87_r5)
        *(result + 0x34) = fconvert.s(fconvert.t(arg2))
        long double x87_r1_11 = fconvert.t(fconvert.s(float.t(arg1)))
        arg1 = fconvert.s(float.t(*(ebp i+ 0x38)) - x87_r1_11)
        *(result + 0x38) = fconvert.s(float.t(*(ebp i+ 0x2c)) - x87_r6)
        *(result + 0x3c) = fconvert.s(fconvert.t(arg1) - x87_r6)
        *(result + 0x40) = fconvert.s(x87_r6_4)
        *(result + 0x44) = fconvert.s(x87_r5)
        *(result + 0x48) = eax_5
        arg1 = fconvert.s(x87_r2 - x87_r1_11 / float.t(*(ebp i+ 0x38)))
        *(result + 0x4c) = fconvert.s(x87_r2_2)
        *(result + 0x50) = fconvert.s(fconvert.t(arg1))
        arg2 = fconvert.s(float.t(*(ebp i+ 0x38)) - x87_r1_11)
        *(result + 0x54) = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(ebp i+ 0x34)) + float.t(*(ebp i+ 0x2c)))) - x87_r6)
        *(result + 0x58) = fconvert.s(fconvert.t(arg2) - x87_r6)
        *(result + 0x5c) = fconvert.s(x87_r6_4)
        *(result + 0x60) = fconvert.s(x87_r5)
        *(result + 0x64) = eax_5
        arg1 = fconvert.s(x87_r2 - x87_r1_11 / float.t(*(ebp i+ 0x38)))
        *(result + 0x68) = fconvert.s(x87_r5)
        *(result + 0x6c) = fconvert.s(fconvert.t(arg1))
        arg1 = fconvert.s(float.t(*(ebp i+ 0x38)))
        *(result + 0x70) = fconvert.s(float.t(*(ebp i+ 0x2c)) - x87_r6)
        *(result + 0x74) = fconvert.s(fconvert.t(arg1) - x87_r6)
        *(result + 0x78) = fconvert.s(x87_r6_4)
        *(result + 0x7c) = fconvert.s(x87_r5)
        *(result + 0x80) = 0xffffffff
        *(result + 0x84) = fconvert.s(x87_r2_2)
        *(result + 0x88) = fconvert.s(x87_r5)
        arg2 = fconvert.s(float.t(*(ebp i+ 0x38)))
        *(result + 0x8c) = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(ebp i+ 0x34)) + float.t(*(ebp i+ 0x2c)))) - x87_r6)
        *(result + 0x90) = fconvert.s(fconvert.t(arg2) - x87_r6)
        *(result + 0x94) = fconvert.s(x87_r6_4)
        *(result + 0x98) = fconvert.s(x87_r5)
        *(result + 0x9c) = 0xffffffff
        *(result + 0xa0) = fconvert.s(x87_r5)
        *(result + 0xa4) = fconvert.s(x87_r5)
        int32_t* ebp_1 = *(ebp i+ 4)
        
        if (ebp_1 != 0)
            (*(*ebp_1 + 0x18))()
        
        result.b = 1
        return result

result.b = 0
return result
