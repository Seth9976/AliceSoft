// 函数: sub_4d8610
// 地址: 0x4d8610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = (arg1 - arg2) s/ 0x14

if (i s> 1)
    float* edi_1 = arg1 - 8
    
    do
        int32_t edx_2 = edi_1[-2]
        float var_8_1 = fconvert.s(fconvert.t(*edi_1))
        char eax_4 = edi_1[1].b
        int32_t var_14 = edi_1[-3]
        edi_1[-3] = *arg2
        int32_t var_10_1 = edx_2
        edi_1[-2] = arg2[1]
        char var_4_1 = eax_4
        *edi_1 = fconvert.s(fconvert.t(arg2[3]))
        edi_1[1].b = arg2[4].b
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = muls.dp.d(0x66666667, edi_1 + 0xfffffff4 - arg2)
        struct sealengine::CFrameMulAlpha::VTable* const var_c_1 =
            &sealengine::CFrameMulAlpha::`vftable'
        sub_4d8d60(arg2, edx_4 s>> 3, nullptr, (edi_1 + 0xfffffff4 - arg2) s/ 0x14, &var_14)
        edi_1 -= 0x14
        i = (8 - arg2 + edi_1) s/ 0x14
    while (i s> 1)

return i
