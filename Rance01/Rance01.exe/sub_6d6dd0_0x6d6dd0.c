// 函数: sub_6d6dd0
// 地址: 0x6d6dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1
int16_t* ecx = arg3
int32_t i_1 = 0
int16_t* var_18 = arg5
int16_t* var_14 = arg4
int32_t i

do
    *ecx =
        ((zx.d(*(edx + 2)) * 0x4d + zx.d(*(edx + 1)) * 0x96 + zx.d(*edx) * 0x1d - 0x7f80) s>> 8).w
    ecx[1] = ((zx.d(*(edx + 5)) * 0x4d + zx.d(*(edx + 4)) * 0x96 + zx.d(*(edx + 3)) * 0x1d - 0x7f80)
        s>> 8).w
    ecx[2] = ((zx.d(*(edx + 8)) * 0x4d + zx.d(*(edx + 7)) * 0x96 + zx.d(*(edx + 6)) * 0x1d - 0x7f80)
        s>> 8).w
    ecx[3] = ((zx.d(*(edx + 0xb)) * 0x4d + zx.d(*(edx + 0xa)) * 0x96 + zx.d(*(edx + 9)) * 0x1d
        - 0x7f80) s>> 8).w
    ecx[4] = ((zx.d(*(edx + 0xe)) * 0x4d + zx.d(*(edx + 0xd)) * 0x96 + zx.d(*(edx + 0xc)) * 0x1d
        - 0x7f80) s>> 8).w
    ecx[5] = ((zx.d(*(edx + 0x11)) * 0x4d + zx.d(*(edx + 0x10)) * 0x96 + zx.d(*(edx + 0xf)) * 0x1d
        - 0x7f80) s>> 8).w
    ecx[6] = ((zx.d(*(edx + 0x14)) * 0x4d + zx.d(*(edx + 0x13)) * 0x96 + zx.d(*(edx + 0x12)) * 0x1d
        - 0x7f80) s>> 8).w
    ecx[7] = ((zx.d(*(edx + 0x17)) * 0x4d + zx.d(*(edx + 0x16)) * 0x96 + zx.d(*(edx + 0x15)) * 0x1d
        - 0x7f80) s>> 8).w
    ecx[0x40] = ((zx.d(*(edx + 0x1a)) * 0x4d + zx.d(*(edx + 0x19)) * 0x96
        + zx.d(*(edx + 0x18)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x41] = ((zx.d(*(edx + 0x1d)) * 0x4d + zx.d(*(edx + 0x1c)) * 0x96
        + zx.d(*(edx + 0x1b)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x42] = ((zx.d(*(edx + 0x20)) * 0x4d + zx.d(*(edx + 0x1f)) * 0x96
        + zx.d(*(edx + 0x1e)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x43] = ((zx.d(*(edx + 0x23)) * 0x4d + zx.d(*(edx + 0x22)) * 0x96
        + zx.d(*(edx + 0x21)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x44] = ((zx.d(*(edx + 0x26)) * 0x4d + zx.d(*(edx + 0x25)) * 0x96
        + zx.d(*(edx + 0x24)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x45] = ((zx.d(*(edx + 0x29)) * 0x4d + zx.d(*(edx + 0x28)) * 0x96
        + zx.d(*(edx + 0x27)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x46] = ((zx.d(*(edx + 0x2c)) * 0x4d + zx.d(*(edx + 0x2b)) * 0x96
        + zx.d(*(edx + 0x2a)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x47] = ((zx.d(*(edx + 0x2f)) * 0x4d + zx.d(*(edx + 0x2e)) * 0x96
        + zx.d(*(edx + 0x2d)) * 0x1d - 0x7f80) s>> 8).w
    uint32_t eax_114 = zx.d(*edx) + zx.d(*(edx + 3))
    uint32_t ebp_2 = zx.d(*(edx + 1)) + zx.d(*(edx + 4))
    uint32_t ebp_4 = zx.d(*(edx + 2)) + zx.d(*(edx + 5))
    uint32_t ebp_6 = zx.d(*(edx + 6)) + zx.d(*(edx + 9))
    uint32_t ebp_8 = zx.d(*(edx + 7)) + zx.d(*(edx + 0xa))
    uint32_t ebp_10 = zx.d(*(edx + 8)) + zx.d(*(edx + 0xb))
    uint32_t ebp_12 = zx.d(*(edx + 0xc)) + zx.d(*(edx + 0xf))
    uint32_t ebp_14 = zx.d(*(edx + 0xd)) + zx.d(*(edx + 0x10))
    uint32_t ebp_16 = zx.d(*(edx + 0xe)) + zx.d(*(edx + 0x11))
    uint32_t ebp_18 = zx.d(*(edx + 0x12)) + zx.d(*(edx + 0x15))
    uint32_t ebp_20 = zx.d(*(edx + 0x13)) + zx.d(*(edx + 0x16))
    uint32_t ebp_22 = zx.d(*(edx + 0x14)) + zx.d(*(edx + 0x17))
    uint32_t ebp_24 = zx.d(*(edx + 0x18)) + zx.d(*(edx + 0x1b))
    uint32_t ebp_26 = zx.d(*(edx + 0x19)) + zx.d(*(edx + 0x1c))
    uint32_t ebp_28 = zx.d(*(edx + 0x1a)) + zx.d(*(edx + 0x1d))
    uint32_t ebp_30 = zx.d(*(edx + 0x1e)) + zx.d(*(edx + 0x21))
    uint32_t ebp_32 = zx.d(*(edx + 0x1f)) + zx.d(*(edx + 0x22))
    uint32_t ebp_34 = zx.d(*(edx + 0x20)) + zx.d(*(edx + 0x23))
    uint32_t ebp_36 = zx.d(*(edx + 0x24)) + zx.d(*(edx + 0x27))
    uint32_t ebp_38 = zx.d(*(edx + 0x25)) + zx.d(*(edx + 0x28))
    uint32_t ebp_40 = zx.d(*(edx + 0x26)) + zx.d(*(edx + 0x29))
    uint32_t ebp_42 = zx.d(*(edx + 0x2a)) + zx.d(*(edx + 0x2d))
    uint32_t ebp_44 = zx.d(*(edx + 0x2b)) + zx.d(*(edx + 0x2e))
    uint32_t ebp_46 = zx.d(*(edx + 0x2c)) + zx.d(*(edx + 0x2f))
    void* edx_1 = edx + arg2
    ecx[8] = ((zx.d(*(edx_1 + 2)) * 0x4d + zx.d(*(edx_1 + 1)) * 0x96 + zx.d(*edx_1) * 0x1d - 0x7f80)
        s>> 8).w
    ecx[9] = ((zx.d(*(edx_1 + 5)) * 0x4d + zx.d(*(edx_1 + 4)) * 0x96 + zx.d(*(edx_1 + 3)) * 0x1d
        - 0x7f80) s>> 8).w
    ecx[0xa] = ((zx.d(*(edx_1 + 8)) * 0x4d + zx.d(*(edx_1 + 7)) * 0x96 + zx.d(*(edx_1 + 6)) * 0x1d
        - 0x7f80) s>> 8).w
    ecx[0xb] = ((zx.d(*(edx_1 + 0xb)) * 0x4d + zx.d(*(edx_1 + 0xa)) * 0x96
        + zx.d(*(edx_1 + 9)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0xc] = ((zx.d(*(edx_1 + 0xe)) * 0x4d + zx.d(*(edx_1 + 0xd)) * 0x96
        + zx.d(*(edx_1 + 0xc)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0xd] = ((zx.d(*(edx_1 + 0x11)) * 0x4d + zx.d(*(edx_1 + 0x10)) * 0x96
        + zx.d(*(edx_1 + 0xf)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0xe] = ((zx.d(*(edx_1 + 0x14)) * 0x4d + zx.d(*(edx_1 + 0x13)) * 0x96
        + zx.d(*(edx_1 + 0x12)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0xf] = ((zx.d(*(edx_1 + 0x17)) * 0x4d + zx.d(*(edx_1 + 0x16)) * 0x96
        + zx.d(*(edx_1 + 0x15)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x48] = ((zx.d(*(edx_1 + 0x1a)) * 0x4d + zx.d(*(edx_1 + 0x19)) * 0x96
        + zx.d(*(edx_1 + 0x18)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x49] = ((zx.d(*(edx_1 + 0x1d)) * 0x4d + zx.d(*(edx_1 + 0x1c)) * 0x96
        + zx.d(*(edx_1 + 0x1b)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x4a] = ((zx.d(*(edx_1 + 0x20)) * 0x4d + zx.d(*(edx_1 + 0x1f)) * 0x96
        + zx.d(*(edx_1 + 0x1e)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x4b] = ((zx.d(*(edx_1 + 0x23)) * 0x4d + zx.d(*(edx_1 + 0x22)) * 0x96
        + zx.d(*(edx_1 + 0x21)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x4c] = ((zx.d(*(edx_1 + 0x26)) * 0x4d + zx.d(*(edx_1 + 0x25)) * 0x96
        + zx.d(*(edx_1 + 0x24)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x4d] = ((zx.d(*(edx_1 + 0x29)) * 0x4d + zx.d(*(edx_1 + 0x28)) * 0x96
        + zx.d(*(edx_1 + 0x27)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x4e] = ((zx.d(*(edx_1 + 0x2c)) * 0x4d + zx.d(*(edx_1 + 0x2b)) * 0x96
        + zx.d(*(edx_1 + 0x2a)) * 0x1d - 0x7f80) s>> 8).w
    ecx[0x4f] = ((zx.d(*(edx_1 + 0x2f)) * 0x4d + zx.d(*(edx_1 + 0x2e)) * 0x96
        + zx.d(*(edx_1 + 0x2d)) * 0x1d - 0x7f80) s>> 8).w
    uint32_t esi_6 = zx.d(*edx_1) + zx.d(*(edx_1 + 3)) + eax_114
    uint32_t ebp_103 = zx.d(*(edx_1 + 1)) + zx.d(*(edx_1 + 4)) + ebp_2
    uint32_t ebx_146 = zx.d(*(edx_1 + 2)) + zx.d(*(edx_1 + 5)) + ebp_4
    *var_14 = ((ebx_146 * 0xffffffd5 + (esi_6 << 7) + ebp_103 * 0xffffffab + 0x200) s>> 0xa).w
    ecx = &ecx[0x10]
    *var_18 = (((ebx_146 << 7) + esi_6 * 0xffffffeb + ebp_103 * 0xffffff95 + 0x200) s>> 0xa).w
    uint32_t esi_9 = zx.d(*(edx_1 + 6)) + zx.d(*(edx_1 + 9)) + ebp_6
    uint32_t ebp_106 = zx.d(*(edx_1 + 7)) + zx.d(*(edx_1 + 0xa)) + ebp_8
    uint32_t ebx_152 = zx.d(*(edx_1 + 8)) + zx.d(*(edx_1 + 0xb)) + ebp_10
    var_14[1] = ((ebx_152 * 0xffffffd5 + (esi_9 << 7) + ebp_106 * 0xffffffab + 0x200) s>> 0xa).w
    var_18[1] = (((ebx_152 << 7) + esi_9 * 0xffffffeb + ebp_106 * 0xffffff95 + 0x200) s>> 0xa).w
    uint32_t esi_12 = zx.d(*(edx_1 + 0xc)) + zx.d(*(edx_1 + 0xf)) + ebp_12
    uint32_t ebp_109 = zx.d(*(edx_1 + 0xd)) + zx.d(*(edx_1 + 0x10)) + ebp_14
    uint32_t ebx_158 = zx.d(*(edx_1 + 0xe)) + zx.d(*(edx_1 + 0x11)) + ebp_16
    var_14[2] = ((ebx_158 * 0xffffffd5 + (esi_12 << 7) + ebp_109 * 0xffffffab + 0x200) s>> 0xa).w
    var_18[2] = (((ebx_158 << 7) + esi_12 * 0xffffffeb + ebp_109 * 0xffffff95 + 0x200) s>> 0xa).w
    uint32_t esi_15 = zx.d(*(edx_1 + 0x12)) + zx.d(*(edx_1 + 0x15)) + ebp_18
    uint32_t ebp_112 = zx.d(*(edx_1 + 0x13)) + zx.d(*(edx_1 + 0x16)) + ebp_20
    uint32_t ebx_164 = zx.d(*(edx_1 + 0x14)) + zx.d(*(edx_1 + 0x17)) + ebp_22
    var_14[3] = ((ebx_164 * 0xffffffd5 + (esi_15 << 7) + ebp_112 * 0xffffffab + 0x200) s>> 0xa).w
    var_18[3] = (((ebx_164 << 7) + esi_15 * 0xffffffeb + ebp_112 * 0xffffff95 + 0x200) s>> 0xa).w
    uint32_t esi_18 = zx.d(*(edx_1 + 0x18)) + zx.d(*(edx_1 + 0x1b)) + ebp_24
    uint32_t ebp_115 = zx.d(*(edx_1 + 0x19)) + zx.d(*(edx_1 + 0x1c)) + ebp_26
    uint32_t ebx_170 = zx.d(*(edx_1 + 0x1a)) + zx.d(*(edx_1 + 0x1d)) + ebp_28
    var_14[4] = ((ebx_170 * 0xffffffd5 + (esi_18 << 7) + ebp_115 * 0xffffffab + 0x200) s>> 0xa).w
    var_18[4] = (((ebx_170 << 7) + esi_18 * 0xffffffeb + ebp_115 * 0xffffff95 + 0x200) s>> 0xa).w
    uint32_t esi_21 = zx.d(*(edx_1 + 0x1e)) + zx.d(*(edx_1 + 0x21)) + ebp_30
    uint32_t ebp_118 = zx.d(*(edx_1 + 0x1f)) + zx.d(*(edx_1 + 0x22)) + ebp_32
    uint32_t ebx_176 = zx.d(*(edx_1 + 0x20)) + zx.d(*(edx_1 + 0x23)) + ebp_34
    var_14[5] = ((ebx_176 * 0xffffffd5 + (esi_21 << 7) + ebp_118 * 0xffffffab + 0x200) s>> 0xa).w
    var_18[5] = (((ebx_176 << 7) + esi_21 * 0xffffffeb + ebp_118 * 0xffffff95 + 0x200) s>> 0xa).w
    uint32_t ebp_121 = zx.d(*(edx_1 + 0x24)) + zx.d(*(edx_1 + 0x27)) + ebp_36
    uint32_t ebx_182 = zx.d(*(edx_1 + 0x25)) + zx.d(*(edx_1 + 0x28)) + ebp_38
    uint32_t eax_184 = zx.d(*(edx_1 + 0x26)) + zx.d(*(edx_1 + 0x29)) + ebp_40
    var_14[6] = ((eax_184 * 0xffffffd5 + (ebp_121 << 7) + ebx_182 * 0xffffffab + 0x200) s>> 0xa).w
    var_18[6] = (((eax_184 << 7) + ebp_121 * 0xffffffeb + ebx_182 * 0xffffff95 + 0x200) s>> 0xa).w
    uint32_t esi_30 = zx.d(*(edx_1 + 0x2a)) + zx.d(*(edx_1 + 0x2d)) + ebp_42
    uint32_t ebp_125 = zx.d(*(edx_1 + 0x2b)) + zx.d(*(edx_1 + 0x2e)) + ebp_44
    uint32_t ebx_187 = zx.d(*(edx_1 + 0x2c)) + zx.d(*(edx_1 + 0x2f)) + ebp_46
    var_14[7] = ((ebx_187 * 0xffffffd5 + (esi_30 << 7) + ebp_125 * 0xffffffab + 0x200) s>> 0xa).w
    var_18[7] = (((ebx_187 << 7) + esi_30 * 0xffffffeb + ebp_125 * 0xffffff95 + 0x200) s>> 0xa).w
    i = i_1 + 2
    var_14 = &var_14[8]
    var_18 = &var_18[8]
    edx = edx_1 + arg2
    i_1 = i
while (i s< 8)

return i
