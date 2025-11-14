// 函数: sub_4f4f40
// 地址: 0x4f4f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 s>= 0)
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x30c30c31, *(arg2 + 0x1c) - *(arg2 + 0x18))
    int32_t edx_4 = edx_3 s>> 4
    
    if (arg3 s< (edx_4 u>> 0x1f) + edx_4 && arg1 s>= 0)
        int32_t ebp_1 = arg3 * 0x54
        int32_t eax_5 = *(arg2 + 0x18)
        int32_t eax_6
        int32_t edx_8
        edx_8:eax_6 = muls.dp.d(0x4bda12f7, *(eax_5 + ebp_1 + 0x44) - *(eax_5 + ebp_1 + 0x40))
        int32_t edx_9 = edx_8 s>> 5
        
        if (arg1 s< (edx_9 u>> 0x1f) + edx_9)
            int32_t* ecx_1 = arg1 * 0x6c + *(eax_5 + ebp_1 + 0x40)
            *arg4 = ecx_1[2]
            *arg5 = ecx_1[1]
            *arg6 = *ecx_1
            *arg7 = ecx_1[5]
            *arg8 = ecx_1[4]
            *arg9 = ecx_1[3]
            *arg10 = ecx_1[8]
            *arg11 = ecx_1[7]
            *arg12 = ecx_1[6]
            *arg13 = ecx_1[0xb]
            *arg14 = ecx_1[0xa]
            *arg15 = ecx_1[9]
            *arg16 = ecx_1[0xe]
            *arg17 = ecx_1[0xd]
            *arg18 = ecx_1[0xc]
            *arg19 = *(ecx_1 + 0x3e)
            *arg20 = *(ecx_1 + 0x3d)
            *arg21 = ecx_1[0xf].b
            *arg22 = ecx_1[0x16]
            arg22[1] = ecx_1[0x17]
            arg22[2] = ecx_1[0x18]
            *arg23 = ecx_1[0x13]
            arg23[1] = ecx_1[0x14]
            arg23[2] = ecx_1[0x15]
            *arg24 = ecx_1[0x10]
            arg24[1] = ecx_1[0x11]
            arg24[2] = ecx_1[0x12]
            *arg25 = ecx_1[0x19]
            int32_t* eax_10
            eax_10.b = 1
            return eax_10

int32_t eax
eax.b = 0
return eax
