// 函数: sub_6d7ef0
// 地址: 0x6d7ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edx = arg1
int16_t* result = arg3
int32_t i_1 = 0
int16_t* var_1c = arg5
int16_t* var_18 = arg4
int32_t i

do
    *result = ((zx.d(*edx) * 0x4d + zx.d(edx[1]) * 0x96 + zx.d(edx[2]) * 0x1d - 0x7f80) s>> 8).w
    result[1] = ((zx.d(edx[3]) * 0x4d + zx.d(edx[4]) * 0x96 + zx.d(edx[5]) * 0x1d - 0x7f80) s>> 8).w
    result[2] = ((zx.d(edx[6]) * 0x4d + zx.d(edx[7]) * 0x96 + zx.d(edx[8]) * 0x1d - 0x7f80) s>> 8).w
    result[3] =
        ((zx.d(edx[9]) * 0x4d + zx.d(edx[0xa]) * 0x96 + zx.d(edx[0xb]) * 0x1d - 0x7f80) s>> 8).w
    result[4] =
        ((zx.d(edx[0xc]) * 0x4d + zx.d(edx[0xd]) * 0x96 + zx.d(edx[0xe]) * 0x1d - 0x7f80) s>> 8).w
    result[5] =
        ((zx.d(edx[0xf]) * 0x4d + zx.d(edx[0x10]) * 0x96 + zx.d(edx[0x11]) * 0x1d - 0x7f80) s>> 8).w
    result[6] = ((zx.d(edx[0x12]) * 0x4d + zx.d(edx[0x13]) * 0x96 + zx.d(edx[0x14]) * 0x1d - 0x7f80)
        s>> 8).w
    result[7] = ((zx.d(edx[0x15]) * 0x4d + zx.d(edx[0x16]) * 0x96 + zx.d(edx[0x17]) * 0x1d - 0x7f80)
        s>> 8).w
    result[0x40] = ((zx.d(edx[0x18]) * 0x4d + zx.d(edx[0x19]) * 0x96 + zx.d(edx[0x1a]) * 0x1d
        - 0x7f80) s>> 8).w
    result[0x41] = ((zx.d(edx[0x1b]) * 0x4d + zx.d(edx[0x1c]) * 0x96 + zx.d(edx[0x1d]) * 0x1d
        - 0x7f80) s>> 8).w
    result[0x42] = ((zx.d(edx[0x1e]) * 0x4d + zx.d(edx[0x1f]) * 0x96 + zx.d(edx[0x20]) * 0x1d
        - 0x7f80) s>> 8).w
    result[0x43] = ((zx.d(edx[0x21]) * 0x4d + zx.d(edx[0x22]) * 0x96 + zx.d(edx[0x23]) * 0x1d
        - 0x7f80) s>> 8).w
    result[0x44] = ((zx.d(edx[0x24]) * 0x4d + zx.d(edx[0x25]) * 0x96 + zx.d(edx[0x26]) * 0x1d
        - 0x7f80) s>> 8).w
    result[0x45] = ((zx.d(edx[0x27]) * 0x4d + zx.d(edx[0x28]) * 0x96 + zx.d(edx[0x29]) * 0x1d
        - 0x7f80) s>> 8).w
    result[0x46] = ((zx.d(edx[0x2a]) * 0x4d + zx.d(edx[0x2b]) * 0x96 + zx.d(edx[0x2c]) * 0x1d
        - 0x7f80) s>> 8).w
    result[0x47] = ((zx.d(edx[0x2d]) * 0x4d + zx.d(edx[0x2e]) * 0x96 + zx.d(edx[0x2f]) * 0x1d
        - 0x7f80) s>> 8).w
    uint32_t esi_3 = zx.d(*edx) + zx.d(edx[3])
    uint32_t ebp_2 = zx.d(edx[1]) + zx.d(edx[4])
    uint32_t ebx_34 = zx.d(edx[2]) + zx.d(edx[5])
    *var_18 = ((esi_3 * 0xffffffd5 + ebp_2 * 0xffffffab + (ebx_34 << 7) + 0x100) s>> 9).w
    result = &result[8]
    *var_1c = (((esi_3 << 7) + ebp_2 * 0xffffff95 + ebx_34 * 0xffffffeb + 0x100) s>> 9).w
    uint32_t esi_7 = zx.d(edx[6]) + zx.d(edx[9])
    uint32_t ebp_4 = zx.d(edx[7]) + zx.d(edx[0xa])
    uint32_t ebx_37 = zx.d(edx[8]) + zx.d(edx[0xb])
    var_18[1] = ((esi_7 * 0xffffffd5 + ebp_4 * 0xffffffab + (ebx_37 << 7) + 0x100) s>> 9).w
    var_1c[1] = (((esi_7 << 7) + ebp_4 * 0xffffff95 + ebx_37 * 0xffffffeb + 0x100) s>> 9).w
    uint32_t esi_11 = zx.d(edx[0xc]) + zx.d(edx[0xf])
    uint32_t ebp_6 = zx.d(edx[0xd]) + zx.d(edx[0x10])
    uint32_t ebx_40 = zx.d(edx[0xe]) + zx.d(edx[0x11])
    var_18[2] = ((esi_11 * 0xffffffd5 + ebp_6 * 0xffffffab + (ebx_40 << 7) + 0x100) s>> 9).w
    var_1c[2] = (((esi_11 << 7) + ebp_6 * 0xffffff95 + ebx_40 * 0xffffffeb + 0x100) s>> 9).w
    uint32_t esi_15 = zx.d(edx[0x12]) + zx.d(edx[0x15])
    uint32_t ebp_8 = zx.d(edx[0x13]) + zx.d(edx[0x16])
    uint32_t ebx_43 = zx.d(edx[0x14]) + zx.d(edx[0x17])
    var_18[3] = ((esi_15 * 0xffffffd5 + ebp_8 * 0xffffffab + (ebx_43 << 7) + 0x100) s>> 9).w
    var_1c[3] = (((esi_15 << 7) + ebp_8 * 0xffffff95 + ebx_43 * 0xffffffeb + 0x100) s>> 9).w
    uint32_t esi_19 = zx.d(edx[0x18]) + zx.d(edx[0x1b])
    uint32_t ebp_10 = zx.d(edx[0x19]) + zx.d(edx[0x1c])
    uint32_t ebx_46 = zx.d(edx[0x1a]) + zx.d(edx[0x1d])
    var_18[4] = ((esi_19 * 0xffffffd5 + ebp_10 * 0xffffffab + (ebx_46 << 7) + 0x100) s>> 9).w
    var_1c[4] = (((esi_19 << 7) + ebp_10 * 0xffffff95 + ebx_46 * 0xffffffeb + 0x100) s>> 9).w
    uint32_t esi_23 = zx.d(edx[0x1e]) + zx.d(edx[0x21])
    uint32_t ebp_12 = zx.d(edx[0x1f]) + zx.d(edx[0x22])
    uint32_t ebx_49 = zx.d(edx[0x20]) + zx.d(edx[0x23])
    var_18[5] = ((esi_23 * 0xffffffd5 + ebp_12 * 0xffffffab + (ebx_49 << 7) + 0x100) s>> 9).w
    var_1c[5] = (((esi_23 << 7) + ebp_12 * 0xffffff95 + ebx_49 * 0xffffffeb + 0x100) s>> 9).w
    uint32_t ebp_14 = zx.d(edx[0x24]) + zx.d(edx[0x27])
    uint32_t ebx_52 = zx.d(edx[0x25]) + zx.d(edx[0x28])
    uint32_t ecx_182 = zx.d(edx[0x26]) + zx.d(edx[0x29])
    var_18[6] = ((ebp_14 * 0xffffffd5 + ebx_52 * 0xffffffab + (ecx_182 << 7) + 0x100) s>> 9).w
    var_1c[6] = (((ebp_14 << 7) + ebx_52 * 0xffffff95 + ecx_182 * 0xffffffeb + 0x100) s>> 9).w
    uint32_t esi_33 = zx.d(edx[0x2a]) + zx.d(edx[0x2d])
    uint32_t ebp_18 = zx.d(edx[0x2b]) + zx.d(edx[0x2e])
    uint32_t ebx_56 = zx.d(edx[0x2c]) + zx.d(edx[0x2f])
    var_18[7] = ((esi_33 * 0xffffffd5 + ebp_18 * 0xffffffab + (ebx_56 << 7) + 0x100) s>> 9).w
    var_1c[7] = (((esi_33 << 7) + ebp_18 * 0xffffff95 + ebx_56 * 0xffffffeb + 0x100) s>> 9).w
    var_18 = &var_18[8]
    i = i_1 + 1
    var_1c = &var_1c[8]
    edx = &edx[arg2]
    i_1 = i
while (i s< 8)
return result
