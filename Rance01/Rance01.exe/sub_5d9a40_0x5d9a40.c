// 函数: sub_5d9a40
// 地址: 0x5d9a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = arg2

if (eax != 0 && (((((zx.d(eax[3]) << 8) + zx.d(eax[2])) << 8) + zx.d(eax[1])) << 8) + zx.d(*eax)
        == 0x46464952
        && (((((zx.d(eax[0xb]) << 8) + zx.d(eax[0xa])) << 8) + zx.d(eax[9])) << 8) + zx.d(eax[8])
        == 0x45564157 && (((((zx.d(eax[0xf]) << 8) + zx.d(eax[0xe])) << 8) + zx.d(eax[0xd])) << 8)
        + zx.d(eax[0xc]) == 0x20746d66)
    uint32_t ecx_28 = (((((zx.d(eax[0x13]) << 8) + zx.d(eax[0x12])) << 8) + zx.d(eax[0x11])) << 8)
        + zx.d(eax[0x10])
    void* eax_1 = &eax[0x14]
    *arg1 = eax_1
    void* eax_2 = eax_1 + ecx_28
    uint32_t ecx_35 = (((((zx.d(*(eax_2 + 3)) << 8) + zx.d(*(eax_1 + ecx_28 + 2))) << 8)
        + zx.d(*(eax_2 + 1))) << 8) + zx.d(*eax_2)
    arg2 = eax_2 + 4
    eax = ecx_35
    
    if (ecx_35 == 0x74636166)
        void** edx_16 = &arg2
        uint32_t eax_4
        int32_t ecx_36
        eax_4, ecx_36 = sub_5d9b60(ecx_35, edx_16)
        arg2 += eax_4
        eax, ecx_35 = sub_5d9b60(ecx_36, edx_16)
    
    if (eax == 0x61746164)
        arg1[1] = sub_5d9b60(ecx_35, &arg2)
        arg1[2] = arg2
        void* eax_6
        eax_6.b = 1
        return eax_6

eax.b = 0
return eax
