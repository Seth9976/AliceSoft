// 函数: sub_6dd550
// 地址: 0x6dd550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
int32_t var_14 = esi
int16_t* ebx = arg3
int16_t* ecx = arg4
int16_t* edx = arg5
int32_t i = 0
char* esi_2 = arg1

do
    i += 1
    *ebx = zx.w(*esi_2) - 0x80
    ebx[1] = zx.w(esi_2[3]) - 0x80
    ebx[2] = zx.w(esi_2[6]) - 0x80
    ebx[3] = zx.w(esi_2[9]) - 0x80
    ebx[4] = zx.w(esi_2[0xc]) - 0x80
    ebx[5] = zx.w(esi_2[0xf]) - 0x80
    ebx[6] = zx.w(esi_2[0x12]) - 0x80
    ebx[7] = zx.w(esi_2[0x15]) - 0x80
    ebx[0x40] = zx.w(esi_2[0x18]) - 0x80
    ebx[0x41] = zx.w(esi_2[0x1b]) - 0x80
    ebx[0x42] = zx.w(esi_2[0x1e]) - 0x80
    ebx[0x43] = zx.w(esi_2[0x21]) - 0x80
    ebx[0x44] = zx.w(esi_2[0x24]) - 0x80
    ebx[0x45] = zx.w(esi_2[0x27]) - 0x80
    ebx[0x46] = zx.w(esi_2[0x2a]) - 0x80
    ebx[0x47] = zx.w(esi_2[0x2d]) - 0x80
    *ecx = ((zx.d(esi_2[1]) + zx.d(esi_2[4]) + 1) s>> 1).w - 0x80
    ecx[1] = ((zx.d(esi_2[7]) + zx.d(esi_2[0xa]) + 1) s>> 1).w - 0x80
    ecx[2] = ((zx.d(esi_2[0xd]) + zx.d(esi_2[0x10]) + 1) s>> 1).w - 0x80
    ecx[3] = ((zx.d(esi_2[0x13]) + zx.d(esi_2[0x16]) + 1) s>> 1).w - 0x80
    ecx[4] = ((zx.d(esi_2[0x19]) + zx.d(esi_2[0x1c]) + 1) s>> 1).w - 0x80
    ecx[5] = ((zx.d(esi_2[0x1f]) + zx.d(esi_2[0x22]) + 1) s>> 1).w - 0x80
    ecx[6] = ((zx.d(esi_2[0x25]) + zx.d(esi_2[0x28]) + 1) s>> 1).w - 0x80
    ecx[7] = ((zx.d(esi_2[0x2b]) + zx.d(esi_2[0x2e]) + 1) s>> 1).w - 0x80
    *edx = ((zx.d(esi_2[2]) + zx.d(esi_2[5]) + 1) s>> 1).w - 0x80
    edx[1] = ((zx.d(esi_2[8]) + zx.d(esi_2[0xb]) + 1) s>> 1).w - 0x80
    edx[2] = ((zx.d(esi_2[0xe]) + zx.d(esi_2[0x11]) + 1) s>> 1).w - 0x80
    edx[3] = ((zx.d(esi_2[0x14]) + zx.d(esi_2[0x17]) + 1) s>> 1).w - 0x80
    edx[4] = ((zx.d(esi_2[0x1a]) + zx.d(esi_2[0x1d]) + 1) s>> 1).w - 0x80
    edx[5] = ((zx.d(esi_2[0x20]) + zx.d(esi_2[0x23]) + 1) s>> 1).w - 0x80
    edx[6] = ((zx.d(esi_2[0x26]) + zx.d(esi_2[0x29]) + 1) s>> 1).w - 0x80
    edx[7] = ((zx.d(esi_2[0x2c]) + zx.d(esi_2[0x2f]) + 1) s>> 1).w - 0x80
    ebx = &ebx[8]
    ecx = &ecx[8]
    edx = &edx[8]
    esi_2 = &esi_2[arg2]
while (i s< 8)

return i
