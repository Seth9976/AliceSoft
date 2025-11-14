// 函数: sub_4c0520
// 地址: 0x4c0520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_410
int32_t (* result)[0x101] = data_78c474 ^ &var_410
int32_t (* result_1)[0x101] = result
int32_t esi = *(arg1 + 0x24)

if (esi != 0)
    void* edi_1 = arg1 + 0x14
    
    if (*(arg1 + 0x28) u>= 0x10)
        edi_1 = *edi_1
    
    int32_t var_408[0x101]
    result = &var_408
    sub_4b7fa0(result)
    int32_t ecx_1 = 0xffffffff
    int32_t edx_1 = 0
    
    if (esi != 0)
        do
            ecx_1 = ecx_1 u>> 8 ^ var_408[zx.d(*(edi_1 + edx_1)) ^ zx.d(ecx_1.b)]
            edx_1 += 1
        while (edx_1 u< esi)
    
    *(arg1 + 0x30) = not.d(ecx_1)
else
    *(arg1 + 0x30) = esi

sub_6b4885(result_1 ^ &var_410)
return result
