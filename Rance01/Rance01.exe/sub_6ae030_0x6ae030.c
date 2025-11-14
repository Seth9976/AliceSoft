// 函数: sub_6ae030
// 地址: 0x6ae030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg3 - 1)
int32_t ebp_1 = (eax - edx) s>> 1
int32_t edi_2

while (arg5 s< arg3)
    edi_2 = arg4
    int32_t eax_2 = ebp_1 * 5
    int32_t* esi_1 = edi_2 + (eax_2 << 3)
    
    if (*(edi_2 + (eax_2 << 3) + 0x20) != 0)
        goto label_6ae0b7
    
    if (arg6[8].b != 1)
        goto label_6ae0b7
    
    int32_t* edi_1 = edi_2 + arg3 * 0x28
    *edi_1 = *esi_1
    edi_1[1] = esi_1[1]
    edi_1[2] = esi_1[2]
    edi_1[3] = esi_1[3]
    sub_4b55f0(&edi_1[4], &esi_1[4])
    edi_1[8].b = esi_1[8].b
    edi_1[9] = esi_1[9]
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = sx.q(ebp_1 - 1)
    arg3 = ebp_1
    ebp_1 = (eax_7 - edx_4) s>> 1

edi_2 = arg4
label_6ae0b7:
int32_t* esi_2 = edi_2 + arg3 * 0x28
*esi_2 = *arg6
esi_2[1] = arg6[1]
esi_2[2] = arg6[2]
esi_2[3] = arg6[3]
sub_4b55f0(&esi_2[4], &arg6[4])
int32_t* result
result.b = arg6[8].b
esi_2[8].b = result.b
esi_2[9] = arg6[9]
return result
