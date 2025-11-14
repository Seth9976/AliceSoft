// 函数: sub_59e890
// 地址: 0x59e890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg4

if (arg1 == 0 || *arg1 != 0x31)
    return 0xfffffffa

if (arg3 != 0)
    *(arg3 + 0x18) = 0
    
    if (*(arg3 + 0x20) == 0)
        *(arg3 + 0x20) = sub_5a3e40
        *(arg3 + 0x28) = 0
    
    if (*(arg3 + 0x24) == 0)
        *(arg3 + 0x24) = sub_5a3e60
    
    if (ebp == 0xffffffff)
        ebp = 6
    label_59e8fb:
        void** eax_2 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1, 0x16c4)
        
        if (eax_2 != 0)
            *(arg3 + 0x1c) = eax_2
            *eax_2 = arg3
            eax_2[6] = 1
            eax_2[7] = 0
            eax_2[0xc] = 0xf
            eax_2[0xb] = 0x8000
            eax_2[0xd] = 0x7fff
            eax_2[0x14] = 0xf
            eax_2[0x13] = 0x8000
            eax_2[0x15] = 0x7fff
            eax_2[0x16] = 5
            int32_t eax_4 = (*(arg3 + 0x20))(*(arg3 + 0x28), 0x8000, 2)
            int32_t ecx_1 = eax_2[0xb]
            eax_2[0xe] = eax_4
            int32_t eax_6 = (*(arg3 + 0x20))(*(arg3 + 0x28), ecx_1, 2)
            int32_t ecx_2 = eax_2[0x13]
            eax_2[0x10] = eax_6
            eax_2[0x11] = (*(arg3 + 0x20))(*(arg3 + 0x28), ecx_2, 2)
            eax_2[0x5b0] = 0
            eax_2[0x5a7] = 0x4000
            int32_t eax_9 = (*(arg3 + 0x20))(*(arg3 + 0x28), 0x4000, 4)
            int32_t ecx_4 = eax_2[0x5a7]
            eax_2[2] = eax_9
            eax_2[3] = ecx_4 << 2
            
            if (eax_2[0xe] != 0 && eax_2[0x10] != 0 && eax_2[0x11] != 0 && eax_9 != 0)
                eax_2[0x5a6] = ecx_4 * 3 + eax_9
                eax_2[0x21] = ebp
                eax_2[0x22] = 0
                eax_2[0x5a9] = eax_9 + (ecx_4 u>> 1 << 1)
                eax_2[9].b = 8
                return sub_59ea90(arg3) __tailcall
            
            eax_2[1] = 0x29a
            *(arg3 + 0x18) = "insufficient memory"
            sub_59f250(arg3)
        
        return 0xfffffffc
    
    if (ebp s>= 0 && ebp s<= 9)
        goto label_59e8fb

return 0xfffffffe
