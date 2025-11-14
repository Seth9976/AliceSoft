// 函数: sub_4c8bc0
// 地址: 0x4c8bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* eax = arg1

for (int32_t* i = *eax; i != eax[1]; i = &i[1])
    void* edi_1 = *i
    
    if (edi_1 != 0)
        int32_t var_18_1 = ecx
        int32_t ecx_1
        int80_t st0_1
        st0_1, ecx_1 = sub_4dac10(edi_1 + 0x12c, arg2, fconvert.s(fconvert.t(*(edi_1 + 0x1cc))))
        
        if (*(edi_1 + 0x1a5) != 0)
            int32_t var_18_3 = ecx_1
            sub_4dac10(edi_1 + 0x144, arg2, fconvert.s(fconvert.t(*(edi_1 + 0x1cc))))
        
        int80_t st0_3
        st0_3, ecx = sub_4c4680(edi_1, arg2)
        eax = arg1

eax.b = 1
