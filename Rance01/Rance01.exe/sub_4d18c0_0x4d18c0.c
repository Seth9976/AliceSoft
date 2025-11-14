// 函数: sub_4d18c0
// 地址: 0x4d18c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (void* i = *(arg1 + 0xc); i != *(arg1 + 0x10); i += 0x9c)
    void* eax_1 = *(i + 0x28)
    void* ecx_1 = eax_1 + (arg3 << 5)
    void* var_34_1 = ecx_1
    struct sealengine::CSQT::VTable* var_20
    struct sealengine::CSQT::VTable** eax_3 =
        sub_51a240(ecx_1, eax_1 + (arg2 << 5), &var_20, fconvert.s(fconvert.t(arg4)))
    *(i + 0x3c) = eax_3[1]
    *(i + 0x40) = eax_3[2]
    *(i + 0x44) = eax_3[3]
    *(i + 0x48) = eax_3[4]
    *(i + 0x4c) = eax_3[5]
    *(i + 0x50) = eax_3[6]
    *(i + 0x54) = eax_3[7]
    *(i + 0x58) = 0
