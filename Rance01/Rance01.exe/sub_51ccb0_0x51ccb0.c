// 函数: sub_51ccb0
// 地址: 0x51ccb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1

for (int32_t* i = *arg2; i != arg2[1]; i = &i[0x16])
    sub_51cbb0(arg4, arg3, esi, *i)
    float var_c
    sub_4b8190(arg3, arg4, &var_c, i[1])
    long double x87_r7_1 = fconvert.t(var_c)
    *(esi + 0xc) = fconvert.s(x87_r7_1)
    float var_8
    long double x87_r6_1 = fconvert.t(var_8)
    *(esi + 0x10) = fconvert.s(x87_r6_1)
    float var_4
    *(esi + 0x14) = fconvert.s(fconvert.t(var_4))
    *(esi + 0x18) = i[5]
    long double x87_r7_5
    
    if (i[0xd].b == 0)
        *(esi + 0x1c) = fconvert.s(fconvert.t(i[7]))
        x87_r7_5 = fconvert.t(i[8])
    else
        long double x87_r5_2 = fconvert.t(0.5)
        *(esi + 0x1c) = fconvert.s(x87_r7_1 * x87_r5_2 + x87_r5_2)
        x87_r7_5 = x87_r5_2 - x87_r6_1 * x87_r5_2
    
    *(esi + 0x20) = fconvert.s(x87_r7_5)
    esi += 0x24
    
    if (arg5 != 0)
        esi += 8
        *(esi - 8) = fconvert.s(fconvert.t(i[9]))
        *(esi - 4) = fconvert.s(fconvert.t(i[0xa]))
