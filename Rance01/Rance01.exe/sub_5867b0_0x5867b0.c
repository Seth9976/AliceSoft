// 函数: sub_5867b0
// 地址: 0x5867b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3

if (ebp s<= 0 || arg2 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* eax_1 = *arg1

if (eax_1 != 0)
    int32_t var_c_1 = *eax_1
    sub_6b4d5b()
    int32_t var_10_1 = *arg1
    sub_6b4d5b()
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

int32_t ecx_2
ecx_2.b = mulu.dp.d(arg2, 4) u>> 0x20 != 0
*arg1 = operator new(neg.d(ecx_2) | (arg2 * 4))
int32_t eax_7 = ebp * arg2
int32_t ecx_5
ecx_5.b = mulu.dp.d(eax_7, 4) u>> 0x20 != 0
**arg1 = operator new(neg.d(ecx_5) | (eax_7 * 4))
int32_t eax_10 = 1

if (arg2 s> 1)
    int32_t ebx_1 = ebp << 2
    int32_t edx_1 = ebx_1
    
    do
        int32_t* ecx_9 = *arg1
        ecx_9[eax_10] = *ecx_9 + edx_1
        eax_10 += 1
        edx_1 += ebx_1
    while (eax_10 s< arg2)
    
    ebp = arg3

arg1[1] = ebp
arg1[2] = arg2
eax_10.b = 1
return eax_10
