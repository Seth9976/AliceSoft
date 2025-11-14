// 函数: sub_56ddd0
// 地址: 0x56ddd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
int32_t ebp = arg3

if (*(arg1 + 0x18) != 0)
    if (*(arg1 + 0x3c) == 0)
        sub_56e0c0(arg1, &arg3, &arg2)
        int32_t ebp_1 = ebp - arg2
        int32_t ebx_1 = ebx - arg3
        
        if (ebx - arg3 s>= 0 && ebx_1 s< *(arg1 + 0x34) && ebp_1 s>= 0 && ebp_1 s< *(arg1 + 0x38))
            *arg4 = divs.dp.d(sx.q((*(**(arg1 + 0x18) + 0x10))() * ebx_1), *(arg1 + 0x34))
            int32_t eax_12
            int32_t edx_6
            edx_6:eax_12 = sx.q((*(**(arg1 + 0x18) + 0x14))() * ebp_1)
            *(arg1 + 0x38)
            *arg5 = divs.dp.d(edx_6:eax_12, *(arg1 + 0x38))
            int32_t eax_13
            eax_13.b = 1
            return eax_13
    else if (ebx s>= 0 && ebx s< (*(**(arg1 + 0x18) + 0x10))() && ebp s>= 0
            && ebp s< (*(**(arg1 + 0x18) + 0x14))())
        *arg4 = ebx
        *arg5 = ebp
        int32_t* eax_3
        eax_3.b = 1
        return eax_3

int32_t eax
eax.b = 0
return eax
