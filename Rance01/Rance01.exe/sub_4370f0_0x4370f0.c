// 函数: sub_4370f0
// 地址: 0x4370f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (arg1 == 0)
    return 

int32_t eax_1 = (*(*arg1 + 0x10))()
int32_t eax_3 = (*(*arg1 + 0x14))()

if (eax_1 s<= 0 || eax_3 s<= 0)
    return 

int32_t* ecx_2 = 1
arg2 = 1

if (eax_1 s> 1)
    do
        ecx_2 *= 2
    while (ecx_2 s< eax_1)
    
    arg2 = ecx_2

int32_t edi = 1

if (eax_3 s> 1)
    do
        edi *= 2
    while (edi s< eax_3)

int32_t eax_5 = (*(*ebp + 0x3c))(arg1, 0)
int32_t* esi_1 = nullptr

if (eax_5 == 0)
    return 

int32_t* eax_7 = operator new(0x18)

if (eax_7 != 0)
    __builtin_memset(&eax_7[1], 0, 0x14)
    *eax_7 = 1
    esi_1 = eax_7

esi_1[2] = arg2
int32_t* ecx_6 = esi_1[1]
esi_1[4] = eax_1
esi_1[5] = eax_3
esi_1[3] = edi

if (eax_5 == ecx_6)
    return 

if (ecx_6 != 0)
    (*(*ecx_6 + 4))()
    esi_1[1] = 0

esi_1[1] = eax_5
