// 函数: sub_59b5d0
// 地址: 0x59b5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s< 0 || arg2 s>= arg3[1])
    arg3.b = 0
    return arg3

int32_t* esi = *arg3
int32_t* eax = *esi
int32_t ecx = 0

if (arg2 s> 0)
    do
        if (eax == esi)
            goto label_59b5f6
        
        eax = *eax
        ecx += 1
    while (ecx s< arg2)

eax = eax[2]

if (eax != 0)
    return sub_59a640(eax, arg4) != 0

label_59b5f6:
eax.b = 0
return eax
