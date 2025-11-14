// 函数: sub_406e20
// 地址: 0x406e20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_59

if (arg1 u> 0x2c)
    eax_59.b = 0
    return eax_59

switch (arg1)
    case 0
        *arg3 = sub_407790(*arg2)
        int32_t eax_1
        eax_1.b = 1
        return eax_1
    case 1
        int32_t ecx_2
        ecx_2.b = sub_408f60() != 0
        *arg3 = ecx_2
        int32_t eax_3
        eax_3.b = 1
        return eax_3
    case 2
        int32_t* ecx_3 = *arg2
        void* edx_3 = data_797d2c
        int32_t* var_8_1 = ecx_3
        *arg3 = sub_40d040(*(edx_3 + 0x30) + 0x28c, edx_3, ecx_3)
        int32_t eax_7
        eax_7.b = 1
        return eax_7
    case 3
        *arg3 = sub_407a50(*arg2, arg2[1])
        uint32_t eax_10
        eax_10.b = 1
        return eax_10
    case 4
        *arg3 = sub_407b40(*arg2, arg2[1], arg2[2])
        uint32_t eax_12
        eax_12.b = 1
        return eax_12
    case 5
        *arg3 = zx.d(sub_409390(*arg2))
        int32_t eax_14
        eax_14.b = 1
        return eax_14
    case 6
        *arg3 = zx.d(sub_407b70())
        uint32_t* eax_16
        eax_16.b = 1
        return eax_16
    case 7
        *arg3 = sub_407b90(*arg2, arg2[1])
        int32_t eax_18
        eax_18.b = 1
        return eax_18
    case 8
        *arg3 = sub_407d00(*arg2, arg2[1])
        int32_t eax_21
        eax_21.b = 1
        return eax_21
    case 9
        *arg3 = zx.d(sub_409970(*arg2))
        int32_t eax_24
        eax_24.b = 1
        return eax_24
    case 0xa
        *(*(data_797d2c + 0x30) + 0x17c) = *arg2
        void* eax_25
        eax_25.b = 1
        return eax_25
    case 0xb
        *(*(data_797d2c + 0x30) + 0x180) = *arg2
        int32_t eax_27
        eax_27.b = 1
        return eax_27
    case 0xc
        sub_407e70((*arg2).b, (arg2[1]).b, (arg2[2]).b)
        void* eax_30
        eax_30.b = 1
        return eax_30
    case 0xd
        *(*(data_797d2c + 0x30) + 0x188) = fconvert.s(fconvert.t(*arg2))
        int32_t* eax_31
        eax_31.b = 1
        return eax_31
    case 0xe
        *(*(data_797d2c + 0x30) + 0x18c) = fconvert.s(fconvert.t(*arg2))
        int32_t* eax_32
        eax_32.b = 1
        return eax_32
    case 0xf
        sub_407ee0((*arg2).b, (arg2[1]).b, (arg2[2]).b)
        void* eax_35
        eax_35.b = 1
        return eax_35
    case 0x10
        *arg3 = zx.d(sub_407f10(*arg2, arg2[1]))
        int32_t eax_38
        eax_38.b = 1
        return eax_38
    case 0x11
        *arg3 = fconvert.s(fconvert.t(*(*(data_797d2c + 0x30) + 0x2f0)))
        void* eax_39
        eax_39.b = 1
        return eax_39
    case 0x12
        *arg3 = sub_407fe0(*arg2)
        int32_t eax_41
        eax_41.b = 1
        return eax_41
    case 0x13
        *arg3 = sub_4080c0(*arg2, arg2[1])
        int32_t eax_44
        eax_44.b = 1
        return eax_44
    case 0x14
        *arg3 = zx.d(sub_40bb70(*(data_797d2c + 0x30), *arg2) != 0)
        return true
    case 0x15
        int32_t ecx
        int32_t var_8_12 = ecx
        *arg3 = zx.d(sub_408500(fconvert.s(fconvert.t(*arg2))))
        return 1
    case 0x16
        *arg3 = zx.d(sub_408540())
        uint32_t eax_51
        eax_51.b = 1
        return eax_51
    case 0x17
        *arg3 = zx.d(sub_40bd00(*(data_797d2c + 0x30), *arg2) != 0)
        return true
    case 0x18
        *arg3 = *(*(data_797d2c + 0x30) + 0x2cc)
        int32_t* eax_56
        eax_56.b = 1
        return eax_56
    case 0x19
        int32_t edx_29 = arg2[1]
        void* eax_58 = *(data_797d2c + 0x30)
        *(eax_58 + 0x27c) = *arg2
        *(eax_58 + 0x280) = edx_29
        eax_58.b = 1
        return eax_58
    case 0x1a
        eax_59.b = *arg2 != 0
        *arg3 = zx.d(sub_4085b0(eax_59.b))
        uint32_t* eax_61
        eax_61.b = 1
        return eax_61
    case 0x1b
        *arg3 = zx.d(*(*(data_797d2c + 0x30) + 0x2d0))
        uint32_t eax_62
        eax_62.b = 1
        return eax_62
    case 0x1c
        *arg3 = zx.d(sub_408600())
        uint32_t* eax_64
        eax_64.b = 1
        return eax_64
    case 0x1d
        sub_408650()
        int32_t eax_65
        eax_65.b = 1
        return eax_65
    case 0x1e
        sub_408690(*arg2 != 0)
        void* eax_67
        eax_67.b = 1
        return eax_67
    case 0x1f
        *arg3 = zx.d(*(data_797d2c + 0x49))
        int32_t* eax_68
        eax_68.b = 1
        return eax_68
    case 0x20
        *(data_797d2c + 0x48) = *arg2 != 0
        void* eax_69
        eax_69.b = 1
        return eax_69
    case 0x21
        *arg3 = zx.d(*(data_797d2c + 0x48))
        int32_t* eax_70
        eax_70.b = 1
        return eax_70
    case 0x22
        *(data_797d2c + 0x50) = *arg2 != 0
        void* eax_71
        eax_71.b = 1
        return eax_71
    case 0x23
        *arg3 = zx.d(*(data_797d2c + 0x50))
        int32_t* eax_72
        eax_72.b = 1
        return eax_72
    case 0x24
        *(data_797d2c + 0x51) = *arg2 != 0
        void* eax_73
        eax_73.b = 1
        return eax_73
    case 0x25
        *arg3 = zx.d(*(data_797d2c + 0x51))
        int32_t* eax_74
        eax_74.b = 1
        return eax_74
    case 0x26
        *(data_797d2c + 0x52) = *arg2 != 0
        void* eax_75
        eax_75.b = 1
        return eax_75
    case 0x27
        *arg3 = zx.d(*(data_797d2c + 0x52))
        int32_t* eax_76
        eax_76.b = 1
        return eax_76
    case 0x28
        *arg3 = *(data_797d2c + 0x5c)
        int32_t* eax_77
        eax_77.b = 1
        return eax_77
    case 0x29
        *arg3 = *(data_797d2c + 0x60)
        int32_t* eax_78
        eax_78.b = 1
        return eax_78
    case 0x2a
        *arg3 = sub_408770()
        eax_59.b = 1
        return eax_59
    case 0x2b, 0x2c
        eax_59.b = 1
        return eax_59
