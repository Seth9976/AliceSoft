// 函数: sub_4d08e0
// 地址: 0x4d08e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool cond:0 = *(arg1 + 0x20) u< 0x10
*(arg1 + 0x1c) = 0
int32_t* eax

if (cond:0)
    eax = arg1 + 0xc
else
    eax = *(arg1 + 0xc)

*eax = 0
int32_t* esi = *(arg1 + 8)

if (esi != 0)
    sub_4d0e60(esi)
    *(arg1 + 8) = 0

if (arg3[4] != 0)
    int32_t* eax_2 = sub_50b110(arg2, *(arg1 + 0x28), arg3)
    *(arg1 + 8) = eax_2
    
    if (eax_2 == 0)
        eax_2.b = 0
        return eax_2
    
    sub_401180(arg1 + 0xc, 0xffffffff, arg3, 0)

eax.b = 1
return eax
