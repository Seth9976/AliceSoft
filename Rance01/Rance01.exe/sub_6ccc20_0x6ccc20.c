// 函数: sub_6ccc20
// 地址: 0x6ccc20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = sub_6cca90(arg1, arg2)

if (result != 0)
    goto label_6ccca8

result = sub_6ccb80(arg1, *arg2)

if (result != 0)
    goto label_6ccca8

int32_t edx_1 = *(arg1 + 0x54)

if (edx_1 == 1 && *(arg1 + 0x58) == 4)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 1, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 2)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 0, 6, 0x3f, 0, 2)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 0, 1, 0x3f, 2, 1)
    sub_6cc920(arg1, *(arg1 + 0x37e0) + 0xe0, 1, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x118, 0, 1, 0x3f, 1, 0)
else if (edx_1 == 2 && *(arg1 + 0x58) == 0xff)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 2, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 1, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 0, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xe0, 1, 6, 0x3f, 0, 0)
else if (edx_1 == 3 && *(arg1 + 0x58) == 3)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 3, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 2)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 2, 1, 0x3f, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 1, 1, 0x3f, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xe0, 0, 6, 0x3f, 0, 2)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x118, 0, 1, 0x3f, 2, 1)
    sub_6cc920(arg1, *(arg1 + 0x37e0) + 0x150, 3, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x188, 2, 1, 0x3f, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1c0, 1, 1, 0x3f, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1f8, 0, 1, 0x3f, 1, 0)
else if (edx_1 == 3 && *(arg1 + 0x58) == 1)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 3, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 1, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 2, 1, 5, 0, 0)
    sub_6cc920(arg1, *(arg1 + 0x37e0) + 0xe0, 3, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x118, 0, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x150, 1, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x188, 2, 6, 0x3f, 0, 0)
else if (edx_1 == 3 && *(arg1 + 0x58) == 0xff)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 3, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 1, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 2, 1, 5, 0, 0)
    sub_6cc920(arg1, *(arg1 + 0x37e0) + 0xe0, 3, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x118, 0, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x150, 1, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x188, 2, 6, 0x3f, 0, 0)
else if (edx_1 == 4 && *(arg1 + 0x58) == 5)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 4, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 1, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 2, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xe0, 3, 1, 5, 0, 0)
    sub_6cc920(arg1, *(arg1 + 0x37e0) + 0x118, 4, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x150, 0, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x188, 1, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1c0, 2, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1f8, 3, 6, 0x3f, 0, 0)
else if (edx_1 == 4 && *(arg1 + 0x58) == 6)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 4, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 2)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 2, 1, 0x3f, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 1, 1, 0x3f, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xe0, 3, 1, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x118, 0, 6, 0x3f, 0, 2)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x150, 0, 1, 0x3f, 2, 1)
    sub_6cc920(arg1, *(arg1 + 0x37e0) + 0x188, 4, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1c0, 2, 1, 0x3f, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1f8, 1, 1, 0x3f, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x230, 0, 1, 0x3f, 1, 0)
else if (edx_1 == 4 && *(arg1 + 0x58) == 0xff)
    sub_6cc920(arg1, *(arg1 + 0x37e0), 4, 0, 1)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x38, 0, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x70, 1, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xa8, 2, 1, 5, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0xe0, 3, 1, 5, 0, 0)
    sub_6cc920(arg1, *(arg1 + 0x37e0) + 0x118, 4, 1, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x150, 0, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x188, 1, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1c0, 2, 6, 0x3f, 0, 0)
    sub_6cc8c0(arg1, *(arg1 + 0x37e0) + 0x1f8, 3, 6, 0x3f, 0, 0)
else
    result = 0xfffffff8
label_6ccca8:
    
    if (*arg2 s> 0)
        int32_t ebx_1 = 0
        int32_t i = 0
        
        do
            int32_t var_3c_2 = *(ebx_1 + *(arg1 + 0x37e0) + 0x34)
            sub_6b4d5b()
            ebx_1 += 0x38
            i += 1
        while (i s< *arg2)
    
    int32_t var_3c_3 = *(arg1 + 0x37e0)
    sub_6b4d5b()
    *(arg1 + 0x37e0) = 0

return result
