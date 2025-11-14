// 函数: sub_5a3660
// 地址: 0x5a3660
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg4
arg4 = nullptr
uint32_t ecx_3
uint32_t edx_3

if (arg1[0x21] s<= 0)
    ecx_3 = arg3 + 5
    edx_3 = ecx_3
else
    void* edi_1 = *arg1
    
    if (*(edi_1 + 0x2c) == 2)
        *(edi_1 + 0x2c) = sub_5a3c70(arg1)
    
    sub_5a2a80(arg1, &arg1[0x2c6])
    sub_5a2a80(arg1, &arg1[0x2c9])
    void* eax_3 = sub_5a3290(arg1)
    edx_3 = (arg1[0x5aa] + 0xa) u>> 3
    ecx_3 = (arg1[0x5ab] + 0xa) u>> 3
    arg4 = eax_3
    
    if (ecx_3 u<= edx_3)
        edx_3 = ecx_3

int32_t ecx_5

if (arg3 + 4 u<= edx_3 && arg2 != 0)
    ecx_5 = sub_5a35c0(arg1, edx_3, ebp.w, arg2, arg3)
else if (arg1[0x22] == 4 || ecx_3 == edx_3)
    void* ecx_13 = arg1[0x5af]
    char* ecx_15
    
    if (ecx_13 s<= 0xd)
        arg1[0x5ae].w |= (ebp.w + 2) << ecx_13.b
        ecx_15 = ecx_13 + 3
        arg1[0x5af] = ecx_15
    else
        edx_3.w = ebp.w + 2
        edx_3.w <<= ecx_13.b
        arg1[0x5ae].w |= edx_3.w
        arg1[5][arg1[2]] = arg1[0x5ae].b
        arg1[5] += 1
        arg1[5][arg1[2]] = *(arg1 + 0x16b9)
        int32_t edx_10 = arg1[0x5af]
        arg1[5] += 1
        ecx_15.b = 0x10
        ecx_15.b = 0x10 - edx_10.b
        edx_3 = edx_10 - 0xd
        arg1[0x5af] = edx_3
        arg1[0x5ae].w = (ebp.w + 2) u>> ecx_15.b
    
    int32_t var_14_4 = 0x746a58
    int32_t var_18_4 = 0x7465d8
    ecx_5 = sub_5a3870(arg1, edx_3, ecx_15)
else
    int32_t ecx_6 = arg1[0x5af]
    
    if (ecx_6 s<= 0xd)
        arg1[0x5ae].w |= (ebp.w + 4) << ecx_6.b
        arg1[0x5af] = ecx_6 + 3
    else
        char* eax_4
        eax_4.w = ebp.w + 4
        eax_4.w <<= ecx_6.b
        arg1[0x5ae].w |= eax_4.w
        arg1[5][arg1[2]] = arg1[0x5ae].b
        arg1[5] += 1
        arg1[5][arg1[2]] = *(arg1 + 0x16b9)
        int32_t ebx_3 = arg1[0x5af]
        arg1[5] += 1
        char* ecx_8
        ecx_8.b = 0x10
        ecx_8.b = 0x10 - ebx_3.b
        arg1[0x5af] = ebx_3 - 0xd
        arg1[0x5ae].w = (ebp.w + 4) u>> ecx_8.b
    
    void* var_14_3 = arg4 + 1
    int32_t ecx_11 = arg1[0x2ca] + 1
    int32_t var_18_3 = ecx_11
    int32_t edx_6 = arg1[0x2c7] + 1
    void* var_20_1 = &arg1[0x262]
    void* var_24_1 = &arg1[0x25]
    ecx_5 = sub_5a3870(arg1, sub_5a3360(arg1, edx_6, ecx_11, edx_6), &arg1[0x25])

sub_5a2680(ecx_5, arg1)

if (ebp == 0)
    return 0

return sub_5a3d60(arg1) __tailcall
