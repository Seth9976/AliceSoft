// 函数: sub_5b0870
// 地址: 0x5b0870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg5

if (arg3 == 0 || arg1 == 0)
    return 

if (arg4 != 0)
    sub_5a4280(arg3, arg1, 0x2000, 0)
    int32_t eax = *(arg3 + 0x264)
    int32_t eax_1
    
    if (eax == 0)
        eax_1 = sub_6b5c43(0x100)
    else
        eax_1 = eax(arg3, 0x100)
    
    if (eax_1 == 0 && (*(arg3 + 0x70) & 0x100000) == 0)
        sub_5a5c60(arg3, "Out of Memory")
        noreturn
    
    *(arg1 + 0x4c) = eax_1
    *(arg3 + 0x1a4) = eax_1
    
    if (ebp - 1 u<= 0xff)
        sub_6c02a0(*(arg1 + 0x4c), arg4, ebp)

if (arg6 != 0)
    int32_t eax_3 = 1 << *(arg1 + 0x18)
    uint32_t ecx_1
    ecx_1.b = *(arg1 + 0x19)
    
    if (ecx_1.b == 0 && zx.d(arg6[2].w) s> eax_3)
        sub_5a5de0("tRNS chunk has out-of-range samples for bit_depth", arg3)
    else if (ecx_1.b == 2 &&
            (zx.d(*(arg6 + 2)) s> eax_3 || zx.d(arg6[1].w) s> eax_3 || zx.d(*(arg6 + 6)) s> eax_3))
        sub_5a5de0("tRNS chunk has out-of-range samples for bit_depth", arg3)
    
    arg1[5].d = *arg6
    *(arg1 + 0x54) = arg6[1]
    ecx_1.w = arg6[2].w
    *(arg1 + 0x58) = ecx_1.w
    
    if (ebp == 0)
        ebp = 1

*(arg1 + 0x16) = ebp.w

if (ebp != 0)
    *(arg1 + 8) |= 0x10
    *(arg1 + 0xb8) |= 0x2000
