// 函数: sub_4d88d0
// 地址: 0x4d88d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = (arg1 - arg2) s/ 0x14

if (i s> 1)
    int32_t* edi_1 = arg1 - 8
    
    do
        int32_t eax_4 = *edi_1
        int32_t var_10_1 = edi_1[-2]
        int32_t edx_3 = *arg2
        int32_t var_14 = edi_1[-3]
        int32_t ecx_2
        ecx_2.b = edi_1[1].b
        edi_1[-3] = edx_3
        int32_t var_8_1 = eax_4
        edi_1[-2] = arg2[1]
        char var_4_1 = ecx_2.b
        *edi_1 = arg2[3]
        edx_3.b = arg2[4].b
        edi_1[1].b = edx_3.b
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = muls.dp.d(0x66666667, edi_1 + 0xfffffff4 - arg2)
        struct sealengine::CFrameIndex::VTable* const var_c_1 = &sealengine::CFrameIndex::`vftable'
        sub_4d8ed0(arg2, edx_4 s>> 3, nullptr, (edi_1 + 0xfffffff4 - arg2) s/ 0x14, &var_14)
        edi_1 -= 0x14
        i = (8 - arg2 + edi_1) s/ 0x14
    while (i s> 1)

return i
