// 函数: sub_534460
// 地址: 0x534460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax

switch (arg2)
    case 0, 0x1b
        *arg4 = 0
        eax.b = 1
        return eax
    case 0xa, 0xb, 0x2f
        *arg4 = arg3
        uint32_t eax_1
        eax_1.b = 1
        return eax_1
    case 0xc
        if (arg3 s< 0)
        label_5344ba:
            *arg4 = 0xffffffff
            uint32_t* eax_2
            eax_2.b = 1
            return eax_2
        
        eax = sub_5348c0(arg3, arg1, arg5)
    label_5344d4:
        *arg4 = eax
        
        if (eax s>= 0)
            eax.b = 1
            return eax
    case 0xd
        if (arg3 s< 0)
            goto label_5344a2
        
        eax = sub_5349a0(arg3, arg1, arg5)
        goto label_5344d4
    case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
        if (arg3 s< 0)
            goto label_5344ba
        
        eax = sub_5345a0(arg1, arg3, arg5)
        *arg4 = eax
        
        if (eax s>= 0)
            eax.b = 1
            return eax
    case 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1f, 0x20, 0x33, 0x34, 0x43, 0x44
    label_5344a2:
        *arg4 = 0xffffffff
        eax.b = 1
        return eax
    case 0x3f
        *arg4 = 0
        eax.b = 1
        return eax

eax.b = 0
return eax
