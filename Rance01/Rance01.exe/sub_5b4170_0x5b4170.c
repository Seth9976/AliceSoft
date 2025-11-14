// 函数: sub_5b4170
// 地址: 0x5b4170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x40)

if (eax != 0)
    int32_t var_1c_1 = eax
    sub_6b4d5b()
    *(arg1 + 0x40) = 0

int128_t* eax_1
int32_t edx
eax_1, edx = operator new(0x2d0)
int32_t ecx = *(arg1 + 0xc)
*(arg1 + 0x34) = ecx
*(arg1 + 0x40) = eax_1
int32_t ebx_1 = *(arg1 + 0x10) - ecx
*(arg1 + 0x3c) = ecx
int32_t (* var_20)() = sub_678ab0
*(arg1 + 0x38) = ebx_1
int32_t (* var_1c_2)(void* arg1) = sub_5b44d0

if (sub_5c5bb0(eax_1, edx, ecx, arg1, sub_5b4410, sub_5b4470) != 0)
    int32_t eax_2
    eax_2.b = 0
    return eax_2

void* ebx_2 = *(arg1 + 0x40)
int32_t ecx_1
int32_t var_c_2

if (*(ebx_2 + 0x58) s< 2)
    var_c_2 = 0xffffffff
    ecx_1 = 0xffffff7d
else
    int32_t i = 0
    
    if (*(ebx_2 + 4) == 0)
        var_c_2 = 0xffffffff
        ecx_1 = 0xffffff7d
    else
        int32_t eax_3 = *(ebx_2 + 0x34)
        
        if (eax_3 s<= 0xffffffff)
            var_c_2 = 0xffffffff
            ecx_1 = 0xffffff7d
        else
            int32_t var_10_1 = 0
            int32_t var_c = 0
            
            if (eax_3 s> 0)
                do
                    int32_t eax_4
                    int32_t edx_1
                    eax_4, edx_1 = sub_5c5c40(ebx_2, i)
                    int32_t temp0_1 = var_10_1
                    var_10_1 += eax_4
                    var_c = adc.d(var_c, edx_1, temp0_1 + eax_4 u< temp0_1)
                    i += 1
                while (i s< *(ebx_2 + 0x34))
            
            ecx_1 = var_10_1
            int32_t var_c_1 = var_c
*(arg1 + 0x48) = ecx_1
void* eax_8

if (*(ebx_2 + 4) == 0 || *(ebx_2 + 0x58) s< 3)
    eax_8 = *(ebx_2 + 0x48)
else
    eax_8 = (*(ebx_2 + 0x60) << 5) + *(ebx_2 + 0x48)

*(arg1 + 0x4c) = *(eax_8 + 4) * ecx_1 * 2
*(arg1 + 0x1c) = 1
int32_t ecx_2 = *(eax_8 + 4)
*(arg1 + 0x20) = ecx_2
int32_t edx_5 = *(eax_8 + 8)
uint32_t eax_11 = ecx_2 << 4 u>> 3
*(arg1 + 0x2c) = eax_11
*(arg1 + 0x24) = edx_5
*(arg1 + 0x30) = 0x10
*(arg1 + 0x28) = edx_5 * eax_11
*(arg1 + 0x44) = 1
eax_11.b = 1
return eax_11
