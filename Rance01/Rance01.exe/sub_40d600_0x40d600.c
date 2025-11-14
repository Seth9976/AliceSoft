// 函数: sub_40d600
// 地址: 0x40d600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 u> 9)
    float eax_28
    eax_28.b = 0
    return eax_28

int32_t ecx

switch (arg1)
    case 0
        sub_5d12d0(*arg2)
        int32_t* eax_1
        eax_1.b = 1
        return eax_1
    case 1
        *arg3 = zx.d(sub_5ce4d0())
        uint32_t* eax_3
        eax_3.b = 1
        return eax_3
    case 2
        *arg3 = zx.d(sub_5cf380(*arg2, arg2[1]))
        return 1
    case 3
        int32_t var_4_2 = ecx
        *arg3 = zx.d(sub_5cf550(*arg2, fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[1]))))))
        uint32_t eax_9
        eax_9.b = 1
        return eax_9
    case 4
        *arg3 = zx.d(sub_5cf710(*arg2, arg2[1]))
        uint32_t* eax_13
        eax_13.b = 1
        return eax_13
    case 5
        ecx.b = arg2[1] != 0
        arg1.b = ecx.b
        *arg3 = zx.d(sub_5cf980(*arg2, arg1.b))
        uint32_t eax_16
        eax_16.b = 1
        return eax_16
    case 6
        *arg3 = zx.d(sub_5cfb40(*arg2, arg2[1]))
        uint32_t* eax_19
        eax_19.b = 1
        return eax_19
    case 7
        *arg3 = zx.d(sub_5cfca0(*arg2, arg2[1]))
        return 1
    case 8
        *arg3 = zx.d(sub_5cfe00(*arg2, arg2[1]))
        uint32_t eax_24
        eax_24.b = 1
        return eax_24
    case 9
        int32_t* edx_10 = arg2[1]
        int32_t* eax_26 = *arg2
        *arg3 = zx.d(sub_5d1390(eax_26, edx_10, ecx, eax_26, edx_10))
        return 1
