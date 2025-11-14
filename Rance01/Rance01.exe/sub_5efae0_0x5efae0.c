// 函数: sub_5efae0
// 地址: 0x5efae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg3 - 1)
int32_t ebx_1 = (eax - edx) s>> 1
int32_t eax_11

while (arg5 s< arg3)
    eax_11 = arg4
    void* edi_2 = ebx_1 * 0x6c
    int32_t* edi_3 = edi_2 + eax_11
    
    if (*(edi_2 + eax_11 + 8) s>= arg6[2])
        goto label_5efb90
    
    int32_t* esi_1 = arg3 * 0x6c + eax_11
    *esi_1 = *edi_3
    esi_1[1] = edi_3[1]
    esi_1[2] = edi_3[2]
    esi_1[3] = edi_3[3]
    sub_401180(&esi_1[4], 0xffffffff, &edi_3[4], 0)
    sub_401180(&esi_1[0xb], 0xffffffff, &edi_3[0xb], 0)
    esi_1[0x12].b = edi_3[0x12].b
    sub_5ec870(&esi_1[0x13], &edi_3[0x13])
    sub_4b55f0(&esi_1[0x17], &edi_3[0x17])
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(ebx_1 - 1)
    arg3 = ebx_1
    ebx_1 = (eax_8 - edx_4) s>> 1

eax_11 = arg4
label_5efb90:
int32_t* esi_2 = arg3 * 0x6c + eax_11
*esi_2 = *arg6
esi_2[1] = arg6[1]
esi_2[2] = arg6[2]
esi_2[3] = arg6[3]
sub_401180(&esi_2[4], 0xffffffff, &arg6[4], 0)
sub_401180(&esi_2[0xb], 0xffffffff, &arg6[0xb], 0)
esi_2[0x12].b = arg6[0x12].b
sub_5ec870(&esi_2[0x13], &arg6[0x13])
sub_4b55f0(&esi_2[0x17], &arg6[0x17])
return &esi_2[0x17]
