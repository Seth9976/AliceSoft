// 函数: sub_5904d0
// 地址: 0x5904d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0xc))()
int32_t ebx = 1

if (arg2 s> 1)
    do
        ebx *= 2
    while (ebx s< arg2)

int32_t ecx_1 = 1
int32_t var_4 = 1

if (arg3 s> 1)
    do
        ecx_1 *= 2
    while (ecx_1 s< arg3)
    
    var_4 = ecx_1

int32_t var_8
int32_t edx_2

if (arg6 == 0)
    edx_2 = 1
    var_8 = 0
else
    int32_t edx_1 = ecx_1
    int32_t eax = ebx
    
    if ((ebx.b & 1) == 0)
        do
            eax s>>= 1
        while ((eax.b & 1) == 0)
    
    if (eax != 1)
        edx_2 = 1
        var_8 = 0
    else
        if ((eax.b & ecx_1.b) == 0)
            do
                edx_1 s>>= 1
            while ((edx_1.b & 1) == 0)
        
        if (edx_1 != 1)
            edx_2 = 1
            var_8 = 0
        else
            edx_2 = 0
            var_8 = 0x400

int32_t* eax_3 = **(arg1[2] + 0x1c)

if ((*(*eax_3 + 0x5c))(eax_3, ebx, ecx_1, edx_2, var_8, 0x15, 1, &arg1[3], 0) s< 0)
    int32_t eax_4
    eax_4.b = 0
    return eax_4

arg1[7] = arg2
int32_t edx_3
edx_3.b = arg5
arg1[9].b = arg4
*(arg1 + 0x25) = edx_3.b
edx_3.b = arg6
int32_t ecx_4 = 1
arg1[5] = ebx
arg1[6] = var_4
arg1[8] = arg3
*(arg1 + 0x26) = edx_3.b
*(arg1 + 0x27) = 1

if (ebx s> 1)
    do
        ecx_4 *= 2
    while (ecx_4 s< ebx)

int32_t eax_6 = 1

if (var_4 s> 1)
    do
        eax_6 *= 2
    while (eax_6 s< var_4)

uint32_t eax_9 = eax_6 * ecx_4 * 4
arg1[0xb] = eax_9

if (edx_3.b != 0)
    arg1[0xb] = (eax_9 * 3) u>> 1

eax_9.b = 1
return eax_9
