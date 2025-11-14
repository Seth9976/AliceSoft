// 函数: sub_6fbfa0
// 地址: 0x6fbfa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* i_1 = arg4
int32_t edi = *(arg1 + 8)
int32_t ebp

ebp = arg2 != 0 ? 0x83 : 0x43

void var_a0
void* var_a4 = &var_a0
sub_6fb760(0xdb, &var_a4)
sub_6fb780(ebp, &var_a4)
void* ecx = var_a4
var_a4 = ecx + 1
*ecx = (arg2 << 4).b + arg3
int32_t edi_4

if (arg2 == 0)
    for (char* i = nullptr; i s< 0x40; i = &i[4])
        void* edx_1
        edx_1.b = i_1[i].b
        *(i + var_a4) = edx_1.b
        edx_1.b = i_1[&i[1]].b
        *(i + var_a4 + 1) = edx_1.b
        ecx.b = i_1[&i[2]].b
        *(i + var_a4 + 2) = ecx.b
        edx_1.b = i_1[&i[3]].b
        *(i + var_a4 + 3) = edx_1.b
    
    edi_4 = edi
else
    do
        uint32_t eax_4 = zx.d(*i_1)
        char* ecx_1 = var_a4
        var_a4 = &ecx_1[1]
        *ecx_1 = ((eax_4 & 0xff00) s>> 8).b
        void* edx_5 = var_a4
        var_a4 = edx_5 + 1
        *edx_5 = eax_4.b
        uint32_t ecx_3 = zx.d(i_1[1])
        char* edx_6 = var_a4
        var_a4 = &edx_6[1]
        i_1 = &i_1[2]
        *edx_6 = ((ecx_3 & 0xff00) s>> 8).b
        void* edi_3 = var_a4
        var_a4 = edi_3 + 1
        *edi_3 = ecx_3.b
    while (&i_1[0x40] s> i_1)
    
    edi_4 = edi

return (*(edi_4 + 0x5c))(&var_a0, ebp + 2, arg1)
