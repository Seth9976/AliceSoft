// 函数: sub_6de610
// 地址: 0x6de610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_4 = esi
int32_t var_c = esi
char* ebx = arg1
int16_t* edx = arg3
int32_t i

for (i = 0; i s< 8; )
    i += 1
    *edx = zx.w(*ebx) - 0x80
    edx[1] = zx.w(ebx[1]) - 0x80
    edx[2] = zx.w(ebx[2]) - 0x80
    edx[3] = zx.w(ebx[3]) - 0x80
    edx[4] = zx.w(ebx[4]) - 0x80
    edx[5] = zx.w(ebx[5]) - 0x80
    edx[6] = zx.w(ebx[6]) - 0x80
    edx[7] = zx.w(ebx[7]) - 0x80
    ebx = &ebx[arg2]
    edx = &edx[8]

return i
