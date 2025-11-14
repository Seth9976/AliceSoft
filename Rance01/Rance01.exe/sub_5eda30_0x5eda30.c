// 函数: sub_5eda30
// 地址: 0x5eda30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg3 - 1)
int32_t ebx_1 = (eax - edx) s>> 1
int32_t eax_10

while (arg5 s< arg3)
    eax_10 = arg4
    void* edi_2 = ebx_1 * 0x6c
    float* edi_3 = edi_2 + eax_10
    
    if (*(edi_2 + eax_10 + 8) s>= arg6[2])
        goto label_5edadf
    
    float* ecx = arg3 * 0x6c
    *(ecx + eax_10) = fconvert.s(fconvert.t(*edi_3))
    *(ecx + eax_10 + 4) = fconvert.s(fconvert.t(edi_3[1]))
    void* esi_1 = ecx + eax_10
    *(esi_1 + 8) = edi_3[2]
    *(esi_1 + 0xc) = edi_3[3]
    sub_401180(esi_1 + 0x10, 0xffffffff, &edi_3[4], 0)
    sub_401180(esi_1 + 0x2c, 0xffffffff, &edi_3[0xb], 0)
    *(esi_1 + 0x48) = edi_3[0x12].b
    sub_5ec870(esi_1 + 0x4c, &edi_3[0x13])
    sub_4b55f0(esi_1 + 0x5c, &edi_3[0x17])
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = sx.q(ebx_1 - 1)
    arg3 = ebx_1
    ebx_1 = (eax_7 - edx_4) s>> 1

eax_10 = arg4
label_5edadf:
float* ecx_5 = arg3 * 0x6c
*(ecx_5 + eax_10) = fconvert.s(fconvert.t(*arg6))
*(ecx_5 + eax_10 + 4) = fconvert.s(fconvert.t(arg6[1]))
void* esi_2 = ecx_5 + eax_10
*(esi_2 + 8) = arg6[2]
*(esi_2 + 0xc) = arg6[3]
sub_401180(esi_2 + 0x10, 0xffffffff, &arg6[4], 0)
sub_401180(esi_2 + 0x2c, 0xffffffff, &arg6[0xb], 0)
*(esi_2 + 0x48) = arg6[0x12].b
sub_5ec870(esi_2 + 0x4c, &arg6[0x13])
sub_4b55f0(esi_2 + 0x5c, &arg6[0x17])
return esi_2 + 0x5c
