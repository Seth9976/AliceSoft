// 函数: sub_5ec6c0
// 地址: 0x5ec6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 8
    
    do
        *result = fconvert.s(fconvert.t(esi_1[-2]))
        result[1] = fconvert.s(fconvert.t(esi_1[-1]))
        result[2] = *esi_1
        result[3] = esi_1[1]
        sub_401180(&result[4], 0xffffffff, &esi_1[2], 0)
        sub_401180(&result[0xb], 0xffffffff, &esi_1[9], 0)
        result[0x12].b = esi_1[0x10].b
        sub_5ec870(&result[0x13], &esi_1[0x11])
        sub_4b55f0(&result[0x17], &esi_1[0x15])
        esi_1 = &esi_1[0x1b]
        result = &result[0x1b]
    while (&esi_1[-2] != arg4)

return result
