// 函数: sub_4d8850
// 地址: 0x4d8850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_2 = (arg1 - arg2) s/ 0x14
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(esi_2)
int32_t* result = eax_3 - edx_2
int32_t i = result s>> 1

if (i s> 0)
    void* edi_1 = arg2 + i * 0x14 + 0xc
    
    do
        int32_t ecx_1 = *(edi_1 - 0x20)
        int32_t edx_3 = *(edi_1 - 0x1c)
        int32_t eax_5 = *(edi_1 - 0x14)
        edi_1 -= 0x14
        int32_t var_14 = ecx_1
        ecx_1.b = *(edi_1 + 4)
        int32_t var_10_1 = edx_3
        i -= 1
        int32_t var_8_1 = eax_5
        char var_4_1 = ecx_1.b
        struct sealengine::CFrameIndex::VTable* const var_c_1 = &sealengine::CFrameIndex::`vftable'
        result = sub_4d8ed0(arg2, &var_14, i, esi_2, &var_14)
    while (i s> 0)

return result
