// 函数: sub_6d0d90
// 地址: 0x6d0d90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg5 != 0)
    int32_t edx_8 = sx.d(*arg4) s>> arg6
    
    if (arg1[0xf] != 0)
        return sub_6d0080(arg1, edx_8, 1)
    
    return sub_6cffa0(arg1, edx_8, 1)

int32_t edx_2 = sx.d(*arg4) s>> arg6
int32_t esi_3 = neg.d(*arg3) + edx_2
*arg3 = sx.d(edx_2.w)
int32_t ebp_1

if (esi_3 s< 0)
    if (esi_3 s<= 0xffffff00)
        ebp_1 = sx.d(*((neg.d(esi_3) s>> 8) + 0x79b560)) + 8
    else
        ebp_1 = sx.d(*(0x79b560 - esi_3))
    
    esi_3 -= 1
else if (esi_3 s>= 0x100)
    ebp_1 = sx.d(*((esi_3 s>> 8) + 0x79b560)) + 8
else
    ebp_1 = sx.d(*(esi_3 + 0x79b560))

uint32_t edx_6 = zx.d(*(arg2 + (ebp_1 << 1) + 0x408))
int32_t ecx_1 = *(arg2 + (ebp_1 << 2) + 8)
int32_t result

if (arg1[0xf] != 0)
    result = sub_6d0080(arg1, edx_6, ecx_1)
else
    result = sub_6cffa0(arg1, edx_6, ecx_1)

if (result != 0)
    return result

if (arg1[0xf] != 0)
    return sub_6d0080(arg1, esi_3, ebp_1)

return sub_6cffa0(arg1, esi_3, ebp_1)
