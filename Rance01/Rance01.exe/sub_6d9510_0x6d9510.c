// 函数: sub_6d9510
// 地址: 0x6d9510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ebp = arg1
int16_t* ebx = arg3
int16_t* ecx = arg4
int16_t* edx = arg5
int16_t* result = arg6
int32_t var_18 = 0
bool cond:0_1

do
    *ebx = ((neg.d(zx.d(*ebp)) * 0x4d + neg.d(zx.d(ebp[1])) * 0x96 + zx.d(ebp[2]) * 0xffffffe3
        + 0x7f80) s>> 8).w
    ebx[1] = ((neg.d(zx.d(ebp[4])) * 0x4d + neg.d(zx.d(ebp[5])) * 0x96 + zx.d(ebp[6]) * 0xffffffe3
        + 0x7f80) s>> 8).w
    ebx[2] = ((neg.d(zx.d(ebp[8])) * 0x4d + neg.d(zx.d(ebp[9])) * 0x96 + zx.d(ebp[0xa]) * 0xffffffe3
        + 0x7f80) s>> 8).w
    ebx[3] = ((neg.d(zx.d(ebp[0xc])) * 0x4d + neg.d(zx.d(ebp[0xd])) * 0x96
        + zx.d(ebp[0xe]) * 0xffffffe3 + 0x7f80) s>> 8).w
    ebx[4] = ((neg.d(zx.d(ebp[0x10])) * 0x4d + neg.d(zx.d(ebp[0x11])) * 0x96
        + zx.d(ebp[0x12]) * 0xffffffe3 + 0x7f80) s>> 8).w
    ebx[5] = ((neg.d(zx.d(ebp[0x14])) * 0x4d + neg.d(zx.d(ebp[0x15])) * 0x96
        + zx.d(ebp[0x16]) * 0xffffffe3 + 0x7f80) s>> 8).w
    ebx[6] = ((neg.d(zx.d(ebp[0x18])) * 0x4d + neg.d(zx.d(ebp[0x19])) * 0x96
        + zx.d(ebp[0x1a]) * 0xffffffe3 + 0x7f80) s>> 8).w
    ebx[7] = ((neg.d(zx.d(ebp[0x1c])) * 0x4d + neg.d(zx.d(ebp[0x1d])) * 0x96
        + zx.d(ebp[0x1e]) * 0xffffffe3 + 0x7f80) s>> 8).w
    *result = zx.w(ebp[3]) - 0x80
    result[1] = zx.w(ebp[7]) - 0x80
    result[2] = zx.w(ebp[0xb]) - 0x80
    result[3] = zx.w(ebp[0xf]) - 0x80
    result[4] = zx.w(ebp[0x13]) - 0x80
    result[5] = zx.w(ebp[0x17]) - 0x80
    result[6] = zx.w(ebp[0x1b]) - 0x80
    result[7] = zx.w(ebp[0x1f]) - 0x80
    ebx = &ebx[8]
    *ecx = ((neg.d(zx.d(*ebp)) * 0xffffffd5 + neg.d(zx.d(ebp[1])) * 0xffffffab
        + ((neg.d(zx.d(ebp[2])) + 0xff) << 7) - 0x7f00) s>> 8).w
    result = &result[8]
    ecx[1] = ((neg.d(zx.d(ebp[4])) * 0xffffffd5 + neg.d(zx.d(ebp[5])) * 0xffffffab
        + ((neg.d(zx.d(ebp[6])) + 0xff) << 7) - 0x7f00) s>> 8).w
    ecx[2] = ((neg.d(zx.d(ebp[8])) * 0xffffffd5 + neg.d(zx.d(ebp[9])) * 0xffffffab
        + ((neg.d(zx.d(ebp[0xa])) + 0xff) << 7) - 0x7f00) s>> 8).w
    ecx[3] = ((neg.d(zx.d(ebp[0xc])) * 0xffffffd5 + neg.d(zx.d(ebp[0xd])) * 0xffffffab
        + ((neg.d(zx.d(ebp[0xe])) + 0xff) << 7) - 0x7f00) s>> 8).w
    ecx[4] = ((neg.d(zx.d(ebp[0x10])) * 0xffffffd5 + neg.d(zx.d(ebp[0x11])) * 0xffffffab
        + ((neg.d(zx.d(ebp[0x12])) + 0xff) << 7) - 0x7f00) s>> 8).w
    ecx[5] = ((neg.d(zx.d(ebp[0x14])) * 0xffffffd5 + neg.d(zx.d(ebp[0x15])) * 0xffffffab
        + ((neg.d(zx.d(ebp[0x16])) + 0xff) << 7) - 0x7f00) s>> 8).w
    ecx[6] = ((neg.d(zx.d(ebp[0x18])) * 0xffffffd5 + neg.d(zx.d(ebp[0x19])) * 0xffffffab
        + ((neg.d(zx.d(ebp[0x1a])) + 0xff) << 7) - 0x7f00) s>> 8).w
    ecx[7] = ((neg.d(zx.d(ebp[0x1c])) * 0xffffffd5 + neg.d(zx.d(ebp[0x1d])) * 0xffffffab
        + ((neg.d(zx.d(ebp[0x1e])) + 0xff) << 7) - 0x7f00) s>> 8).w
    ecx = &ecx[8]
    *edx = ((((neg.d(zx.d(*ebp)) + 0xff) << 7) + neg.d(zx.d(ebp[1])) * 0xffffff95
        + zx.d(ebp[2]) * 0x15 - 0x7f00) s>> 8).w
    edx[1] = ((((neg.d(zx.d(ebp[4])) + 0xff) << 7) + neg.d(zx.d(ebp[5])) * 0xffffff95
        + zx.d(ebp[6]) * 0x15 - 0x7f00) s>> 8).w
    edx[2] = ((((neg.d(zx.d(ebp[8])) + 0xff) << 7) + neg.d(zx.d(ebp[9])) * 0xffffff95
        + zx.d(ebp[0xa]) * 0x15 - 0x7f00) s>> 8).w
    edx[3] = ((((neg.d(zx.d(ebp[0xc])) + 0xff) << 7) + neg.d(zx.d(ebp[0xd])) * 0xffffff95
        + zx.d(ebp[0xe]) * 0x15 - 0x7f00) s>> 8).w
    edx[4] = ((((neg.d(zx.d(ebp[0x10])) + 0xff) << 7) + neg.d(zx.d(ebp[0x11])) * 0xffffff95
        + zx.d(ebp[0x12]) * 0x15 - 0x7f00) s>> 8).w
    edx[5] = ((((neg.d(zx.d(ebp[0x14])) + 0xff) << 7) + neg.d(zx.d(ebp[0x15])) * 0xffffff95
        + zx.d(ebp[0x16]) * 0x15 - 0x7f00) s>> 8).w
    edx[6] = ((((neg.d(zx.d(ebp[0x18])) + 0xff) << 7) + neg.d(zx.d(ebp[0x19])) * 0xffffff95
        + zx.d(ebp[0x1a]) * 0x15 - 0x7f00) s>> 8).w
    edx[7] = ((((neg.d(zx.d(ebp[0x1c])) + 0xff) << 7) + neg.d(zx.d(ebp[0x1d])) * 0xffffff95
        + zx.d(ebp[0x1e]) * 0x15 - 0x7f00) s>> 8).w
    edx = &edx[8]
    ebp = &ebp[arg2]
    cond:0_1 = var_18 + 1 s< 8
    var_18 += 1
while (cond:0_1)
return result
