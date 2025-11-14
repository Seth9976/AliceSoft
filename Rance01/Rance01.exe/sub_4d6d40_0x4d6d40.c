// 函数: sub_4d6d40
// 地址: 0x4d6d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 != arg2)
    void* ebp_2 = arg3 + 0x4c
    int32_t* ebx_1 = arg1 + 0x4c
    
    do
        sub_401180(arg3, 0xffffffff, &ebx_1[-0x13], 0)
        *(ebp_2 - 0x30) = ebx_1[-0xc]
        *(ebp_2 - 0x2c) = ebx_1[-0xb]
        *(ebp_2 - 0x28) = ebx_1[-0xa]
        sub_4d0360(ebp_2 - 0x24, &ebx_1[-9])
        *(ebp_2 - 0x10) = ebx_1[-4]
        arg3 += 0x9c
        *(ebp_2 - 0xc) = ebx_1[-3]
        *(ebp_2 - 8) = ebx_1[-2]
        *(ebp_2 - 4) = ebx_1[-1]
        *ebp_2 = *ebx_1
        *(ebp_2 + 4) = ebx_1[1]
        *(ebp_2 + 8) = ebx_1[2]
        int32_t ecx_5
        ecx_5.b = ebx_1[3].b
        ebx_1 = &ebx_1[0x27]
        *(ebp_2 + 0xc) = ecx_5.b
        void* edi_1 = ebp_2 + 0x10
        ebp_2 += 0x9c
        __builtin_memcpy(edi_1, &ebx_1[4], 0x40)
    while (&ebx_1[-0x13] != arg2)

return arg3
