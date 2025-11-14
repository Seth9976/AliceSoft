// 函数: sub_4c4a30
// 地址: 0x4c4a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x1d0)
void* result

if (ecx == 0)
label_4c4a45:
    result.b = 0
    return result

sub_4c8660((*(ecx + 0x44) - *(ecx + 0x40)) s>> 6, arg2)
result = *(arg1 + 0x1d0)
int32_t i = 0

if (((*(result + 0x44) - *(result + 0x40)) & 0xffffffc0) s> 0)
    int32_t ebx_1 = 0
    
    do
        long double x87_r7_1 = float.t(0)
        struct sealengine::CSQT::VTable* const var_64 = &sealengine::CSQT::`vftable'
        float var_58_1 = fconvert.s(x87_r7_1)
        float var_5c_1 = fconvert.s(x87_r7_1)
        float var_60_1 = fconvert.s(x87_r7_1)
        float var_54_1 = fconvert.s(float.t(1))
        float var_50_1 = fconvert.s(x87_r7_1)
        float var_4c_1 = fconvert.s(x87_r7_1)
        float var_48_1 = fconvert.s(x87_r7_1)
        
        if (i s< 0)
            goto label_4c4a45
        
        if (i s>= (*(result + 0x44) - *(result + 0x40)) s>> 6)
            goto label_4c4a45
        
        int32_t eax_3 = *(result + 0x40)
        int32_t var_60_2 = *(ebx_1 + eax_3 + 0x24)
        int32_t var_5c_2 = *(ebx_1 + eax_3 + 0x28)
        int32_t var_58_2 = *(ebx_1 + eax_3 + 0x2c)
        int32_t var_54_2 = *(ebx_1 + eax_3 + 0x30)
        int32_t var_48_2 = *(ebx_1 + eax_3 + 0x3c)
        int32_t var_50_2 = *(ebx_1 + eax_3 + 0x34)
        int32_t var_4c_2 = *(ebx_1 + eax_3 + 0x38)
        float var_44[0x11]
        float* eax_7 = sub_51a360(&var_64, &var_44)
        __builtin_memcpy(*arg2 + ebx_1, eax_7, 0x40)
        result = *(arg1 + 0x1d0)
        i += 1
        ebx_1 += 0x40
    while (i s< (*(result + 0x44) - *(result + 0x40)) s>> 6)

result.b = 1
return result
