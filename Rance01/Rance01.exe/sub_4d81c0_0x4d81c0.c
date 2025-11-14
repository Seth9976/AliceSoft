// 函数: sub_4d81c0
// 地址: 0x4d81c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_2 = (arg1 - arg2) s>> 5
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_2)
int32_t* result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* edi_1 = (i << 5) + arg2 + 0xc
    
    do
        int32_t ecx_1 = *(edi_1 - 0x2c)
        int32_t edx_1 = *(edi_1 - 0x28)
        int32_t eax_4 = *(edi_1 - 0x20)
        edi_1 -= 0x20
        int32_t var_20 = ecx_1
        int32_t var_1c_1 = edx_1
        int32_t var_14_1 = eax_4
        int32_t var_10_1 = *(edi_1 + 4)
        int32_t ecx_2
        ecx_2.b = *(edi_1 + 0x10)
        int32_t var_c_1 = *(edi_1 + 8)
        i -= 1
        int32_t var_8_1 = *(edi_1 + 0xc)
        char var_4_1 = ecx_2.b
        struct sealengine::CFrameMulColor::VTable* const var_18_1 =
            &sealengine::CFrameMulColor::`vftable'
        result = sub_4d8be0(arg2, &var_20, i, esi_2, &var_20)
    while (i s> 0)

return result
