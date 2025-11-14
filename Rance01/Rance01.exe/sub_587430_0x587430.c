// 函数: sub_587430
// 地址: 0x587430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0xc))()

if (arg4 u> 4)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t ecx

switch (arg4)
    case 0
        ecx = 0
    case 1
        ecx = 2
    case 2
        ecx = 4
    case 3
        ecx = 8
    case 4
        ecx = 0x10

int32_t* eax_3 = **(arg1[2] + 0x1c)

if ((*(*eax_3 + 0x74))(eax_3, arg2, arg3, 0x50, ecx, 0, 1, &arg1[3], 0) s< 0)
    int32_t eax_5
    eax_5.b = 0
    return eax_5

int32_t ecx_1 = 1
arg1[6] = arg2
arg1[7] = arg3
arg1[8] = arg4
arg1[5].b = 1

if (arg2 s> 1)
    do
        ecx_1 *= 2
    while (ecx_1 s< arg2)

int32_t eax_6 = 1

if (arg3 s> 1)
    do
        eax_6 *= 2
    while (eax_6 s< arg3)

arg1[9] = eax_6 * ecx_1 * 2
int32_t eax_8
eax_8.b = 1
return eax_8
