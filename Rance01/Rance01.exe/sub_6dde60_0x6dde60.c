// 函数: sub_6dde60
// 地址: 0x6dde60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int32_t var_14 = esi
char* edi = arg1
int16_t* ebx = arg3
int16_t* ecx = arg4
int16_t* edx = arg5
int32_t i

for (i = 0; i s< 8; )
    i += 1
    *ebx = zx.w(*edi) - 0x80
    ebx[1] = zx.w(edi[2]) - 0x80
    ebx[2] = zx.w(edi[4]) - 0x80
    ebx[3] = zx.w(edi[6]) - 0x80
    ebx[4] = zx.w(edi[8]) - 0x80
    ebx[5] = zx.w(edi[0xa]) - 0x80
    ebx[6] = zx.w(edi[0xc]) - 0x80
    ebx[7] = zx.w(edi[0xe]) - 0x80
    ebx[0x40] = zx.w(edi[0x10]) - 0x80
    ebx[0x41] = zx.w(edi[0x12]) - 0x80
    ebx[0x42] = zx.w(edi[0x14]) - 0x80
    ebx[0x43] = zx.w(edi[0x16]) - 0x80
    ebx[0x44] = zx.w(edi[0x18]) - 0x80
    ebx[0x45] = zx.w(edi[0x1a]) - 0x80
    ebx[0x46] = zx.w(edi[0x1c]) - 0x80
    ebx[0x47] = zx.w(edi[0x1e]) - 0x80
    *ecx = zx.w(edi[1]) - 0x80
    ecx[1] = zx.w(edi[5]) - 0x80
    ecx[2] = zx.w(edi[9]) - 0x80
    ecx[3] = zx.w(edi[0xd]) - 0x80
    ecx[4] = zx.w(edi[0x11]) - 0x80
    ecx[5] = zx.w(edi[0x15]) - 0x80
    ecx[6] = zx.w(edi[0x19]) - 0x80
    ecx[7] = zx.w(edi[0x1d]) - 0x80
    *edx = zx.w(edi[3]) - 0x80
    edx[1] = zx.w(edi[7]) - 0x80
    edx[2] = zx.w(edi[0xb]) - 0x80
    edx[3] = zx.w(edi[0xf]) - 0x80
    edx[4] = zx.w(edi[0x13]) - 0x80
    edx[5] = zx.w(edi[0x17]) - 0x80
    edx[6] = zx.w(edi[0x1b]) - 0x80
    edx[7] = zx.w(edi[0x1f]) - 0x80
    ebx = &ebx[8]
    ecx = &ecx[8]
    edx = &edx[8]
    edi = &edi[arg2]

return i
