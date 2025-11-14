// 函数: sub_40d7b0
// 地址: 0x40d7b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = arg1
bool c
bool p
bool a
bool z
bool s
bool d
bool o
int32_t eax_1 = ((o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)) ^ 0x200000
int32_t var_10_2 = (test_bit(eax_1, 0xb) ? 1 : 0) << 0xb | (test_bit(eax_1, 0xa) ? 1 : 0) << 0xa
    | (test_bit(eax_1, 7) ? 1 : 0) << 7 | (test_bit(eax_1, 6) ? 1 : 0) << 6
    | (test_bit(eax_1, 4) ? 1 : 0) << 4 | (test_bit(eax_1, 2) ? 1 : 0) << 2
    | (test_bit(eax_1, 0) ? 1 : 0)
int32_t var_8_1

if (eax_1 != var_10_2)
    var_8_1 = 0
else
    int32_t eax_2
    int32_t ecx
    int32_t edx_1
    int32_t ebx_1
    eax_2, ebx_1, ecx, edx_1 = __cpuid(0, arg1)
    
    if (eax_2 == 0)
        var_8_1 = 0
    else
        int32_t eax_3
        int32_t ecx_1
        int32_t edx_2
        int32_t ebx_2
        eax_3, ebx_2, ecx_1, edx_2 = __cpuid(1, ecx)
        
        if ((edx_2 & 0x2000000) == 0)
            var_8_1 = 0
        else
            var_8_1 = 1

int32_t result
result.b = var_8_1 == 1
return result
