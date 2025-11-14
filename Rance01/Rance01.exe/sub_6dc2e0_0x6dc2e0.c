// 函数: sub_6dc2e0
// 地址: 0x6dc2e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int32_t var_14 = esi
char* edi = arg1
int16_t* ebx = arg4
int16_t* ecx = arg5
int32_t i = 0
int16_t* esi_2 = arg3
void* result

do
    i += 1
    *esi_2 = zx.w(*edi) - 0x80
    *ebx = zx.w(edi[1]) - 0x80
    result = &ecx[1]
    *ecx = zx.w(edi[2]) - 0x80
    esi_2[1] = zx.w(edi[3]) - 0x80
    ebx[1] = zx.w(edi[4]) - 0x80
    ecx[1] = zx.w(edi[5]) - 0x80
    esi_2[2] = zx.w(edi[6]) - 0x80
    ebx[2] = zx.w(edi[7]) - 0x80
    ecx[2] = zx.w(edi[8]) - 0x80
    esi_2[3] = zx.w(edi[9]) - 0x80
    ebx[3] = zx.w(edi[0xa]) - 0x80
    ecx[3] = zx.w(edi[0xb]) - 0x80
    esi_2[4] = zx.w(edi[0xc]) - 0x80
    ebx[4] = zx.w(edi[0xd]) - 0x80
    ecx[4] = zx.w(edi[0xe]) - 0x80
    esi_2[5] = zx.w(edi[0xf]) - 0x80
    ebx[5] = zx.w(edi[0x10]) - 0x80
    ecx[5] = zx.w(edi[0x11]) - 0x80
    esi_2[6] = zx.w(edi[0x12]) - 0x80
    ebx[6] = zx.w(edi[0x13]) - 0x80
    ecx[6] = zx.w(edi[0x14]) - 0x80
    esi_2[7] = zx.w(edi[0x15]) - 0x80
    ebx[7] = zx.w(edi[0x16]) - 0x80
    ecx = &ecx[8]
    esi_2 = &esi_2[8]
    ebx = &ebx[8]
    *(result + 0xc) = zx.w(edi[0x17]) - 0x80
    edi = &edi[arg2]
while (i s< 8)

return result
